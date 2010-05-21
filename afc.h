#include <libimobiledevice/afc.h>

typedef void (*afc_iter_callback) (afc_client_t afc, const char*, const char*);
void afc_iter_dir(afc_client_t afc, const char* path, afc_iter_callback callback);
void afc_remove_all(afc_client_t afc, const char* path);
void afc_create_directory(afc_client_t afc, const char* path);
void afc_list_files(afc_client_t afc, const char* path);
