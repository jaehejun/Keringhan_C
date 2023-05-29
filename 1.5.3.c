#include <stdio.h>				// 행의 개수 세기 프로그램

/* count lines in input */
int	main()
{
	int	c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c =='\n')
			++nl;
	}
	printf("%d\n", nl);
}