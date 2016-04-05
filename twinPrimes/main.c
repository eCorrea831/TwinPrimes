//
//  main.c
//  twinPrimes
//
//  Created by Erica Correa on 4/5/16.
//  Copyright © 2016 Turn to Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //1. Find the first N twin-primes. A twin prime is a pair of primes whose difference is 2. e.g. (3, 5 ), (5,7) and so on ...
    //2. Make sure your check for a prime is as efficient as possible. Checking for divisibility by every number up to the number being tested is not optimal.
    //3. Note: 2 is the smallest prime number
    
    int min = 40;
    int max = 100;
    int isPrime = 1;
    int isAlsoPrime = 1;
    
    for (int n = min; n <= max; n++) {
        if (n % 2 != 0) {
            for (int i = 2; i < n; i++) {
                if (n % i != 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime == 1) {
                n += 2;
                if (n % 2 != 0) {
                    for (int i = 2; i < n; i++) {
                        if (n % i != 0) {
                            isAlsoPrime = 0;
                            break;
                        }
                    }
                        
                }
            }
            if (isAlsoPrime == 1) {
                printf("%d and %d are the first twin primes in that range.\n", n, n + 2);
                break;
            }
        }
        isPrime = 1;
    }
    
    
    return 0;
}
