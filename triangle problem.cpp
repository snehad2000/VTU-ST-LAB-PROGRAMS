#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<process.h>
#define WINDOWS 1
int main()
{
int a, b, c;

printf("Enter three sides of the triangle");
scanf("%d%d%d", &a, &b, &c);
if((a > 10) || (b > 10) || (c > 10))
{
printf("Out of range");
getch();
exit(0);
}
if((a<b+c)&&(b<a+c)&&(c<a+b))
{
if((a==b)&&(b==c))
{
printf("Equilateral triangle");
}
else if((a!=b)&&(a!=c)&&(b!=c))
{
	printf("Scalene triangle");
}
else 

	printf("Isosceles triangle");
}
else
{
	printf("triangle cannot be formed");
}

getch();
return 0;
}

void console_clear_screen() {
  #ifdef WINDOWS
  system("cls");
  #endif
  #ifdef LINUX
  system("clear");
  #endif
}
 
