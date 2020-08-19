#include<stdio.h>
int main() {
	int a, i, l;
	printf("Enter integer : ");
	scanf_s("%d", &a);
	int A = a;
	for (i = 0;A >= i;i++)
	{
		for (l = 1;a >= l;l++)
		{
			printf("* ");

		}
		printf("\n");
		a--;
	}
	return 0;
}