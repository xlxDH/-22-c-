#include<stdio.h>
int main()
{
	int ch;
	scanf("%c",&ch);
	if(ch<='9'&&ch>='1') printf("��");
	else if(ch<='z'&&ch>='a') printf("��ĸ");
	return 0;
}
