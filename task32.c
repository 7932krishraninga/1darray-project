// storing the sum in variable C
#include<stdio.h>
void main(){
    int size;

       printf("Enter array size:\n");
    scanf("%d",&size);

    int A[size],B[size],C[size];
    // A
    printf("Enter elements A:\n");
    for(int i=0;i<size;i++){
        printf("Enter elements A[%d]=",i);
        scanf("%d",&A[i]);
    }

    printf("Array A's elements are:\n");
    for(int i=0;i<size;i++){
        printf("a[%d]=%d \n",i,A[i]);
    }
    // B
    printf("Enter elements B:\n");
    for(int i=0;i<size;i++){
        printf("Enter elements B[%d]=",i);
        scanf("%d",&B[i]);
    }

    printf("Array B's elements are:\n");
    for(int i=0;i<size;i++){
       printf("a[%d]=%d \n",i,B[i]);
    }

    printf("Array C is:(A+B)\n");
    for(int i=0;i<size;i++){
        C[i]=A[i]+B[i];
        printf("C[%d]=%d\n",i,C[i]);
    } 
}