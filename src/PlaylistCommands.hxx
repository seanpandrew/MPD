/*
 * Copyright (C) 2003-2012 The Music Player Daemon Project
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
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPD_PLAYLIST_COMMANDS_HXX
#define MPD_PLAYLIST_COMMANDS_HXX

#include "command.h"

G_BEGIN_DECLS

enum command_return
handle_save(struct client *client, int argc, char *argv[]);

enum command_return
handle_load(struct client *client, int argc, char *argv[]);

enum command_return
handle_listplaylist(struct client *client, int argc, char *argv[]);

enum command_return
handle_listplaylistinfo(struct client *client, int argc, char *argv[]);

enum command_return
handle_rm(struct client *client, int argc, char *argv[]);

enum command_return
handle_rename(struct client *client, int argc, char *argv[]);

enum command_return
handle_playlistdelete(struct client *client, int argc, char *argv[]);

enum command_return
handle_playlistmove(struct client *client, int argc, char *argv[]);

enum command_return
handle_playlistclear(struct client *client, int argc, char *argv[]);

enum command_return
handle_playlistadd(struct client *client, int argc, char *argv[]);

enum command_return
handle_listplaylists(struct client *client, int argc, char *argv[]);

G_END_DECLS

#endif
