// Sum of All Prime Numbers in the Array
// 1 D array
#include<stdio.h>
int isPrime(int num){
    // int num;
    // printf("Enter the number:");
    // scanf("%d",&num);
    if(num<=1){
        // printf("not prime\n");
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if (num%i==0){
            // printf("not prime\n");
            return 0;
        }
    }
    // printf("prime\n");
    return 1;
}
int main(){
    int arr[]={2,3,4,5,6,7,8,9,10};
    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        if(isPrime(arr[i])){
            sum+=arr[i];
        }
    }
    printf("Sum is : %d",sum);
}