#include <stdio.h>
#include <math.h>
/*円周率πを定義。*/
#define PAI 3.14159265
int main(void)
{
   double r, h, n, ans, i, a;

   printf("底辺の半径、高さ、分割数を入力してください。\n");
   scanf("%lf %lf %lf", &r, &h, &n);

   ans = 0;
   for(i=1; i<=n; i++){
      a=n-i;
/*円錐の体積を表す。*/
      ans += (PAI*(a*r/n)*(a*r/n)*(h/n));
   }
   printf("体積は%.2fです。\n", ans);

   return 0;
}
