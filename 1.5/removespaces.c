#include <stdio.h>

/*
Программа заменяет стоящие подряд пробелы во входном потоке на один и выводит в выходной поток
*/

main()
{
	int c;
	int space = 0;
	while((c = getchar()) != EOF) {
		if(c != ' ' ) {
			space = 0;
			putchar(c);
		}
		else if ( space == 0) {
			space = 1;
			putchar(c);
		}		
	}
}
