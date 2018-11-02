#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void modifyArray(int b[], int size);
void modifyElement(int e);

int main(void)
{
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("pause");
}
int addbyone(int x)
{
	x++;
	printf("x=%d\n", x);
	return x;
}
	