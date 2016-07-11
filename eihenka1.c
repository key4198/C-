#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char str[100];
   int a,b;

   printf("アルファベットを入力して下さい。\n");
   scanf("%c", &str);

   if(str >= 65 && str <= 90){
      for(a=0; str[a]!='\0'; a++){
         str[a] = toupper(str[a]);
      }
      printf("大文字にすると%cです。\n", str);
   }

   else if(str >= 97 && str <= 122){
      for(b=0; str[b]!='\0'; b++){
         str[b] = tolower(str[b]);
      }
      printf("小文字にすると%cです。\n", str);
   }

   else{
      printf("アルファベット以外が入力されました。\n");
   }

   return 0;
}
