#include<stdio.h>

int main(void)
{
/*縦、横、高さをnum1,num2,num3で表す。*/
   double num1,num2,num3;

/*「printf」「scanf」を用い数値を入力させる。*/
   printf("縦の長さを入力してください。\n");
   scanf("%lf",&num1);

   printf("横の長さを入力してください。\n");
   scanf("%lf",&num2);

   printf("高さを入力してください。\n");
   scanf("%lf",&num3);

   printf("直方形の体積は%fです。\n", num1*num2*num3);

   printf("直方形の表面積は%fです。\n",(num1*num2+num2*num3+num3*num1)*2 );

   return 0;
}

