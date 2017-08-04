#include<stdio.h>
#include<assert.h>
double power(double joules,double seconds);
void main()
{
assert(power(400000,4)==100);
assert(power(100000,5)==20);
assert(power(-99,-2)==-1);
assert(power(-125,25)==-1);
assert(power(91,-5)==-1);

}

double power(double joules,double seconds)
{
	double kw,kwh;
if((joules>=0)&&(seconds>=0))
{
	
	kw=(joules)/(1000*seconds);
	kwh=kw/3600;
	printf("Power = %fkw\n",kw);
	printf("Energy consumed = %fkwh\n",kwh);
	return kw;
}
else
{
	printf("Negative joules or seconds \n ");
	return -1;
}

}