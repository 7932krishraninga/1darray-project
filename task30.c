// write a program to find the length of 1D array for eg:Enter array size 5,Enter array elements:a[0]=3,a[1]=7;a[2]=1;a[3]=8;a[4]=6;
#include<stdio.h>
void main(){
    int size;

    printf("Enter array size:\n");
    scanf("%d",&size);

    int array[size];
    for(int i=0;i<size;i++){
        printf("Enter elements a[%d]=",i);
        scanf("%d",&array[i]);
    }
     printf("\nArray elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = %d\n", i, array[i]);
    }
    printf("length is %d",size);
}