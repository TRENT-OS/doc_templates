/* Copyright (C) 2020, HENSOLDT Cyber GmbH */
#include "c_file_template.h"
#include <stdio.h>

int printFoo(char* foo, int* charWritten)
{
   *charWritten = printf("%s", foo);

   return *charWritten;
}
