#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i = 10;
	char c = 'a';

	int *iptr; //정수형,선언, 포인터임을 가리키기 iptr에 *붙이는게 좋음 자료형에서는 붙이지 말고 헷갈림.
    char *cptr; 
	int *iptr2;
	
	iptr = &i;
	cptr = &c;
	iptr2 = iptr; 
	
	printf("i: %p\n%p (size: %i)\n", iptr, &i, sizeof(iptr));
	printf("c: %p\n%p (size:%i)\n", cptr, &c, sizeof(cptr));
	printf("iptr2: %p, %i\n", iptr2, *iptr2);
	

	return 0;
}
