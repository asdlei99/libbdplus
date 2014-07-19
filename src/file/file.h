/*
 * This file is part of libbluray
 * Copyright (C) 2011-2013  VideoLAN
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef BDPLUS_FILE_H
#define BDPLUS_FILE_H

#include <util/attributes.h>

#include <stdint.h>
#include <stdio.h>

BD_PRIVATE int          file_mkpath(const char *path);

BD_PRIVATE const char * file_get_cache_dir(void);
BD_PRIVATE char *       file_get_config_dir(const char *file);

BD_PRIVATE char *       file_load(const char *path, uint32_t *p_size);


#endif