﻿#ifndef HEADER_CURL_TOOL_GETPASS_H
#define HEADER_CURL_TOOL_GETPASS_H
/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at https://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/
#include "tool_setup.h"

#ifndef HAVE_GETPASS_R
/* If there's a system-provided function named like this, we trust it is
   also found in one of the standard headers. */

/*
 * Returning NULL will abort the continued operation!
 */
char *getpass_r(const char *prompt, char *buffer, size_t buflen);
#endif

#endif /* HEADER_CURL_TOOL_GETPASS_H */
