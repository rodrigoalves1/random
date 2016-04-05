#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

int N,M;
int x,y;
int k= 0;
using namespace std;

int main()
{    
  
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%d",&k) != EOF){
        if(k==0)
            break;
        scanf("%d %d",&N, &M);

    for (int i = 0; i < k; i++)
    {
        scanf("%d %d",&x, &y);

        if(x == N || y == M)
            printf("%s\n","divisa");
        else if(x > N && y > M)
            printf("%s\n", "NE");
        else if(x < N && y > M)
            printf("%s\n", "NO");
        else if(x > N && y < M)
            printf("%s\n", "SE");
        else if(x < N && y < M)
            printf("%s\n", "SO");
        
    }
    
    }
    return 0;
}