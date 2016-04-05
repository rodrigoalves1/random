#include<stdio.h>
#include<string.h>
#include<math.h>
 
int  isprime(int n) {
    unsigned short i, raiz;
    if(n==1){
        printf("It is a prime word.\n");
        return 0;
    }
    char c = 0;
 
    raiz = (short) sqrt(n);
    if ((n % 2 == 0) && (n != 2))
        c = 1;
    else {
        for (i = 3; i <= raiz; i = i + 2)
            if (n % i == 0) {
                c = 1;
                break;
            }
    }
    printf((c==0)?"It is a prime word.\n":"It is not a prime word.\n");
    return 0;
}
 
int main() {
    char palavra[21] = "",i;
    while (scanf("%s", palavra) != EOF) {
        short soma = 0;
        for (i = 0; i < strlen(palavra); i++) {
            char c = palavra[i];
            soma+=(c>='a')?palavra[i]-96:palavra[i]-38;
        }
        isprime(soma);
    }
 
    return 0;
}