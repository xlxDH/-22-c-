#include<stdio.h>
int main()
{
int sum1=0,num;
	scanf("%d" ,&num);
  while(num>=7)
  {
  	sum1++;
  	num-=7;
  }
  printf("%d�ܣ�%d��",sum1,num);
  return 0;
}
