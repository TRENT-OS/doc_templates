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
    void const * const pointer /**< [in] Pointer to be verified */
);

/**
 * @brief  Prints given foo.
 * @return On success, the total number of characters written.
 */
int
printFoo(
    char* foo,       /**< [in]  A C-string to print. */
    int* charWritten /**< [out] The total number of characters written. */
);
