#include <stdio.h>

#define	BYTE	unsigned char
#define	WORD	unsigned short
#define	DWORD	unsigned int

#define	nbits(TYPE)	8 * sizeof(TYPE)

int main()
{
	DWORD eax = 0x123215e;
	printf("%x\n", (BYTE) (eax >> nbits(BYTE)));
	return 0;
}
