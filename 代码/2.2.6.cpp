#include<stdio.h>
int main()
{
	double len , s , sur , r,v, pi =3.14159;
	scanf("%lf",&r);
	len = 2*pi*r;
	s = pi*r*r;
	sur = pi*4*r*r;
	v = pi*4/3*r*r*r;
	printf("�ܳ���%.2lf�������%.2lf���������%.2lf�������%.2lf",len,s,sur,v);
	return 0;
}
