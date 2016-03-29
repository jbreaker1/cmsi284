#include <stdio.h>
#include <string.h>
#include <wchar.h>

 int main(int argc, char* argv[]) {
 	char *interval[12] = {"perfect octave", "major seventh","minor seventh", "major sixth",
 							"minor sixth", "minor sixth","tritone", "perfect fourth", "major third",
 							"minor third", "major second", "minor second"};
    char *music[12] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
     int position1 = 0;
     int position2 = 0;
     for(int i = 0; i < 12; i++)
     {
     	if(strcmp(argv[1],music[i]) == 0)
     		position1 = i;
     	if(strcmp(argv[2],music[i]) == 0)
     		position2 = i;
     }
     printf("%s\n", interval[position1- position2]);
 }