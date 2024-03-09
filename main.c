#include "console.h"
#include "libc.h"

#include "math.h"

int main()
{
	int i;
    int a[20];
    char *buffer;
    buffer = (char *) 0x2000;
    char c = '0' + log(2.0);
    char str[4] = "0\r\n";
    str[0] = c;
    cons_puts(str);
    cons_gets(buffer, 256);
    strcat(buffer, "\n\r");
    for (i=0; i<10; i++) {
		cons_puts("Hello, PDP-11\r\n");
        cons_puts(buffer);
    }
}
