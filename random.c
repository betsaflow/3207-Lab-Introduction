#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand((unsigned)time(0));

	short asciiUpperCase = 65;
	short numLetters = 26;

	char example = (char)(rand()%numLetters+asciiUpperCase);

	printf("%c \n",example);
} 
