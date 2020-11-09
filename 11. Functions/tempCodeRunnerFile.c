#include<stdio.h>
#include<stdlib.h>


bool is_Prime(){
    int num;

	printf("\n Enter a number :: ");
        scanf("%d", &num);

    for(int i=2; i<=num/2; i++){
        if(num % i == 0)    return false;
    }  
    return true;
} 

void print_prime(){
	for(int i=1; i<= 100; i++){
        int flag = 0;
        for(int j=2; j<=i/2; j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0) printf("%d \t", i); 
    }
}

void main(){
    int choice = 0;

    while(choice != 3){
        printf("\n 1. Check a number is prime or not : ");
        printf("\n 2. Print prime numbers less then 100 : ");
        printf("\n 3. Exit");
        printf("\n Enter your choice [1/2/3] : " );
            scanf("%d", &choice);

        if(choice == 1){
            int ans = is_Prime();
            ans == true ? 
            printf("\n Number is a prime number . \n") :
            printf("\n Number is not a prime number . \n");
        } else if(choice == 2){
            print_prime();
        } else if (choice == 3){
            exit(0);
        } else {
            printf("\n Wrong choice !! ");
        }
    }
}