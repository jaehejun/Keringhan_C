#include <stdio.h>				//파일 복사 프로그램

/* copy input to output; 1st version */
int	main()
{
	int	c;

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}