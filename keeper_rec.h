#ifndef keeper_rec_h
#define keeper_rec_h

#include "keeper_header.h"

struct keeper_rec_globals
{
	/* data */
	int type;
};

struct keeper_rec
{
	const char* (*get_request_line)();
	const char* (*get_method)();
	const char* (*get_header)(const char* name);
	const char* (*get_params)(const char* name);
	const char* (*get_cookie)(const char* name);
	const char* (*get_call_cname)();
	const char* (*get_call_fname)();
	int         (*get_fargs_count)();
	zval        (*get_farg)(int index);
};

struct keeper_rec *get_keeper_rec();

int keeper_rec_init();
int keeper_rec_destroy();
int keeper_rec_oncall();

#endif