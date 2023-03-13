#include <stdio.h>
#include <stdlib.h>
int fib (int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }else{
        return fib(n - 1) + fib(n - 2);
    }
}
int main (void){
    int n;

    printf("Digite a quantidade de digitos: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("%d; ",fib(i+1));
    }
}
