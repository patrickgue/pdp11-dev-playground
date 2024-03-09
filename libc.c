#include "libc.h"
#include "console.h"


char *memset(char *s, int c, size_t n)
{
    int i = 0;
    cons_puts("memset\r\n");
    cons_putc(n + '0');
    cons_puts("\r\n");
    for (i = 0; i < n; i++)
    {
        s[i] = c;
    }
    return s;
}

size_t strlen(char *s)
{
    int i = 0;
    while(s[i] != '\0')
        i++;

    return i;
    
}

void strcpy(char *dest, char *src)
{
    int i, len = strlen(src);
    for (i = 0; i < len; i++)
    {
        dest[i] = src[i];
    }
}

void strcat(char *dest, char *src)
{
    int i,
        dest_len = strlen(dest),
        src_len = strlen(src);
    cons_puts("strcat\r\n");
    for (i = 0; i < src_len + 1; i++)
    {
        dest[dest_len + i] = src[i];
    }
}

char *num_to_str(int i)
{
    char s[10] = "";
    
}




long __lshrdi3(long a, long b)
{
    return 1; // return a >> b;
}

long __ashldi3(int a, int b)
{
    return 1; // return a << b;
}

