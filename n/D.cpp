#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

int a,b;
int m = 0;
using namespace std;

int main()
{    
  
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%d",&m) != EOF){
    int n[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a<b)
            printf("%c\n", '<');
        else if(a>b)
            printf("%c\n", '>');
        else
            printf("%c\n", '=');
    }
    
    }
    return 0;
}