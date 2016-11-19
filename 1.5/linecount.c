#include <stdio.h>
/*
Подсчет строк входного потка
*/

void usage(void)
{
	printf("\nThis program count number of lines, tabs and spaces\n");
	printf("For stop characters enter and get result press CTRL+D\n");
}

main()
{
	int c, nl, space, tab;
	usage();
	nl = tab = space = 0;
	printf(">");
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
