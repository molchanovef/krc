#include <stdio.h>
/*Печать таблицы температур по Фаренгейту
и Цельсию для fhr = 0,20, ... 300 */
//#define WHILE
#define LOWER 0
#define UPPER 300
#define STEP 20
main()
{
	printf("Таблица соответствия Цельсия Фаренгейту\n");
	printf("Фаренгейт\tСельсия\n");
#ifdef WHILE
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /*нижняя граница таблицы температур*/
	upper = 300; /*верхняя граница */
	step = 20; /*шаг*/
	
	fahr = lower;
	while(fahr <= upper) {
		celsius = 5.0/9.0 * (fahr-32.0);
		printf("%9.0f\t%7.1f\n",fahr, celsius);
		fahr = fahr + step;
	}
#else
	int fahr;
	for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%9d\t%7.1f\n",fahr, 5.0/9.0 * (fahr - 32.0));
#endif
}
