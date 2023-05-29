#include <stdio.h>			//문자 개수 세기 프로그램

/* count characters in input; 2nd version */
int	main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}