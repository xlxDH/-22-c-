#include<stdio.h>
const int N = 0x3f;
char a[N];
int main()
{
	int num1 = 0,num2 = 0, num3 = 0 ,  num4 =0,i = 0;
	while(scanf("%c",&a[i])!=EOF)
	{
		if(a[i]<='z'&&a[i]>='a') num1++;
		else if(a[i]<='Z'&&a[i]>='A') num2++;
		else if(a[i]<='9'&&a[i]>='0') num3++;
		else if(a[i]==' ') num4++;
		else if(a[i]=='\n') break;
	}printf("Сд��ĸ��%d����д��ĸ��%d�����֣�%d���ո�%d\n",num1,num2,num3,num4);
	return 0;
}
