#ifndef _LV_FONT_TTF_H
#define _LV_FONT_TTF_H
#include "ft2build.h"
#include FT_FREETYPE_H

#define USE_CACHE_MANGER	1

typedef struct {
    FT_Face     face;      /* handle to face object */
    uint16_t font_size;
}lv_font_fmt_freetype_dsc_t;

int lv_freetype_init(uint8_t max_font_manger);
int lv_freetype_font_init(lv_font_t * font, const char * font_path, uint16_t font_size);

#endif
