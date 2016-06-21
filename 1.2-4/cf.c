#include <stdio.h>
/*Печать таблицы температур по Фаренгейту
и Цельсию для fhr = 0,20, ... 300 */

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	printf("Таблица соответствия Фаренгейта Цельсию \n");
	lower = 0; /*нижняя граница таблицы температур*/
	upper = 300; /*верхняя граница */
	step = 20; /*шаг*/
	
	celsius = lower;
	printf("Сельсия\tФаренгейт\n");
	while(celsius <= upper) {
//		celsius = 5.0/9.0 * (fahr-32.0);
		fahr = celsius * 9.0/5.0 + 32.0;
		printf("%7.0f\t%9.1f\n",celsius, fahr);
		celsius = celsius + step;
	}
}
