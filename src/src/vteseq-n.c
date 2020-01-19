/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf -m 100 vteseq-n.gperf  */
/* Computed positions: -k'1,9,12' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 16 "vteseq-n.gperf"
struct vteseq_n_struct {
	int seq;
	VteTerminalSequenceHandler handler;
};
#include <string.h>
/* maximum key range = 116, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
vteseq_n_hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126,   2, 126, 126, 126,   2,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126,  20,  23,   5,
       44,   2,   8, 126,  26,  11, 126,   5,   8,  11,
       23,   5,  71, 126,   2,   2,  56,   5,  20,   5,
      126,   5, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
      case 10:
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

struct vteseq_n_pool_t
  {
    char vteseq_n_pool_str10[sizeof("set-mode")];
    char vteseq_n_pool_str13[sizeof("save-mode")];
    char vteseq_n_pool_str14[sizeof("soft-reset")];
    char vteseq_n_pool_str15[sizeof("save-cursor")];
    char vteseq_n_pool_str16[sizeof("index")];
    char vteseq_n_pool_str18[sizeof("scroll-down")];
    char vteseq_n_pool_str20[sizeof("full-reset")];
    char vteseq_n_pool_str21[sizeof("cursor-down")];
    char vteseq_n_pool_str22[sizeof("erase-in-display")];
    char vteseq_n_pool_str23[sizeof("restore-cursor")];
    char vteseq_n_pool_str24[sizeof("change-color")];
    char vteseq_n_pool_str25[sizeof("cursor-next-line")];
    char vteseq_n_pool_str26[sizeof("set-current-file-uri")];
    char vteseq_n_pool_str27[sizeof("restore-mode")];
    char vteseq_n_pool_str28[sizeof("reverse-index")];
    char vteseq_n_pool_str29[sizeof("cursor-lower-left")];
    char vteseq_n_pool_str30[sizeof("cursor-preceding-line")];
    char vteseq_n_pool_str31[sizeof("set-current-directory-uri")];
    char vteseq_n_pool_str33[sizeof("return-terminal-id")];
    char vteseq_n_pool_str34[sizeof("next-line")];
    char vteseq_n_pool_str35[sizeof("change-cursor-colors")];
    char vteseq_n_pool_str36[sizeof("insert-lines")];
    char vteseq_n_pool_str37[sizeof("return-terminal-status")];
    char vteseq_n_pool_str39[sizeof("character-position-absolute")];
    char vteseq_n_pool_str40[sizeof("erase-in-line")];
    char vteseq_n_pool_str42[sizeof("cursor-back-tab")];
    char vteseq_n_pool_str43[sizeof("erase-characters")];
    char vteseq_n_pool_str44[sizeof("cursor-forward")];
    char vteseq_n_pool_str45[sizeof("cursor-backward")];
    char vteseq_n_pool_str46[sizeof("line-position-absolute")];
    char vteseq_n_pool_str47[sizeof("insert-blank-characters")];
    char vteseq_n_pool_str48[sizeof("send-primary-device-attributes")];
    char vteseq_n_pool_str49[sizeof("utf-8-character-set")];
    char vteseq_n_pool_str50[sizeof("decset")];
    char vteseq_n_pool_str51[sizeof("application-keypad")];
    char vteseq_n_pool_str52[sizeof("decreset")];
    char vteseq_n_pool_str53[sizeof("set-scrolling-region")];
    char vteseq_n_pool_str54[sizeof("screen-alignment-test")];
    char vteseq_n_pool_str55[sizeof("cursor-forward-tabulation")];
    char vteseq_n_pool_str56[sizeof("reset-mode")];
    char vteseq_n_pool_str57[sizeof("vertical-tab")];
    char vteseq_n_pool_str58[sizeof("normal-keypad")];
    char vteseq_n_pool_str59[sizeof("send-secondary-device-attributes")];
    char vteseq_n_pool_str60[sizeof("set-scrolling-region-to-end")];
    char vteseq_n_pool_str61[sizeof("form-feed")];
    char vteseq_n_pool_str62[sizeof("iso8859-1-character-set")];
    char vteseq_n_pool_str63[sizeof("tab-set")];
    char vteseq_n_pool_str64[sizeof("set-scrolling-region-from-start")];
    char vteseq_n_pool_str67[sizeof("tab-clear")];
    char vteseq_n_pool_str69[sizeof("delete-lines")];
    char vteseq_n_pool_str70[sizeof("linux-console-cursor-attributes")];
    char vteseq_n_pool_str73[sizeof("set-icon-and-window-title")];
    char vteseq_n_pool_str74[sizeof("set-icon-title")];
    char vteseq_n_pool_str75[sizeof("dec-device-status-report")];
    char vteseq_n_pool_str76[sizeof("cursor-character-absolute")];
    char vteseq_n_pool_str79[sizeof("set-window-title")];
    char vteseq_n_pool_str81[sizeof("cursor-position")];
    char vteseq_n_pool_str82[sizeof("scroll-up")];
    char vteseq_n_pool_str83[sizeof("character-attributes")];
    char vteseq_n_pool_str85[sizeof("cursor-up")];
    char vteseq_n_pool_str96[sizeof("request-terminal-parameters")];
    char vteseq_n_pool_str98[sizeof("horizontal-and-vertical-position")];
    char vteseq_n_pool_str107[sizeof("delete-characters")];
    char vteseq_n_pool_str115[sizeof("window-manipulation")];
    char vteseq_n_pool_str125[sizeof("device-status-report")];
  };
static const struct vteseq_n_pool_t vteseq_n_pool_contents =
  {
    "set-mode",
    "save-mode",
    "soft-reset",
    "save-cursor",
    "index",
    "scroll-down",
    "full-reset",
    "cursor-down",
    "erase-in-display",
    "restore-cursor",
    "change-color",
    "cursor-next-line",
    "set-current-file-uri",
    "restore-mode",
    "reverse-index",
    "cursor-lower-left",
    "cursor-preceding-line",
    "set-current-directory-uri",
    "return-terminal-id",
    "next-line",
    "change-cursor-colors",
    "insert-lines",
    "return-terminal-status",
    "character-position-absolute",
    "erase-in-line",
    "cursor-back-tab",
    "erase-characters",
    "cursor-forward",
    "cursor-backward",
    "line-position-absolute",
    "insert-blank-characters",
    "send-primary-device-attributes",
    "utf-8-character-set",
    "decset",
    "application-keypad",
    "decreset",
    "set-scrolling-region",
    "screen-alignment-test",
    "cursor-forward-tabulation",
    "reset-mode",
    "vertical-tab",
    "normal-keypad",
    "send-secondary-device-attributes",
    "set-scrolling-region-to-end",
    "form-feed",
    "iso8859-1-character-set",
    "tab-set",
    "set-scrolling-region-from-start",
    "tab-clear",
    "delete-lines",
    "linux-console-cursor-attributes",
    "set-icon-and-window-title",
    "set-icon-title",
    "dec-device-status-report",
    "cursor-character-absolute",
    "set-window-title",
    "cursor-position",
    "scroll-up",
    "character-attributes",
    "cursor-up",
    "request-terminal-parameters",
    "horizontal-and-vertical-position",
    "delete-characters",
    "window-manipulation",
    "device-status-report"
  };
#define vteseq_n_pool ((const char *) &vteseq_n_pool_contents)
#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct vteseq_n_struct *
vteseq_n_lookup (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 65,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 32,
      MIN_HASH_VALUE = 10,
      MAX_HASH_VALUE = 125
    };

  static const unsigned char lengthtable[] =
    {
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  0,  9,
      10, 11,  5,  0, 11,  0, 10, 11, 16, 14, 12, 16, 20, 12,
      13, 17, 21, 25,  0, 18,  9, 20, 12, 22,  0, 27, 13,  0,
      15, 16, 14, 15, 22, 23, 30, 19,  6, 18,  8, 20, 21, 25,
      10, 12, 13, 32, 27,  9, 23,  7, 31,  0,  0,  9,  0, 12,
      31,  0,  0, 25, 14, 24, 25,  0,  0, 16,  0, 15,  9, 20,
       0,  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 27,  0,
      32,  0,  0,  0,  0,  0,  0,  0,  0, 17,  0,  0,  0,  0,
       0,  0,  0, 19,  0,  0,  0,  0,  0,  0,  0,  0,  0, 20
    };
  static const struct vteseq_n_struct wordlist[] =
    {
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1},
#line 29 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str10, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_mode)},
      {-1}, {-1},
#line 33 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str13, VTE_SEQUENCE_HANDLER(vte_sequence_handler_save_mode)},
#line 39 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str14, VTE_SEQUENCE_HANDLER(vte_sequence_handler_soft_reset)},
#line 42 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str15, VTE_SEQUENCE_HANDLER(vte_sequence_handler_sc)},
#line 24 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str16, VTE_SEQUENCE_HANDLER(vte_sequence_handler_index)},
      {-1},
#line 43 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str18, VTE_SEQUENCE_HANDLER(vte_sequence_handler_scroll_down)},
      {-1},
#line 36 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str20, VTE_SEQUENCE_HANDLER(vte_sequence_handler_full_reset)},
#line 40 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str21, VTE_SEQUENCE_HANDLER(vte_sequence_handler_DO)},
#line 70 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str22, VTE_SEQUENCE_HANDLER(vte_sequence_handler_erase_in_display)},
#line 60 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str23, VTE_SEQUENCE_HANDLER(vte_sequence_handler_rc)},
#line 44 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str24, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_color)},
#line 68 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str25, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_next_line)},
#line 133 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str26, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_current_file_uri)},
#line 48 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str27, VTE_SEQUENCE_HANDLER(vte_sequence_handler_restore_mode)},
#line 54 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str28, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reverse_index)},
#line 72 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str29, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_lower_left)},
#line 88 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str30, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_preceding_line)},
#line 132 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str31, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_current_directory_uri)},
      {-1},
#line 76 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str33, VTE_SEQUENCE_HANDLER(vte_sequence_handler_return_terminal_id)},
#line 32 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str34, VTE_SEQUENCE_HANDLER(vte_sequence_handler_next_line)},
#line 80 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str35, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_cursor_color)},
#line 47 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str36, VTE_SEQUENCE_HANDLER(vte_sequence_handler_insert_lines)},
#line 96 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str37, VTE_SEQUENCE_HANDLER(vte_sequence_handler_return_terminal_status)},
      {-1},
#line 117 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str39, VTE_SEQUENCE_HANDLER(vte_sequence_handler_character_position_absolute)},
#line 51 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str40, VTE_SEQUENCE_HANDLER(vte_sequence_handler_erase_in_line)},
      {-1},
#line 62 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str42, VTE_SEQUENCE_HANDLER(vte_sequence_handler_bt)},
#line 69 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str43, VTE_SEQUENCE_HANDLER(vte_sequence_handler_erase_characters)},
#line 58 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str44, VTE_SEQUENCE_HANDLER(vte_sequence_handler_RI)},
#line 63 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str45, VTE_SEQUENCE_HANDLER(vte_sequence_handler_LE)},
#line 95 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str46, VTE_SEQUENCE_HANDLER(vte_sequence_handler_line_position_absolute)},
#line 99 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str47, VTE_SEQUENCE_HANDLER(vte_sequence_handler_insert_blank_characters)},
#line 126 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str48, VTE_SEQUENCE_HANDLER(vte_sequence_handler_send_primary_device_attributes)},
#line 78 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str49, VTE_SEQUENCE_HANDLER(vte_sequence_handler_utf_8_charset)},
#line 25 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str50, VTE_SEQUENCE_HANDLER(vte_sequence_handler_decset)},
#line 74 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str51, VTE_SEQUENCE_HANDLER(vte_sequence_handler_application_keypad)},
#line 28 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str52, VTE_SEQUENCE_HANDLER(vte_sequence_handler_decreset)},
#line 83 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str53, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_scrolling_region)},
#line 90 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str54, VTE_SEQUENCE_HANDLER(vte_sequence_handler_screen_alignment_test)},
#line 113 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str55, VTE_SEQUENCE_HANDLER(vte_sequence_handler_ta)},
#line 38 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str56, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_mode)},
#line 50 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str57, VTE_SEQUENCE_HANDLER(vte_sequence_handler_vertical_tab)},
#line 53 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str58, VTE_SEQUENCE_HANDLER(vte_sequence_handler_normal_keypad)},
#line 129 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str59, VTE_SEQUENCE_HANDLER(vte_sequence_handler_send_secondary_device_attributes)},
#line 85 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str60, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_scrolling_region_to_end)},
#line 31 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str61, VTE_SEQUENCE_HANDLER(vte_sequence_handler_form_feed)},
#line 102 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str62, VTE_SEQUENCE_HANDLER(vte_sequence_handler_local_charset)},
#line 27 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str63, VTE_SEQUENCE_HANDLER(vte_sequence_handler_st)},
#line 84 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str64, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_scrolling_region_from_start)},
      {-1}, {-1},
#line 35 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str67, VTE_SEQUENCE_HANDLER(vte_sequence_handler_tab_clear)},
      {-1},
#line 45 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str69, VTE_SEQUENCE_HANDLER(vte_sequence_handler_delete_lines)},
#line 127 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str70, VTE_SEQUENCE_HANDLER(vte_sequence_handler_noop)},
      {-1}, {-1},
#line 115 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str73, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_icon_and_window_title)},
#line 61 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str74, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_icon_title)},
#line 109 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str75, VTE_SEQUENCE_HANDLER(vte_sequence_handler_dec_device_status_report)},
#line 112 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str76, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_character_absolute)},
      {-1}, {-1},
#line 71 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str79, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_window_title)},
      {-1},
#line 64 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str81, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_position)},
#line 34 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str82, VTE_SEQUENCE_HANDLER(vte_sequence_handler_scroll_up)},
#line 81 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str83, VTE_SEQUENCE_HANDLER(vte_sequence_handler_character_attributes)},
      {-1},
#line 30 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str85, VTE_SEQUENCE_HANDLER(vte_sequence_handler_UP)},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1},
#line 118 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str96, VTE_SEQUENCE_HANDLER(vte_sequence_handler_request_terminal_parameters)},
      {-1},
#line 128 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str98, VTE_SEQUENCE_HANDLER(vte_sequence_handler_horizontal_and_vertical_position)},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 73 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str107, VTE_SEQUENCE_HANDLER(vte_sequence_handler_DC)},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 79 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str115, VTE_SEQUENCE_HANDLER(vte_sequence_handler_window_manipulation)},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 82 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str125, VTE_SEQUENCE_HANDLER(vte_sequence_handler_device_status_report)}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = vteseq_n_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].seq + vteseq_n_pool;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &wordlist[key];
          }
    }
  return 0;
}
