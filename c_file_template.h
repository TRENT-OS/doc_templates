/*
 * Copyright (C) 2021, HENSOLDT Cyber GmbH
 */

/**
 * @file
 * @brief Brief description of the header file.
 *
 * Please note that if the "@file" param is missing, doxygen will not include
 * this file in the documentation by default unless 'EXTRACT_ALL = YES' config
 * parameter is used. On the other hand a file name is not needed, as Doxygen
 * will then use the real file name.
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
    void const * const pointer ///< [in] Pointer to be verified.
);

/**
 * @brief  Prints given foo.
 * @return On success, the total number of characters written.
 */
int
printFoo(
    char* foo,       /**< [in]  A C-string to print. This is also a nice place
                                to demonstrate multiline inline documentation of
                                the parameter :)

                                Note the block comment usage in
                                this case, due to the issues with astyle.

                                Clearly this comment is already too long, and it
                                should be considered not inlining or making it
                                shorter but we are trying to make a point here.

                                Notice that the type of the comment is
                                consistent for all the arguments i.e. next
                                argument is also block commented! */

    int* charWritten /**< [out] The total number of characters written. */
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
