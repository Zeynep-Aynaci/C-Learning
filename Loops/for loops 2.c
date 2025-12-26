#include <stdio.h>

int main()
{
    unsigned long long wheat = 1;
    unsigned long long amount_of_wheat = 1;
    for(int i=1;i<=64;i++){
        wheat=wheat*2;
        amount_of_wheat += wheat;
    }
    printf("amount of wheat : %llu",amount_of_wheat);


    return 0;
}
