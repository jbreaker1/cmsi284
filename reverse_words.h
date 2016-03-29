#include <stdio.h>
#include <string.h>
#include "reverse-range-in-place.h"
#include <stdlib.h>

void reverse_words(char* string)
{
	int count = 0;
	reverse_range_in_place(string, 0, strlen(string));
	for(int i = 0; i < strlen(string); i++)
	{
		if(string[i] == ' ')
		{
			reverse_range_in_place(string, count, i-1);
			count = i+1;
		}
		else if (string[i] == string[strlen(string)-1])
		{
			reverse_range_in_place(string, count, strlen(string)-1);
		}
	}
	
}
