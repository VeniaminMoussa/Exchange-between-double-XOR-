#include<stdio.h>
#include<float.h>
#include<limits.h>
#define SIZE 100000000
int main(void)
{
	double a=99999999999999.987654321, b=0.123456789;

	printf("a=%lf and b=%lf\n\n",a,b);

	b=((long int)a^(long int)b)+(((long int)((a-(long int)a)*SIZE)^(long int)((b-(long int)b)*SIZE))/(double)SIZE);

	a=((long int)a^(long int)b)+(((long int)((a-(long int)a)*SIZE)^(long int)((b-(long int)b)*SIZE))/(double)SIZE);

	b=((long int)a^(long int)b)+(((long int)((a-(long int)a)*SIZE)^(long int)((b-(long int)b)*SIZE))/(double)SIZE);

	printf("a=%lf and b=%lf\n",a,b);

	return 0;
}
