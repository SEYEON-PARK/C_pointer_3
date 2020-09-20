#include <stdio.h>
int sub(int* p)
{
	return p[0] - p[1];
}

int main(void)
{
	int b;
	int a[2] = { 30, 5 };
	
	b = sub(a);

	printf("30-5는 %d입니다.\n", b);

	return 0;
}