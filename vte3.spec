%global apiver 2.90

Name: vte3
Version: 0.36.5
Release: 1%{?dist}
Summary: Terminal emulator library
License: LGPLv2+
Group: User Interface/X
URL: http://www.gnome.org/
#VCS: git:git://git.gnome.org/vte
Source: http://download.gnome.org/sources/vte/0.36/vte-%{version}.tar.xz
# https://bugzilla.gnome.org/show_bug.cgi?id=688456
Patch0: 0001-widget-Only-show-the-cursor-on-motion-if-moved.patch

BuildRequires: gtk3-devel >= 3.0.0
BuildRequires: ncurses-devel
BuildRequires: gettext
BuildRequires: libXt-devel
BuildRequires: intltool
BuildRequires: gobject-introspection-devel

# initscripts creates the utmp group
Requires: initscripts
Requires: vte-profile

%description
VTE is a library implementing a terminal emulator widget for GTK+. VTE
is mainly used in gnome-terminal, but can also be used to embed a
console/terminal in games, editors, IDEs, etc.

VTE supports Unicode and character set conversion, as well as emulating
any terminal known to the system's terminfo database.

%package devel
Summary: Development files for %{name}
Group: Development/Libraries
Requires: %{name}%{?_isa} = %{version}-%{release}
Requires: ncurses-devel%{?_isa}

%description devel
The %{name}-devel package contains libraries and header files for
developing applications that use %{name}.

%prep
%setup -q -n vte-%{version}
%patch0 -p1 -b .motion

%build
CFLAGS="%optflags -fPIE -DPIE" \
CXXFLAGS="$CFLAGS" \
LDFLAGS="$LDFLAGS -Wl,-z,relro -Wl,-z,now -pie" \
%configure \
        --enable-shared \
        --disable-static \
        --with-gtk=3.0 \
        --libexecdir=%{_libdir}/vte-%{apiver} \
        --without-glX \
        --disable-gtk-doc \
        --enable-introspection
make %{?_smp_mflags} V=1

%install
make install DESTDIR=$RPM_BUILD_ROOT

# Remove the vte.sh built here and use the one from the vte-profile package
# instead.
rm -f $RPM_BUILD_ROOT%{_sysconfdir}/profile.d/vte.sh

