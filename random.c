#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char word() {
    srand((unsigned) time(0));

    for (int i = 0; i < 7; i++) {

        short asciiUpperCase = 65;
        short numLetters = 26;
        char example = (char) (rand() % numLetters + asciiUpperCase);
        printf("%c ", example);
    }
}
    int main(){
        word();
    }













 
