#include<stdio.h>
 

int count( int S[], int m, int n )
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (m <=0 && n >= 1)
        return 0;
    return count( S, m - 1, n ) + count( S, m, n-S[m-1] );
}
 
int n;
int main()
{
    
    int tamanhos[] = {50, 25, 10,5,1};
    int m = 5;
    
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    while(scanf("%d",&n) != EOF){

    printf("%d\n", count(tamanhos, m, n));

    }
    return 0;
}