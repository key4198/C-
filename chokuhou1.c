#include<stdio.h>

int main(void)
{
/*�c�A���A������num1,num2,num3�ŕ\���B*/
   double num1,num2,num3;

/*�uprintf�v�uscanf�v��p�����l����͂�����B*/
   printf("�c�̒�������͂��Ă��������B\n");
   scanf("%lf",&num1);

   printf("���̒�������͂��Ă��������B\n");
   scanf("%lf",&num2);

   printf("��������͂��Ă��������B\n");
   scanf("%lf",&num3);

   printf("�����`�̑̐ς�%f�ł��B\n", num1*num2*num3);

   printf("�����`�̕\�ʐς�%f�ł��B\n",(num1*num2+num2*num3+num3*num1)*2 );

   return 0;
}

