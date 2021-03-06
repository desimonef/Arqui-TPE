#ifndef NAIVE_CONSOLE_H
#define NAIVE_CONSOLE_H

#include <stdint.h>

void setCurrent(uint8_t * pos);
uint8_t * getCurrent();
void scrollUp(int screen);
void backspace();
void checkPosition();
void ncPrintCharColor(char character, char color);
void ncPrint(const char * string);
void ncPrintChar(char character);
void ncNewline();
void ncPrintDec(uint64_t value);
void ncPrintHex(uint64_t value);
void ncPrintBin(uint64_t value);
void ncPrintBase(uint64_t value, uint32_t base);
void ncClear();

#endif