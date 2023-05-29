#include <stdio.h>			//문자 개수 세기 프로그램

/* count characters in input; 1st version */
int	main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}
