#include <stdio.h>				//모든 행 출력 프로그램
#define MAXLINE 1000			/* maximum input line size */

int		get_line(char line[], int maxline);
void	copy(char to[], char from[]);

/* print longest input line */
int	main()
{
	int		len;				/* current line length */
	int		max;				/* maximum length seen so far */
	char	line[MAXLINE];		/* current input line */
	char	longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
	{
		printf("%d, %s", len, line);
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)				/* there was a line */
		printf("%s", longest);
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