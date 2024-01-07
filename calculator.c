#include<stdio.h>
int main()
{
	char op;
	int a,b;
	printf("enter an operator(+), (-),(*),(/) :");
	scanf("%c", &op);
	printf("enter the value of a : ");
	scanf("%d", &a);
	printf("enter the value of b : ");
	scanf("%d", &b);
	switch (op)
	{
		case '+':
			printf("%d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("%d - %d = %d",a,b,a-b);
			break;
		case '*':
		    printf("%d * %d = %d",a,b,a*b);
		    break;
		case '/':
			printf("%d / %d = %d",a,b,a/b);
			break;
				
			
    }
  return 0;			
}
