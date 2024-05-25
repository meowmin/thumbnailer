#pragma once
#include "ffmpeg.h"
#include <stddef.h>
#include <stdint.h>

struct Meta {
    const char* title;
    const char* artist;
};

struct Meta retrieve_meta(AVFormatContext* ctx);
