/*
 * Copyright 2016 The Emscripten Authors.  All rights reserved.
 * Emscripten is available under two separate licenses, the MIT license and the
 * University of Illinois/NCSA Open Source License.  Both these licenses can be
 * found in the LICENSE file.
 */

#include <stdio.h>

int main() {
  FILE* f = fopen("/dev/stdout", "w");
  fprintf(f, "hello, world!\n");
  fclose(f);
  return 0;
}
