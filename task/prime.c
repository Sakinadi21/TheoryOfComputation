#include<stdio.h>
#include<stdbool.h>
#include<math.h>


void sieveOfEratosthenes(int n){
    bool isPrime(n+1);

    for(int i = 0;i<=n;i++)
        {

            isPrime[i] = true;
        }
        isPrime[0] =  isPrime[1] = false;


        for(int s= 2;s<=sqrt(n);s++{}
        if(isPrime[s]){
            for (int i=s*s;i<=n;s++){
                isPrime[i]= false;
            }
        }
    }
    printf("Prime numbers %d are:\n";n);
    for(int i =2;i<=n;i++){
        if(isPrime[i]){
            printf("%d",&i);
        }
    }
