/* liblouis Braille Translation and Back-Translation Library

Copyright (C) 2012 Swiss Library for the Blind, Visually Impaired and Print Disabled

Copying and distribution of this file, with or without modification,
are permitted in any medium without royalty provided the copyright
notice and this notice are preserved. This file is offered as-is,
without any warranty. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "brl_checks.h"

int
main(int argc, char **argv)
{
    int i;

    char* table = "pass0_typebuf.ctb";
    char* text = "foo baz";
    char* expected = "foobar .baz";
    char* typeform = malloc(20 * sizeof(char));
    for (i = 0; i < 7; i++)
      typeform[i] = 0;
    for (i = 4; i < 7; i++)
      typeform[i] = 1;

    if (!check_translation(table, text, typeform, expected))
      return 0;

    return 1;
}
