#include <stdio.h>		// 각 행의 뒷부분과 tab을 제거하고 전체가 공백인 행을 삭제하는 프로그램

#define MAXLINE 1000  /* maximum input line size */

int		get_line(char line[], int maxline);
void	copy(char to[], char from[]);

int main()
{
    char line[MAXLINE];     /* current input line */
    int len;                /* current line length */
    int is_empty;           /* flag to indicate if line is empty (0 = empty, 1 = non-empty) */

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        int i = len - 1;
        while (i >= 0 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'))
        {
            line[i] = '\0';
            i--;
        }

        // Calculate the length excluding trailing spaces and tabs
        int length_without_trailing = 0;
        for (i = 0; i < len; i++)
        {
            if (line[i] != ' ' && line[i] != '\t')
            {
                length_without_trailing++;
            }
        }

        // Check if the line is empty
        is_empty = 1;
        for (i = 0; i < len; i++)
        {
            if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n')
            {
                is_empty = 0;
                break;
            }
        }

        // Print the line if it is not empty
        if (!is_empty)
        {
            printf("Line: %s\n", line);                      // Print the line
            printf("Length without trailing: %d\n", length_without_trailing - 1);
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