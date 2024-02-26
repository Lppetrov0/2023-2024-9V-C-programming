#include <stdio.h>

int strlenght(char *str){
   int counter = 0;

   for(;*str != '\0';str++){
    counter++;
   }
   return counter;
}

int main(){
    char str1[] = "String";
    int result = strlenght(str1);
    printf("Lenght:%d\n",result);
}