rm -f $RPM_BUILD_ROOT%{_libdir}/*.la

%find_lang vte-%{apiver}

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files -f vte-%{apiver}.lang
%doc COPYING NEWS README
%{_libdir}/*.so.*
%dir %{_libdir}/vte-%{apiver}
%attr(2711,root,utmp) %{_libdir}/vte-%{apiver}/gnome-pty-helper
%{_libdir}/girepository-1.0

%files devel
%{_includedir}/*
%{_libdir}/*.so
%{_libdir}/pkgconfig/*
%{_bindir}/vte2_90
%doc %{_datadir}/gtk-doc/
%{_datadir}/gir-1.0


%changelog
* Wed Mar 09 2016 Debarshi Ray <rishi@fedorapeople.org> - 0.36.5-1
- Update to 0.36.5
Resolves: #1303634

* Tue May 19 2015 David King <dking@redhat.com> - 0.36.4-1
- Update to 0.36.4
Resolves: #1222692

* Fri Jan 24 2014 Daniel Mach <dmach@redhat.com> - 0.34.6-3
- Mass rebuild 2014-01-24

* Fri Dec 27 2013 Daniel Mach <dmach@redhat.com> - 0.34.6-2
- Mass rebuild 2013-12-27

* Mon Jun 10 2013 Kalev Lember <kalevlember@gmail.com> - 0.34.6-1
- Update to 0.34.6

* Mon May 13 2013 Richard Hughes <rhughes@redhat.com> - 0.34.5-1
- Update to 0.34.5

* Mon Apr 15 2013 Kalev Lember <kalevlember@gmail.com> - 0.34.4-1
- Update to 0.34.4

* Tue Mar 26 2013 Kalev Lember <kalevlember@gmail.com> - 0.34.3-1
- Update to 0.34.3

* Thu Jan 31 2013 Tomas Bzatek <tbzatek@redhat.com> - 0.34.2-4
- Enable verbose build
- Build with full RELRO and PIE for sgid gnome-pty-helper

* Thu Nov 29 2012 Peter Robinson <pbrobinson@fedoraproject.org> 0.34.2-3
- Add patch to fix an introspection issue. Fixes RHBZ #881662

* Fri Nov 16 2012 Bastien Nocera <bnocera@redhat.com> 0.34.2-2
- Only show the cursor on motion if moved

* Tue Nov 13 2012 Kalev Lember <kalevlember@gmail.com> - 0.34.2-1
- Update to 0.34.2

* Tue Oct 16 2012 Kalev Lember <kalevlember@gmail.com> - 0.34.1-1
- Update to 0.34.1

* Tue Sep 18 2012 Kalev Lember <kalevlember@gmail.com> - 0.34.0-1
- Update to 0.34.0
- Include /etc/profile.d/vte.sh

* Wed Aug 22 2012 Richard Hughes <hughsient@gmail.com> - 0.33.90-1
- Update to 0.33.90

* Fri Jul 27 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.32.2-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_18_Mass_Rebuild

* Thu Jun 07 2012 Richard Hughes <hughsient@gmail.com> - 0.32.2-1
- Update to 0.32.2

* Tue Apr 17 2012 Kalev Lember <kalevlember@gmail.com> - 0.32.1-1
- Update to 0.32.1

* Wed Mar 21 2012 Kalev Lember <kalevlember@gmail.com> - 0.32.0-1
- Update to 0.32.0
- Dropped upstreamed vte-scroll-mask.patch

* Wed Mar 07 2012 Kalev Lember <kalevlember@gmail.com> - 0.31.0-4
- Fix scrolling with latest gtk3

* Sat Jan 14 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.31.0-3
- Rebuilt for https://fedoraproject.org/wiki/Fedora_17_Mass_Rebuild

* Wed Dec 14 2011 Tomas Bzatek <tbzatek@redhat.com> - 0.31.0-2
- Fix problems with Alt<>Meta with recent gtk

* Mon Nov 21 2011 Matthias Clasen <mclasen@redhat.com> - 0.31.0-1
- Update to 0.31.0

* Wed Oct 26 2011 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.30.1-2
- Rebuilt for glibc bug#747377

* Tue Oct 18 2011 Matthias Clasen <mclasen@redhat.com> - 0.30.1-1
- Update to 0.30.1

* Tue Sep 27 2011 Ray <rstrode@redhat.com> - 0.30.0-1
- Update to 0.30.0

* Wed Aug 31 2011 Matthias Clasen <mclasen@redhat.com> - 0.29.1-1
- Update to 0.29.1

* Thu Jun 16 2011 Tomas Bzatek <tbzatek@redhat.com> - 0.28.1-1
- Update to 0.28.1

* Mon Apr  4 2011 Matthias Clasen <mclasen@redhat.com> 0.28.0-1
- Update to 0.28.0

* Thu Feb 24 2011 Matthias Clasen <mclasen@redhat.com> 0.27.90-2
- Enable introspection

* Tue Feb 22 2011 Matthias Clasen <mclasen@redhat.com> 0.27.90-1
- Update to 0.27.90

* Thu Feb 10 2011 Matthias Clasen <mclasen@redhat.com> 0.27.5-3
- Rebuild against newer gtk

* Mon Feb 07 2011 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.27.5-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_15_Mass_Rebuild

* Wed Feb  2 2011 Matthias Clasen <mclasen@redhat.com> 0.27.5-1
- 0.27.5

* Fri Jan 14 2011 Matthias Clasen <mclasen@redhat.com> 0.27.4-2
- Stop shrinking-terminal disease

* Tue Jan 11 2011 Matthias Clasen <mclasen@redhat.com> 0.27.4-1
- Update to 0.27.4

* Fri Jan  7 2011 Matthias Clasen <mclasen@redhat.com> 0.27.3-1
- Update to 0.27.3

* Fri Dec  3 2010 Matthias Clasen <mclasen@redhat.com> 0.27.2-2
- Rebuild against new gtk

* Thu Nov 11 2010 Matthias Clasen <mclasen@redhat.com> 0.27.2-1
- Update to 0.27.2

* Mon Nov  1 2010 Matthias Clasen <mclasen@redhat.com> 0.27.2-0.1.git512516
- Git snapshot that builds with recent gtk3

* Mon Oct  4 2010 Matthias Clasen <mclasen@redhat.com> 0.27.0-1
- Initial packaging
