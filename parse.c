#include <stdio.h>
#include<string.h>

#define BOOLEAN int
#define TRUE 1
#define FALSE 0

char *globalString;
char returnString[sizeof(globalString)];

void initBuffer(char *inputLine){
	globalString=inputLine;
}


BOOLEAN hasNextToken(){
	
}



char *nextToken(){

	int sizeWord=0;
	while(globalString[sizeWord] != 32){
		sizeWord++;
	}

	int j=0;
	for(j=0; j<sizeWord; j++){
		returnString[j]=globalString[j];
	}

	globalString = globalString+sizeWord+1;

	return returnString;
	
}

void Rewind(){

}




