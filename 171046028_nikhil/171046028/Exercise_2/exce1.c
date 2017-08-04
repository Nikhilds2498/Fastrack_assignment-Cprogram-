#include<stdio.h>
#include<assert.h>
int leapyear(int a);
void main()
{
assert(leapyear(2004)==1);
assert(leapyear(2005)==0);
assert(leapyear(2008)==1);
}

int leapyear(int a)
{
	int b;
	
	b=a%4;
	if(b==0)
	{
		printf("%d is a leapyear\n",a);
		return 1;
	}
	else
	{
		printf("%d is not a leapyear\n",a);
		return 0;
	}
}