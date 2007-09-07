/*
 * Copyright (C) 1999-2001  Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND INTERNET SOFTWARE CONSORTIUM
 * DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL
 * INTERNET SOFTWARE CONSORTIUM BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING
 * FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/* $Id: commandline.h,v 1.8 2001/07/12 05:58:22 mayer Exp $ */

#ifndef ISC_COMMANDLINE_H
#define ISC_COMMANDLINE_H 1

#include <isc/boolean.h>
#include <isc/lang.h>
#include <isc/platform.h>


LIBISC_EXTERNAL_DATA extern int isc_commandline_index;	/* Index into parent argv vector. */
LIBISC_EXTERNAL_DATA extern int isc_commandline_option;	/* Character checked for validity. */

LIBISC_EXTERNAL_DATA extern char *isc_commandline_argument;	/* Argument associated with option. */
LIBISC_EXTERNAL_DATA extern char *isc_commandline_progname;	/* For printing error messages. */

LIBISC_EXTERNAL_DATA extern isc_boolean_t isc_commandline_errprint;	/* Print error message. */
LIBISC_EXTERNAL_DATA extern isc_boolean_t isc_commandline_reset;    	/* Reset getopt. */

ISC_LANG_BEGINDECLS

int
isc_commandline_parse(int argc, char * const *argv, const char *options);

ISC_LANG_ENDDECLS

#endif /* ISC_COMMANDLINE_H */
