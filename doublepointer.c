#include<stdio.h>
int main()
{
	int num = 10;
	int *ptr = &num;
	int **dptr = &ptr;
	printf("value of num: %d\n",num);
	printf("value of ptr: %p\n",(void*)ptr);
	printf("value of dptr: %p\n",(void*)ptr);
	return 0;
}

