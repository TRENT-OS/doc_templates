/*
 * Copyright (C) 2020-2021, HENSOLDT Cyber GmbH
 */

/**
 * @file
 *
 * Brief description of the header file.
 *
 * Please note that if the "@file" is missing, doxygen will not include this
 * file in the documentation. But no file name has to be specified, as doxygen
 * will automatically use the real file name.
 *
 * @ingroup templates
 * @defgroup templates The Templates Group
 *
 * Templates Group brief description.
 *
 * Templates Group detailed description.
 */

#pragma once

#include <stdbool.h>

/**
 * Checks if null pointer was given.
 *
 * @retval true  If a null pointer.
 * @retval false If NOT a null pointer.
 */
bool
isNull(
    void const * const pointer //!< [in] Pointer to be verified.
);

/**
 * Prints given foo.
 *
 * @return On success, the total number of characters written.
 *
 * @param[in]  foo         A C-string to print. This is also a nice place to
 *                         demonstrate a multiline documentation of the
 *                         parameter :) Notice that the type of the comment is
 *                         consistent for all the arguments i.e. next argument
 *                         is not an inline comment even if its description is
 *                         short enough.
 *
 * @param[out] charWritten The total number of characters written.
 */
int
printFoo(
    char* foo,
    int* charWritten
);

/**
 * Prints foo and suppresses the outputs.
 *
 * @note Unfortunately it is not possible to inline document macro's parameters.
 *
 * @param[in] foo Character to be printed.
 *
 */
#define PRINT_FOO(foo) do{ int written; printFoo(foo, &written); } while(0);
