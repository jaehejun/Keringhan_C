#include <stdio.h>				// 문자 분류 프로그램

/* count digits, white space, others */
int	main()
{
	int	c, i, nwhite, nother;
	int	ndigit[10];						// 배열 변수 선언

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')		// 읽어 들인 문자가 숫자인지 아닌지를 검사하는 부분이다.
			++ndigit[c - '0'];			// (c - '0'(ASCII 48) 이므로 c 가 '1'이라면 [1]이 된다.
		else if (c == ' ' || c == '\n' || c == '\t')	// 문자가 숫자가 아니라면 빈칸, 행바꿈, tab인지 검사한다.
			++nwhite;
		else
			++nother;									// 숫자, 빈칸이 아니라면 그 외의 숫자 갯수를 +1 한다.
	}
	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
