/**
 * @copyright (C) 2020, HENSOLDT Cyber GmbH
 *
 * @brief Brief description of the source file.
 *
 * Please notice that if the "@file" param is missing, doxygen will no include
 * this file in the documentation by default unless 'EXTRACT_ALL = YES' config
 * parameter is used.
 */
#include "c_header_template.h"
#include <stdio.h>

int printFoo(char* foo, int* charWritten)
{
   *charWritten = printf("%s", foo);

   return charWritten;
}
