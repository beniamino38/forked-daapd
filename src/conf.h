/*
 * $Id$
 * Functions for reading and writing the config file
 *
 * Copyright (C) 2006 Ron Pedde (ron@pedde.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _CONFIG_H_
#define _CONFIG_H_

#define CONF_E_SUCCESS    0
#define CONF_E_FOPEN      1
#define CONF_E_UNKNOWN    2
#define CONF_E_BADHEADER  3
#define CONF_E_PARSE      4
#define CONF_E_OVERFLOW   5  /** <Buffer passed too small */
#define CONF_E_NOCONF     6  /** <No open config file */


extern int conf_read(char *file);
extern int conf_close(void);
extern int conf_get_int(char *section, char *key, int dflt);
extern int conf_get_string(char *section, char *key, char *dflt,
                             char *out, int *size);
extern int conf_set_int(char *section, char *key, int value);
extern int conf_set_string(char *section, char *key, char *value);

extern int conf_iswritable(void);
extern int conf_write(void);

#endif /* _CONFIG_H_ */
