#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,discriminant,root1,root2;
	printf("enter coefficients a,b and c");
	scanf("%d%f%f",&a,&b,&c);
	discriminant=b*b-4*a*c;
	if(discriminant>=0){
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("roots:%2f%f\n",root1,root2);
	}else{
		printf("roots are complen.\n");
	}
return 0;	
}
