#include<stdio.h>

int addition();

int main()

{

int a,b,sum;

printf("enter the values of a and b");
scanf("%d %d", &a, &b);

sum= addition(a,b);

printf("sum=%d",sum);

return 0;

}

int addition(int n1, int n2)
{

int add;
add= n1+n2;
return add;

}
