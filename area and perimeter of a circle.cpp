#include<stdio.h>
#define pi 3.14159
int main()
{
	float radius,area,perimeter;
	printf("enter radius of the circle");
	scanf("%f",&radius);
	area=pi*radius*radius;
	perimeter=2*pi*radius;
	printf("area:%2f\n",area);
	printf("perimeter:%2f\n",perimeter);
	return 0;
}
