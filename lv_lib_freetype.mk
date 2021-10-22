LV_LIB_FREETYPE_DIR_NAME ?= lv_lib_freetype
PKG_CONFIG_EXECUTABLE ?= pkg-config

CFLAGS += $(shell $PKG_CONFIG_EXECUTABLE --cflags freetype2)
LDFLAGS += $(shell $PKG_CONFIG_EXECUTABLE --libs freetype2)

CSRCS += $(wildcard $(LVGL_DIR)/$(LV_LIB_FREETYPE_DIR_NAME)/*.c)
