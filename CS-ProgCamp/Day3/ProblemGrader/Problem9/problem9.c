//input n and show all prime numbers from 2 to n use Sieve of Eratosthenes
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n==0 || n==1) {
    }
    else { 
        printf("%d:\n", n);
    }

    int prime[n+1];
    for(int i=0;i<=n;i++) {
        prime[i] = 1;
    }for(int i=2;i<=n;i++) {
        if(prime[i]) {
            for(int j=i*i;j<=n;j+=i) {
                prime[j] = 0;
            }
        }
    }
    for(int i=2;i<=n;i++) {
        if(prime[i]) {
            printf("%d ", i);
        }
    }
    return 0;
}