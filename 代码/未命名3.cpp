#include<stdio.h>
int main()
{
    //1.������λ���֣�100~999��
    int num = 100;
    do
    {
        //2.��ȡ����ˮ�ɻ���
        int a = num % 10;        //��λ
        int b = num / 10  %10;   //ʮλ
        int c = num / 100 %10;   //��λ

        if(a*a*a + b*b*b + c*c*c == num )
        {
            printf("%d\n",num);
        }
        num++;
    }while(num< 1000);
    return 0;
}

