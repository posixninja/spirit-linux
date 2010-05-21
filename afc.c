/*
 * afc.c
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

#include <stdio.h>
#include <libimobiledevice/afc.h>
#include "afc.h"

void afc_iter_dir(afc_client_t afc, const char* path, afc_iter_callback callback) {
	//struct afc_directory *dir;
	//char *dirent;

	//if(AFCDirectoryOpen(conn, path, &dir)) return;

	//for (;;) {
		//_assertZero(AFCDirectoryRead(conn, dir, &dirent));
		//if (!dirent) break;
		//if (strcmp(dirent, ".") == 0 || strcmp(dirent, "..") == 0) continue;

		//callback(conn, path, dirent);
	//}
}

void afc_create_directory(afc_client_t afc, const char* path) {
	afc_make_directory(afc, path);
}

void list_callback(afc_client_t afc, char* path, char* dirent) {
	printf("DEBUG: %s", dirent);
}

void afc_list_files(afc_client_t afc, const char* path) {
	afc_iter_dir(afc, path, (afc_iter_callback) list_callback);
}

void remove_callback(afc_client_t afc, const char* path, const char* dirent) {
	char subdir[255];
    snprintf(subdir, 255, "%s/%s", path, dirent);
    afc_remove_all(afc, subdir);

    printf("DEBUG: Deleted %s/%s", path, dirent);
}

void afc_remove_all(afc_client_t afc, const char* path) {
    //int ret = AFCRemovePath(conn, path);
	afc_error_t afc_error = afc_remove_path(afc, path);
	if(afc_error == AFC_E_SUCCESS || afc_error == AFC_E_OBJECT_NOT_FOUND) {
		return;
	}

	afc_iter_dir(afc, path, (afc_iter_callback) remove_callback);

    printf("DEBUG: Deleting %s (error=%d)", path, afc_error);
    afc_remove_path(afc, path);
}
