#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char* madlib_by_numbers(char* template, int word_count, char* words[])
{
	int malloclength = 0;
	for (int i = 0; i < word_count; ++i)
	{
		malloclength = strlen(words[i]);
	}
	char* sentence = malloc((strlen(template)+malloclength) * word_count);
	for (int i = 0, j =0; j < strlen(template); ++i,++j)
	{
		if(isdigit(template[j]) && template[j]-'0' < word_count)
		{
			strcat(sentence, words[template[j]-'0']);
			printf("%s\n", sentence);
			i += strlen(words[template[j]-'0'])-1;		}
		else
		{
			sentence[i] = template[j];
			printf("%s\n", sentence);

		}
	}
	return sentence;
}
