#include <stdio.h>

#define	BYTE	unsigned char
#define	WORD	unsigned short
#define	DWORD	unsigned int

int main()
{
	DWORD eax = 0x123215e;
	printf("%x\n", (WORD) eax);
	return 0;
}
