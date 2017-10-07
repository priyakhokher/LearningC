#include <stdio.h>
int strcat2(char *s,char *t){    
   for(;*s!='\0';s++){
   }
   while((*s++ = *t++)!='\0'){        
   }
   t='\0';
   return 0;
}
int main(){
  char str1[15] = "first";
  char *str2 =" second";

  strcat2(str1,str2);
  printf("%s",str1);
  return 0;
}   