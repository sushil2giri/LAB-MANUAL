#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("Enter temprature in celsius:");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("fahrenheit:%2f\n",fahrenheit);
	return 0;
}
