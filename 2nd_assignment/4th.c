#include <stdio.h>
#define COLLUMN = 4
#define ROWS = 50
void func(int *arr){
    int **p = &arr[COLLUMN][ROWS];
    int *p = &arr[COLLUMN];
    for(; *p != '\0'; *p++){
      print("%d",*p);
        for(;**p != '\0';**p++){
            printf("%d",**p);
        }
    }
}
int main(void){
    arr[ROWS][COLLUMN] = {{1,2,3,4},{5,6,7,8,8},{9,10,11,12},{13,14,15,16}};
}