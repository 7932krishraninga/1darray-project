// sum of negative numbers
#include<stdio.h>
void main(){
    int arr[]={-10,-30,20,50,40};
    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            sum+=arr[i];
        }
    }
    printf("Sum of negative numbers is :%d",sum);

}