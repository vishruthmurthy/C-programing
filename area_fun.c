#include<stdio.h>

int area_rect();

int main()

{

int l, b;

printf("enter the length and breath of the rectangle\n");
scanf ("%d %d", &l, &b);

int area = area_rect(l,b);

printf("%d", area);

return 0;

}

int area_rect(int length, int breadth)
{
int area = length * breadth;
return area;
}
