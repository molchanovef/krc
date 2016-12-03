#include <stdio.h>

/*
Программа печатает горизонтальные и/или вертикальные гистограммы длинн вводимых слов
*/

#define IN 1
#define OUT 0
#define MAX_WORD_LEN 44
#define MAX_HIST_VALUE 25
#define VERTICAL

main()
{
	int c, nl, nw, nc, state, len, i, j;
	int word[MAX_WORD_LEN];
	int w[50] = {0};
	float norm;
	state = OUT;
	nl = nw = nc = len = 0;
	
	//clear array
	for(i = 0; i < MAX_WORD_LEN; i++)
		word[i] = 0;
		
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			if((len-1) <= MAX_WORD_LEN)
				word[len-1]++;
			else
			{
				printf("Word ");
				for(i = 0; i <= len; i++)
					printf("%c",w[i]);
				printf(" length %d more then expected %d\n", len, MAX_WORD_LEN);
			}
			len = 0;
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
			++len;
			w[len] = (char)c;
		}
		else if (state == IN)
		{
			++len;
			w[len] = (char)c;
		}
	}
	
	int maxvalue = 0;
	for(i = 0; i < MAX_WORD_LEN; i++)
	{
		printf("%d ", word[i]);
		if(word[i] > maxvalue)
			maxvalue = word[i];
	}
	printf("maxvalue %d\n", maxvalue);
	if(maxvalue > MAX_HIST_VALUE)//do normalize
	{
		printf("Do normalize...\n");
		norm = (float)maxvalue/MAX_HIST_VALUE;
		printf("Normalize value %f\n", norm);
		for(i = 0; i < MAX_WORD_LEN; i++)
		{
			word[i] /= norm; 
		}
	
	}
#ifndef VERTICAL	
	printf("Build horizontal histogram\n");
	for(i = 0; i < MAX_WORD_LEN; i++)
	{
		printf("%2d: %2d ", i+1, word[i]);
		for(j = 0; j < word[i]; j++)
			printf("#");
		printf("\n");
	}
#else
	printf("Build vertical histogram\n");
	for(i = MAX_HIST_VALUE; i > 0; i--)
	{
		for(j = 0; j < MAX_WORD_LEN; j++)
		{
			if(word[j] >= i) printf("#");
			else printf(" ");
		}
		printf("\n");
	}
	for(i = 0; i < MAX_WORD_LEN; i++)
		printf("%d",(i+1)/10);
	printf("\n");
	for(i = 0; i < MAX_WORD_LEN; i++)
		printf("%d",(i+1)%10);
	printf("\n");
#endif
}
