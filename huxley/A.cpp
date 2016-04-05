#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

int n[3];

using namespace std;

int main()
{    
  
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%d",&n[0]) != EOF){
      
        scanf("%d",&n[1]);
     
        scanf("%d",&n[2]);

       sort(n,n+3);


    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", n[i]);
    }
    
    }
    return 0;
}