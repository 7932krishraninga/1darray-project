// 1 D array sums
// Sum of even numbers in the array
#include<stdio.h>
void main(){
    int array[]={1,2,3,4,5,6,7,8},sum=0;
    int n=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            sum +=array[i];
        }
    }
    printf("Sum of even number is :%d",sum);
}