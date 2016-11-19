#include <stdio.h>
/*
Напишите программу, копирующую вводимые символы в выходной поток с заменой символа табуляции на \t, символа забоя на \b и каждой обратной наклонной черты на \\. Это сделает видимыми все символы табуляции и забоя
*/

void usage(void)
{
	printf("This programm make visible escape-sequences \\t \\b and \\\ \n");
}

main()
{
	int c;
	usage();
	while((c = getchar()) != EOF) {
		if(c == '\t') {
			putchar('\\');
			putchar('t');
		}
		else if(c == '\b') {
			putchar('\\');
			putchar('b');
		}
		else if(c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
}
