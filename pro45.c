#include<stdio.h>
void main(){
    // CRUD-array
    // create-read-update-delete

    int size,updateindex,updatevalue;

    printf("Enter the array size:");
    scanf("%d",&size);
    int array[size];
    // create
    for(int i=0;i<size;i++){
        printf("Enter the a[%d]=",i);
        scanf("%d",&array[i]);
    }
    // display or read
    printf("The array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("\na[%d]=%d",i,array[i]);
    }

    // update
    printf("\nEnter the index u want to update:");
    scanf("%d",&updateindex);
    printf("\nEnter the index value:");
    scanf("%d",&updatevalue);

    if(updateindex<=size){
        printf("%d=%d",updateindex,updatevalue);
        array[updateindex]=updatevalue;

        printf(" updated value:\n");
        for(int i=0;i<size;i++){
             printf("a[%d]=%d \n",i,array[i]);
        }
    }
    else{
        printf("Enter index correctly");
    }

    // delete
     for(int i=2;i<size;i++){
        array[i]=array[i+1];
    }


    for(int i=0;i<size-1;i++){
        printf("%d \n",array[i]);
    }
    
}