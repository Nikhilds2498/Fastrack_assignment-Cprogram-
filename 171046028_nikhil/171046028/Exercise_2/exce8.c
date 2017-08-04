#include<stdio.h>
#include<assert.h>
int sumofdigits(int digit);
void main()
{
assert(sumofdigits(2468)==20);
assert(sumofdigits(9976)==31);
assert(sumofdigits(564)==15);
}

int sumofdigits(int digit)
{
	int sum=0,temp,a;
	temp=digit;
	if(temp<0)
		{
		(temp=temp*-1);
		}
	while(temp>0)
	{
		a=temp%10;
		sum+=a;
		temp/=10;
	}
printf("Sum of the digits in the number %d = %d\n",digit,sum);
return sum;
}