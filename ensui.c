#include <stdio.h>
#include <math.h>
/*�~�����΂��`�B*/
#define PAI 3.14159265
int main(void)
{
   double r, h, n, ans, i, a;

   printf("��ӂ̔��a�A�����A����������͂��Ă��������B\n");
   scanf("%lf %lf %lf", &r, &h, &n);

   ans = 0;
   for(i=1; i<=n; i++){
      a=n-i;
/*�~���̑̐ς�\���B*/
      ans += (PAI*(a*r/n)*(a*r/n)*(h/n));
   }
   printf("�̐ς�%.2f�ł��B\n", ans);

   return 0;
}
