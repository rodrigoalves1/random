#include<stdio.h>
 
int possibilities( int coins[], int m, int n )
{
    int i, j, x, y;
    int table[n+1][m];
    for (i = 0 ; i < m; i++){
        table[0][i] = 1;}
 
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            if(i-coins[j] >= 0)
                x =  table[i - coins[j]][j];
            else
                x = 0;
            if(j >= 1)
                y = table[i][j-1];
            else
                y= 0; 
          table[i][j] = x + y;
        }
    }
    return table[n][m-1];
}
     int n;

int main()
{    
    int coins[] = {50,25,10,5,1};   
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%d",&n) != EOF){
    printf("%d\n", possibilities(coins, 5, n));
    }
    return 0;
}