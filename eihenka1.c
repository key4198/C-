#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char str[100];
   int a,b;

   printf("�A���t�@�x�b�g����͂��ĉ������B\n");
   scanf("%c", &str);

   if(str >= 65 && str <= 90){
      for(a=0; str[a]!='\0'; a++){
         str[a] = toupper(str[a]);
      }
      printf("�啶���ɂ����%c�ł��B\n", str);
   }

   else if(str >= 97 && str <= 122){
      for(b=0; str[b]!='\0'; b++){
         str[b] = tolower(str[b]);
      }
      printf("�������ɂ����%c�ł��B\n", str);
   }

   else{
      printf("�A���t�@�x�b�g�ȊO�����͂���܂����B\n");
   }

   return 0;
}
