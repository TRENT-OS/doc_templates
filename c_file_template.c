/*
 * Brief description of the source file.
 *
 * Copyright (C) 2020-2021, HENSOLDT Cyber GmbH
 */

#include "c_file_template.h"
#include <stdio.h>

bool
isNull(
   void const * const pointer)
{
   return NULL == pointer;
}

int
printFoo(
   char* foo,
   int* charWritten)
{
   *charWritten = printf("%s", foo);

   return *charWritten;
}
