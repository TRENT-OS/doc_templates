/*
 * Brief description of the source file.
 *
 * Copyright (C) 2020-2024, HENSOLDT Cyber GmbH
 *
 *  SPDX-License-Identifier: BSD-3-Clause
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
