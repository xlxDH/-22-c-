#include<stdio.h>
int main()
{
	int a[13],l,max=-0x3f;
	for(int i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
		if(a[i]>max) {
			l = i;
			max = a[i];
		}
	}
	printf("���ֵ��%d,�����±꣺%d\n",max,l);
	return 0;
}
