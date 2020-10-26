/* Copyright (C) 2020, HENSOLDT Cyber GmbH */

/**
 * @file
 * @brief Brief description of the header file.
 *
 * Please note that if the "@file" param is missing, doxygen will not include
 * this file in the documentation by default unless 'EXTRACT_ALL = YES' config
 * parameter is used.
 */
#pragma once

#include <stdbool.h>

/**
 * @brief  Checks if null pointer was given.
 *
 * @retval true  - if a null pointer
 * @retval false - if NOT a null pointer
 */
bool
isNull(
    void const * const pointer //!< [in] Pointer to be verified.
);

/**
 * @brief  Prints given foo.
 * @return On success, the total number of characters written.
 */
int
printFoo(
    char* foo,       //!< [in]  A C-string to print. This is also a nice place
                     //!<       to demonstrate multiline inline documentation of
                     //!<       the parameter :)
    int* charWritten //!< [out] The total number of characters written.
);

/**
 * @brief   Prints foo and suppresses the outputs
 *
 * @note    Unfortunately it is not possible to inline document macro's
 *          parameters.
 *
 * @param   foo - [in] Character to be printed
 *
 */
#define PRINT_FOO(foo) do{ int written; printFoo(foo, &written); } while(0);
