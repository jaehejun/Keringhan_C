#include <stdio.h>

/*	printf Fahrenheit-Celsius table
	for fahr = 0, 20, ... , 300	*/

//int	main()
//{
//	int fahr, celsius;		/* int형 변수  fahr, celsius 선언 */
//	int lower, upper, step;	/* int형 변수 lower, upper, step 선언 */

//	lower = 0;		/* lower limit of temperature table */
//	upper = 300;	/* upper limit */
//	step = 20;		/* step size */

//	fahr = lower;
//	while (fahr <= upper)
//	{
//		celsius = 5 * (fahr - 32) / 9;
//		printf("%d\t%d\n", fahr, celsius);
//		fahr = fahr + step;
//	}
//}

//#include <stdio.h>

///*	print Fahrenheit-Celsius table
//	for fahr = 0, 20, ..., 300; floating-point version	*/
//int	main()
//{
//	float	fahr, celsius;
//	int		lower, upper, step;

//	lower = 0;		/* lower limit of temperature table */
//	upper = 300;	/* upper limit */
//	step = 20;		/* step size */

//	fahr = lower;
//	printf("온도변환 프로그램\n");
//	while (fahr <= upper)
//	{
//		celsius = (5.0 / 9.0) * (fahr - 32.0);
//		printf("%3.0f %6.1f\n", fahr, celsius);
//		fahr = fahr + step;
//	}
//}

#include <stdio.h>

/*	print Celsius-Fahrenheit table	
	for Celsius = -10, -5, 0, ... 100; floating-point version	*/
int	main()
{
	float	celsius, fahr;
	int		lower, upper, step;

	lower = -10;	/* lower limit of temperature table */
	upper = 100;	/* upper limit */
	step = 5;		/* step size */

	celsius = lower;
	printf("온도변환 프로그램(Celsius-Farenheit)\n");
	while (celsius <= upper)
	{
		fahr = (9.0/5.0) * celsius + 32;
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}