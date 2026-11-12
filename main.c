#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
void main(void){
	int i = 300;
	
	int *pi = &i;
	char *pc = (char *)&i; // char 자료형 때문에 44가 도출됨
	
	printf("%i, %i, %i\n",i, *pi, *pc);
}
