#pragma once

#include "common.h"
#include "dtypes.h"

#define kNumKeycodes 0x80
#define kKeycodeEsc 0x45

extern Status system_init();
extern void system_fini();
extern void system_print_error(STRPTR msg);
extern Status system_time_micros(ULONG* time_micros);
extern Status system_list_drives(dirlist_t* drives);
extern Status system_list_path(STRPTR path,
                               dirlist_t* entries);
extern void system_acquire_control();
extern void system_release_control();
extern Status system_acquire_blitter();
extern Status system_release_blitter();

extern volatile UBYTE keyboard_state[kNumKeycodes];
