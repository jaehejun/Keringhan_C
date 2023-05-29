#include <stdio.h>			//온도변환

int	temp_conversion(int temperature);

int	main()
{
	int	celsius;
	int	fahr;
	int	lower;
	int	upper;
	int	step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	fahr = lower;
	while (fahr <= upper) /* (fahr <= upper)이 만족되면 계속해서 {}안의 문장들이 수행된다 */
	{
		celsius = temp_conversion(fahr);
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

int	temp_conversion(int fahr)
{
	int	celsius;

	celsius = 5 * (fahr - 32) / 9;
	return (celsius);
}