#include<stdio.h>
int main(){
    int arr[50],size,pos,num;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of the array:");
    for(int i=0;i<size;i++){

        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}
    