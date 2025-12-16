#include<Stdio.h>
void swp(int x,int y);
int main()
{
int a=20,b=30;
swap(a,b);
printf("\na=%d\tb=%d",a,b);
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("x=%d\ty=%d",x,y);
}
