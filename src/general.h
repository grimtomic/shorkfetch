/*
    ######################################################
    ##            SHORK UTILITY - SHORKFETCH            ##
    ######################################################
    ## General, utility functions to be used throughout ##
    ## SHORKFETCH                                       ##
    ######################################################
    ## Licence: GNU GENERAL PUBLIC LICENSE Version 3    ##
    ######################################################
    ## Kali (links.sharktastica.co.uk)                  ##
    ######################################################
*/



#ifndef GENERAL
#define GENERAL

#include <stdio.h>



typedef struct {
    int pid;
    char name[256];
} Process;



#define TASK_COMM_LEN       24



char *bytesToReadable(const char *, const long long);
char *extractFromPoint(char *, size_t, char, int);
char *findErase(const char *, const size_t, const char *);
char *findReplace(const char *, const size_t, const char *, const char *);
int formatNewLines(char *, int, char *, int);
float fSqrt(float);
char *getAccentColour(void);
Process getParentProcess(int);
struct winsize getTerminalSize(void);
int isProgramInstalled(char *, int);
int iSqrt(int);
int procExists(const char *, const int);
int readHexFile(const char *);

#endif
