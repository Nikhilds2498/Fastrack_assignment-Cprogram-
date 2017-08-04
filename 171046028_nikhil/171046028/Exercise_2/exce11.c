#include<stdio.h>
#include<assert.h>
#include<math.h>

int convert(long int);
void main()
{
	long int binary;
	

	printf("Enter the Binary number: ");
	scanf("%ld",&binary);

	printf("\nDecimal value is : %d\n\n",convert(binary));

	assert(convert(1010) == 10);
	assert(convert(11) == 2);

}

int convert(long int bin)
{
	int i = 0, dec = 0;
	long int temp;

	while(bin != 0)
	{
		temp = bin % 10;
		bin = bin / 10;
		dec = dec + temp * pow(2 , i);
		i++;
	}
	return dec;
}