include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* madlib(char* template, char* adjective, char* noun, char* verb) {
    char *sentence = malloc(strlen(template) + strlen(adjective) + strlen(noun) + strlen(verb));
    sprintf(sentence, template, adjective, noun, verb);
    return sentence;
}
