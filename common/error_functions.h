
#ifndef __ERROR_FUNCTIONS_H__
#define __ERROR_FUNCTIONS_H__

void errMsg(const char * format, ...);

#ifdef __GUNC__
#define NORETURN __attribute__ ((__noreturn__))
#else
#define NORETURN
#endif

void errExit(const char *format, ...) NORETURN;

void err_exit(const char* format, ...)NORETURN;

void errExitEN(int errnum, const char* format, ...) NORETURN;

void fatal(const char* format, ...) NORETURN;

void usageErr(const char * format, ...) NORETURN;

void cmdLineErr(const char * format, ...) NORETURN;

#endif

