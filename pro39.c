// Sum of elements greater than a previous element
// 1 D array
#include<stdio.h>
void main(){
    int arr[]={10,30,20,50,40};//it checks & sums only if next number is greater than previous one
    // int arr[]={10,20,30,40,50,60};
    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            sum+=arr[i];
        }
    }
    printf("Sum of elements grester than previous number is :%d",sum);
}