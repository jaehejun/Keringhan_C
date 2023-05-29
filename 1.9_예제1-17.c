#include <stdio.h>				//길이 80 이상인 행 출력 프로그램
#define MAXLINE 1000			/* maximum input line size */

int		get_line(char line[], int maxline);
void	copy(char to[], char from[]);

/* print input line which len is more greater than or equal to 80 */
int	main()
{
	int		len;				/* current line length */
	char	line[MAXLINE];		/* current input line */

	while ((len = get_line(line, MAXLINE)) > 0)
	{
		if (len >= 80)
		{
			printf("%s", line);
			printf("%d\n", len);
		}
	}
	return 0;
}

/* getline : read a line into s, return length */
int	get_line(char s[], int lim)
{
	int	c, i;

	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy : copy 'from' into 'to' ; assume to is big enough */
void	copy(char to[], char from[])
{
	int	i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}