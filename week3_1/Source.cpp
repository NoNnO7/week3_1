#include<stdio.h>
int main()
{
	int x,n;
	scanf_s("%d", &n);
	x = 1;
	while (x <= n)
	{
		printf("*");
		x++;
	}
	return 0;
}