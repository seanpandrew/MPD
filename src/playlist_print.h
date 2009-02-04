/*
 * Copyright (C) 2003-2009 The Music Player Daemon Project
 * http://www.musicpd.org
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef PLAYLIST_PRINT_H
#define PLAYLIST_PRINT_H

#include <stdbool.h>

struct client;

/**
 * Send the stored playlist to the client.
 *
 * @param client the client which requested the playlist
 * @param name_utf8 the name of the stored playlist in UTF-8 encoding
 * @param detail true if all details should be printed
 * @return true on success, false if the playlist does not exist
 */
bool
spl_print(struct client *client, const char *name_utf8, bool detail);

#endif
