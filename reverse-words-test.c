#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "reverse-words.h"
#include <stdlib.h>

int main()
{
	char test1[] = "Hello my friends!";
	reverse_words(test1);
	assert(strcmp("friends! my Hello",test1) == 0);
	printf("true1\n");
	char test2[] = "Hello";
	reverse_words(test2);
	assert(strcmp("Hello",test2) == 0);
	printf("true2\n");
	char test3[] = "Potato           420";
	reverse_words(test3);
	assert(strcmp("420           Potato",test3) == 0);
	printf("true3\n");
	char test4[] = "";
	reverse_words(test4);
	assert(strcmp("",test4) == 0);
	printf("true4\n");
	char test5[] = "j";
	reverse_words(test5);
	assert(strcmp("j",test5) == 0);
	printf("true5\n");
	return 0;
}