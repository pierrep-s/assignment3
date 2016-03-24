#include "parse.h"
#include<stdio.h>


int main(){
	char *test = "hello world";
	initBuffer(test);

	char *test2= nextToken();
	printf("%s\n", test2);
	

	return 2;

}
