/* -*- mode: c++; c-basic-offset: 4; indent-tabs-mode: nil; tab-width: 4 -*- */
/* vi: set expandtab shiftwidth=4 tabstop=4: */

/**
 * \file modp_utf.h
 * \brief Various UTF8 utilities
 *
 */

/*
 * <PRE>
 * MODP_UTF8 -- UTF-8 utilities
 * https://github.com/client9/stringencoders
 *
 * Copyright &copy; 2013, Nick Galbreath
 * All rights reserved.
 *
 * Released under bsd license.  See modp_utf8.c for details.
 * </PRE>
 *
 */

#ifndef COM_MODP_UTF8
#define COM_MODP_UTF8

#include "modp_stdint.h"
#include "extern_c_begin.h"

#define MODP_UTF8_OK  0
#define MODP_UTF8_SHORT  1
#define MODP_UTF8_INVALID  2
#define MODP_UTF8_OVERLONG  3
#define MODP_UTF8_CODEPOINT  4
/**
 * Validate a UTF-8 string.
 *   checks for blah blah blah
 */
int modp_utf8_validate(const char* src, size_t len);

#include "extern_c_end.h"
#endif  /* ifndef modp_utf8 */
