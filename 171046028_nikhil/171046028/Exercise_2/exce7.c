#include<stdio.h>
#include<assert.h>

float calculateSeries(int);
int fact(int);

void main()
{
	int n;
	float res;

	printf("Enter N value for the series: ");
	scanf("%d",&n);
	res = calculateSeries(n);
	printf("\nSeries sum is : %f\n\n\n", res);

	assert(calculateSeries(1) == 1.000000);
	assert(calculateSeries(2) == 1.600000);
	assert(calculateSeries(2) == 1.500000);
}

float calculateSeries( int n)
{
	int i;
	float result = 0;
	for (i = 1; i<=n ; i++)
	{
		result = result + (float) 1/fact(i);
	}
	return result;
}
int fact(int n)
{
	int factorial = 1,i;
	for(i = 1; i<=n; i++)
		factorial = factorial * i;
	return factorial;
}