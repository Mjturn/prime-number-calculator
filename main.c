#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number) {
    if(number < 2) {
        printf("The number needs to be greater than 1.\n");
    }
    
    for(int i = 2; i < number; i++) {
        if(number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number = 5;
    
    if(is_prime(number) && number > 1) {
        printf("%d is a prime number.\n", number);
    } else if(!is_prime(number) && number > 1) {
        printf("%d is a composite number.\n", number);
    }

    return 0;
}
