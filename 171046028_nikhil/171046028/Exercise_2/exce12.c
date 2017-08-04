#include<stdio.h>
#include<assert.h>
#include<math.h>

long int convert(int);
void main()
{
	
	int dec;
	printf("Enter the decimal the input: ");
	scanf("%d",&dec);

	printf("\nConverted binary number is %ld\n", convert(dec));

	assert(convert(14) == 1110);
	assert(convert(6) == 110);
	assert(convert(7) == 1011);
	
}

long int convert(int dec)
{
	int i=0,rem;
	long int bin = 0;
	
	while(dec > 0)
	{
		rem  = dec % 2;
		bin = bin + rem * pow(10,i);
		dec = dec/2;
		i++;
	}
	return bin;
}