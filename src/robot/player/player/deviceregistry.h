/*
 *  Player - One Hell of a Robot Server
 *  Copyright (C) 2000  
 *     Brian Gerkey, Kasper Stoy, Richard Vaughan, & Andrew Howard
 *                      
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/*
 * $Id$
 */
#include <sys/types.h>  /* for types */
#if HAVE_STDINT_H
  #include <stdint.h>  /* for types in Linux */
#endif

// available interfaces are stored in an array of these, defined in
// deviceregistry.cc
typedef struct 
{
  uint16_t code;
  char* name;
} player_interface_t;

/* this function registers available devices */
void register_devices();

/* 
 * looks through the array of available interfaces for one which the given
 * name.  if found, interface is filled out (the caller must provide storage)
 * and zero is returned.  otherwise, -1 is returned.
 */
int lookup_interface(const char* name, player_interface_t* interface);

/* 
 * looks through the array of available interfaces for one which the given
 * code.  if found, interface is filled out (the caller must provide storage)
 * and zero is returned.  otherwise, -1 is returned.
 */
int
lookup_interface_code(int code, player_interface_t* interface);

/*
 * looks through the array of interfaces, starting at startpos, for the first
 * entry that has the given code, and returns the name.
 * returns 0 if the device is not found.
 */
char*
lookup_interface_name(unsigned int startpos, int code);
