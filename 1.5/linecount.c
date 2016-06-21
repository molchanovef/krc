#include <stdio.h>
/*
Подсчет строк входного потка
*/

main()
{
	int c, nl, space, tab;
	nl = tab = space = 0;
	while((c = getchar()) != EOF) {
		if(c == '\n')
			++nl;
		if(c == '\t')
			++tab;
		if(c == ' ')
			++space;
	}
	printf("lines %d tab %d spaces %d\n",nl,tab,space);
}
