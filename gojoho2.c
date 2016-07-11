#include <stdio.h>
int main(void)
{
   int a, b, c, n;

   printf("自然数を二つ入力\n");
   scanf("%d %d", &a, &b);

/*aがbより小さいとき。*/
   if(a<b){
      n = a;
      a=b;
      b = n;
   }
   c=a%b;
/*cが０ではない。*/
   while(c != 0){
      a=b;
      b=c;
      c=a%b;
   }
   printf("最大公約数は%dです。\n",b);
   return 0;
}
