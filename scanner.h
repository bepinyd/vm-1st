#ifndef clox_scanner_h
#define clox_scanner_h
#include "compiler.h"
void initScanner(const char* source);
Token scanToken();
#endif