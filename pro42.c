// CRUD with switch statement
// 1 D array
#include<stdio.h>
void main(){
    int array[10],sum=0,ui,uv,choice,size;

    while(1){
        printf("Menu:\n");
        printf("1. CREATE\n2. READ\n3. UPDATE\n4. DELETE\n5. EXIT\n");
        printf("Go step by step i.e. (1-5)\n");
        printf("Choose a number from(1-5):");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            // Create
                printf("Enter the array size:");
                scanf("%d",&size);
                for(int i=0;i<size;i++){
                    printf("Enter the a[%d]=",i);
                    scanf("%d",&array[i]);
                }
                printf("Enter 2 to read or print it.\n");
                break;  
            case 2://read
                for (int i = 0; i < size; i++)
                {
                    printf("a[%d]=%d\n",i,array[i]);
                }
                printf("Enter 3 to update any value in it.\n");
                break;
            case 3://update
                printf("\nEnter the index u want to update:");
                scanf("%d",&ui);
                printf("\nEnter the index value:");
                scanf("%d",&uv);

                if(ui<=size){
                    printf("%d=%d",ui,uv);
                    array[ui]=uv;

                    printf("\n updated value:\n");
                    for(int i=0;i<size;i++){
                        printf("a[%d]=%d \n",i,array[i]);
                    }
                }
                else{
                    printf("Enter index correctly");
                }
                printf("Enter 4 to delete any entry in it.\n");
                break;
            case 4://delete
                for(int i=2;i<size;i++){
                     array[i]=array[i+1];
                }


                 for(int i=0;i<size-1;i++){
                     printf("%d \n",array[i]);
                }
                break;
            case 5://exit
            printf("Exited the program\n");
            return;
            default:
            printf("Invalid choice. Please choose a number from 1 to 5.\n");
            break;
        }   
    }
}