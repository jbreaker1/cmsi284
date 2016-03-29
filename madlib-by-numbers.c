#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* madlib_by_numbers(char* template, int word_count, char* words[])
{
	char* sentence = malloc(strlen(template) * word_count);
	for (int i = 0; i < strlen(template); ++i)
	{
		if(template[i] == '0' ||template[i] == '1' || template[i] == '2' ||template[i] == '3' ||template[i] == '4' ||template[i] == '5' ||template[i] == '6' ||
			template[i] == '7' ||template[i] == '8' || template == '9')
		{
			if(template[i]<word_count)
			{
				strcat(sentence, words[template[i]]); 
			}
		}
		else
		{
			strcat(sentence, template[i]);
		}
	}
}
int main()
{
	char* words_to_use[] = { "swim", "brilliant", "git" };
	madlib_by_numbers("The 1 2 likes to 0 in the 1 moonlight.", 3, words_to_use);
	return 0;
}