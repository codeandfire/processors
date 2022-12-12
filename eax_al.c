#include <stdio.h>

#define	BYTE	unsigned char
#define	WORD	unsigned short
#define	DWORD	unsigned int

int main()
{
	DWORD eax = 0x15e;
	printf("%x\n", (BYTE) eax);
	return 0;
}
