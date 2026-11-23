#ifndef COMPAT_THREAD_H
#define COMPAT_THREAD_H

// Name the calling thread (up to 15 chars). Returns pthread_setname_np() result.
// macOS can only name the calling thread, so threads name themselves.
int compat_thread_setname(const char *name);

#endif // COMPAT_THREAD_H

// vim: tabstop=4 shiftwidth=4 autoindent
