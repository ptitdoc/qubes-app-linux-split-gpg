#ifndef _MULTIPLEX_H
#define _MULTIPLEX_H

/*
 * The Qubes OS Project, http://www.qubes-os.org
 *
 * Copyright (C) 2011  Marek Marczykowski <marmarek@invisiblethingslab.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */


struct header {
	int fd_num;
	unsigned int len;
};

int process_io(int fd_input, int fd_output, int *read_fds,
	       int read_fds_len, int *write_fds, int write_fds_len);

void sigchld_handler(int arg);
void setup_sigchld();


#endif				/* _MULTIPLEX_H */
