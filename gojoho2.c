#include <stdio.h>
int main(void)
{
   int a, b, c, n;

   printf("���R��������\n");
   scanf("%d %d", &a, &b);

/*a��b��菬�����Ƃ��B*/
   if(a<b){
      n = a;
      a=b;
      b = n;
   }
   c=a%b;
/*c���O�ł͂Ȃ��B*/
   while(c != 0){
      a=b;
      b=c;
      c=a%b;
   }
   printf("�ő���񐔂�%d�ł��B\n",b);
   return 0;
}
