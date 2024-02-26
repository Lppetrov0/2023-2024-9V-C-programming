#include <stdio.h>



void strhalf(char str[],char **dp){
    int size = 0;
    for(int i = 0; str[i]!='\0';i++){
        size++;
    }
    *dp = str;
    *dp = *dp + (size/2);
}
int main(void){
    char string[] = "Something";
    char *nstr;
    strhalf(string,&nstr);
    printf("String:%s",nstr);
}