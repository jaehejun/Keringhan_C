#include <stdio.h>         온도변환 프로그램

/*	printf Fahrenheit-Celsius table
	for fahr = 0, 20, ... , 300	*/

int	main()
{
	int fahr, celsius;	  	/* int형 변수  fahr, celsius 선언 */
	int lower, upper, step;	/* int형 변수 lower, upper, step 선언 */

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	fahr = lower;
	while (fahr <= upper) /* (fahr <= upper)이 만족되면 계속해서 {}안의 문장들이 수행된다 */
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
