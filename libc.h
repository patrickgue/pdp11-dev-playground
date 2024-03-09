#ifndef libc_h
#define libc_h


typedef int size_t;

char *memset(char *s, int c, size_t n);
void strcpy(char *, char *);
void strcat(char *, char *);
size_t strlen(char *);
char *num_to_str(int);
#endif
