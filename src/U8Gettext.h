#ifndef __U8GETTEXT_H_INCLUDED_4AD09038_006D_A018_36AB_D116C344B856
#define __U8GETTEXT_H_INCLUDED_4AD09038_006D_A018_36AB_D116C344B856

#include <stddef.h>
#include <inttypes.h>

struct U8GettextCharMapping
{
  uint32_t utf32Char;
  uint16_t u8gChar;
};

struct U8GettextTranslation
{
  const char * msgId;
  const char * msgStr
};

struct U8GettextLanguage
{
  const char * language;
  const U8GettextTranslation * translations;
  const size_t translationsLength;
};

/**
 * Set current U8Gettext language
 *
 * @param language You must pass a constant string or dynamic allocated
 * string throughout the whole U8Gettext life!
 *
 * @return Old language string
 */
const char *U8GettextSetLanguage(const char *language);
const char *U8GettextGetLanguage();
const char *U8Gettext(const char *str);

#endif // __U8GETTEXT_H_INCLUDED_4AD09038_006D_A018_36AB_D116C344B856

