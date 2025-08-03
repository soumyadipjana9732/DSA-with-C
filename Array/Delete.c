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
    printf("\nenter the deleting position:");
    scanf("%d",&pos);
    for(int i=pos-1;i<=size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("After deleting the array is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}