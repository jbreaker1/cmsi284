#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main(int argc, char* argv[]) {
    if(argv[1] != "chord") {
         printf("You really can't spell lol :D\n");
    }
    char *music[12] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
    int position = 0;
    for(int i = 0; i < 12; i++)
         if(strcmp(argv[1],music[i]) == 0)
     	    position = i;
    printf("Major: %s %s %s\n", music[position],music[(position+4)%12],music[(position+7)%12]);
    printf("Minor: %s %s %s\n", music[position],music[(position+3)%12],music[(position+7)%12]);
    printf("7th: %s %s %s %s\n", music[position],music[(position+4)%12],music[(position+7)%12], music[(position+10)%12]);
    printf("Diminished 7th %s %s %s %s\n", music[position],music[(position+3)%12],music[(position+6)%12],music[(position+9)%12]);
    return 0;
 }
