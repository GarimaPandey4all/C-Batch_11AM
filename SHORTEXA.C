#include<stdio.h>
#include<conio.h>

int main()
{
       //	unsigned short int x = -4; // 2nd
       //unsigned short int x = 65538; // 3rd
       signed short int x = 32769;

	//unsigned short int x = -32772; // 4th
	//char c = 'A';

	clrscr();

       //printf("The value of x is: %d", x);

       printf("The value of x is: %u\n", x); // 2nd, 3rd & 4th

       printf("The value of x is: %d\n", x); // 2nd, 3rd & 4th

	//printf("A is: %d", c);

	getch();
	return 0;
}