#include<stdio.h>
	int c1,c2,c3;
void fun(long n)
{
	c1 = c2 = c3 =0;
	while(n)
	{
		switch(n%10)
		{
			case 1:c1++;
			break;
			case 2:c2++;
			break;
			case 3:c3++;
		}
		n/=10;
	}
}
int main()
{
	long n = 123114350L;
	fun(n);
	printf("\nThe result:\n");
	printf("n=%ld c1=%d c2=%d c3=%d\n",n,c1,c2,c3);
	return 0;
}
