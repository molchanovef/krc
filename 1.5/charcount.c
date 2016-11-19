#include <stdio.h>
	#define WHILE

void usage(void)
{
	printf("\nThis program count number of entered characters\n");
	printf("For stop characters enter and get result press CTRL+D\n");
}

main()
{
	usage();
#ifdef WHILE	
	long nc;
	nc = 0;
	printf(">");
	while(getchar() != EOF)
		++nc;
	printf("\nYou have entered %ld characters\n",nc);
#else
/*
 В printf спецификатор %f применяется как для float, так и для double; спецификатор %.0f означает печать без десятичной точки и дробной части (последняя в нашем случае отсутствует).

Тело указанного for-цикла пусто, поскольку кроме проверок и приращений счетчика делать ничего не нужно. Но правила грамматики Си требуют, чтобы for- цикл имел тело. Выполнение этого требования обеспечивает изолированная точка с запятой, называемая пустой инструкцией. Мы поставили точку с запятой на отдельной строке для большей наглядности.
*/
	double nc;
	printf(">");
	for(nc = 0; getchar() != EOF; ++nc)
		;
	printf("\nYou have entered %.0f characters\n",nc);
#endif	
}
