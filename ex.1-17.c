#include <stdio.h>				//길이가 80이상인 행 출력 프로그램
#define MAXLINE 1000			/* maximum input line size */
#define LONGLINE 80

int		get_line(char line[], int maxline);
void	copy(char to[], char from[]);

/* print longest input line */
int	main()
{
	int		len;				/* current line length */
	char	line[MAXLINE];		/* current input line */

	while ((len = get_line(line, MAXLINE)) > 0)
	{
		if (len > LONGLINE)
			printf("%s", line);
	}
	return 0;
}

/* getline : read a line into s, return length */
int	get_line(char s[], int lim)
{
	int	c, i, j;

	j = 0;
	for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		if (i < lim - 2)
		{
			s[j] = c;
			j++;
		}
	}
	if (c == '\n')
	{
		s[j] = c;
		++j;
		++i;
	}
	s[j] = '\0';
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