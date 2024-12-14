// write the program to find the average of 1D array    
#include <Stdio.h>
void main(){
    int size;
    float avg,sum=0;

    printf("Enter array size:\n");
    scanf("%d",&size);

    int array[size];
    for(int i=0;i<size;i++){
        printf("Enter elements a[%d]=",i);
        scanf("%d",&array[i]);
    }

    printf("Array Elements are:\n");
    for(int i=0;i<size;i++){
        printf("a[%d]=%d \n",i,array[i]);
    }

    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    printf("\nTotal of array elements is: %d",(int)sum);
    // average
    avg=sum/size;
    printf("\nAverage of an array is %.2f",avg);
}
