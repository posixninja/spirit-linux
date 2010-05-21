/*
 * afc.h
 * Spirit jailbreak for Linux
 *
 * Copyright (c) 2010 Joshua Hill. All Rights Reserved.
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA 
 */

#include <libimobiledevice/afc.h>

typedef void (*afc_iter_callback) (afc_client_t afc, const char*, const char*);
void afc_iter_dir(afc_client_t afc, const char* path, afc_iter_callback callback);
void afc_remove_all(afc_client_t afc, const char* path);
void afc_create_directory(afc_client_t afc, const char* path);
void afc_list_files(afc_client_t afc, const char* path);
