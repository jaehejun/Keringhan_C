#include <stdio.h>				//모든 행의 길이와 문자 출력 프로그램
#define MAXLINE 1000			/* maximum input line size */

int		get_line(char line[], int maxline);
void	copy(char to[], char from[]);

int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        printf("Line: %s", line);       // Print the line
        printf("Length: %d\n", len);    // Print the length of the line
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
