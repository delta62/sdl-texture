#ifndef SN_ERROR_H
#define SN_ERROR_H

#define SN_ERROR_BUFFER_LENGTH 1024

void sn_abort(const char *reason);

void sn_sdl_error();

static void sn_show_error(const char *message);

#endif
