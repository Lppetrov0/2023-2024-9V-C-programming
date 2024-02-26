#include <stdio.h>

void swap(void *p1,void *p2){
    int temp;
    int *pt1 = (int *)p1;
    int *pt2 = (int *)p2;

    temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;

}

void bubsort(int arr[],int arrlen){

 for(int i = 1; i < arrlen ;i++){
    int *pointer = arr;
    for(int j = 0;j < arrlen - i - 1; j++){
        if( *pointer > *(pointer+1)){
         swap(pointer,pointer+1);
        }
        *pointer++;
    }
 }
}

int main(void){
    int arr[5] = {4,2,3,1,5};
    int size = 5;
   bubsort(arr,size);
   for(int j = 0; j < size; j++){
    printf("\n%d",arr[j]);
   } 
}