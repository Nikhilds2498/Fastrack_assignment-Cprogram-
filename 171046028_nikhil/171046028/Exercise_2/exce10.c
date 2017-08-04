/*ALPHABET*/

#include<stdio.h>
#include<assert.h>
char changechar(char c);
void main()
{
assert(changechar('R')=='r');
assert(changechar('b')=='B');
assert(changechar('m')=='M');
assert(changechar('K')=='k');
assert(changechar('@')=='0');
}

char changechar(char c)
{
char ch;
	if((64<c)&&(91>c))
	{
		ch=c+32;
		printf("%c has been changed to %c\n",c,ch);
		return ch;
	}
	if((96<c)&&(123>c))
	{
		ch=c-32;
		printf("%c has been changed to  %c\n",c,ch);
		return ch;
	}
	else
	{
		printf("Wrong character\n");
		return '0';
	}
}