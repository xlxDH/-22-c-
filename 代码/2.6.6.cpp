#include<stdio.h>
int n =1;//�����n��ȫ�ֱ����������������ж����ڡ�
void func()
{
	static int a =2;//�����a��ֻ�ں�����ʹ�õ�a���������е�a��ͬ���������е�a�ᴢ����a����ֵ
	int b =5;//�����b��ֻ�ں�����ʹ�õ�b���������е�b��ͬ,���ᴢ��b����ֵ
	a+=2;
	b+=5;
	n+=12;
	printf("a=%d,b=%d,n=%d\n",a,b,n);
}
int main()
{
	int a =0,b=-10;
	printf("a=%d,b=%d,n=%d\n",a,b,n);
	func();
	printf("a=%d,b=%d,n=%d\n",a,b,n);
	func();
	return 0;
}
