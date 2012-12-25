#ifndef __VGA_H__
#define __VGA_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/nearptr.h>
#include <dos.h>

#include "common.h"

#define VIDEO_INT  0x10
#define VIDEO_MODE 0x13
#define TEXT_MODE  0x03

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 200
#define NUM_COLORS    256

void init_vga();
void set_mode(byte mode);

__inline void putp(int x, int y, byte color);

void line(int x1, int y1, int x2, int y2, byte color);

void rect(int left, int top, int right, int bottom, byte color);
void rect_fill(int left, int top, int right, int bottom, byte color);

#endif // __VGA_H__
