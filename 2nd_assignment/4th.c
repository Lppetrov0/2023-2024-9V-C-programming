#include <stdio.h>
#define COLLUMN 4
#define MAX_ROWS 50
void func(int arr[COLLUMN][MAX_ROWS],int rows){
   
    for(int i=0;i < rows;i++){
      for(int j=0;j < COLLUMN;j++){
            printf("%d",*(*(arr + j)+i));
           }
        printf("\n");
    }
}
int main(){
    int arr1[COLLUMN][MAX_ROWS];
    int r = 0;
    printf("\nEnter amount of Rows:");
    scanf("%d",&r);
    for(int i = 0; i < COLLUMN;i++){
        printf("Enter elemtents of %d collumn ",i+1);
        for(int j = 0; j < r; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
   func(arr1,r);

}