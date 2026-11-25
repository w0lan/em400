#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include <pthread.h>

#include "compat_thread.h"

// -----------------------------------------------------------------------
int compat_thread_setname(const char *name)
{
#ifdef __APPLE__
	return pthread_setname_np(name);
#else
	return pthread_setname_np(pthread_self(), name);
#endif
}

// vim: tabstop=4 shiftwidth=4 autoindent
