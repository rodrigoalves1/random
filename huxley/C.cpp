#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

int n[3];
int menor;
using namespace std;

int main()
{    
  
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%d",&n[0]) != EOF){
      
        scanf("%d",&n[1]);
     
        scanf("%d",&n[2]);

        printf("%d-%d-%d\n", n[0],n[1],n[2]);
       // menor = (n[0] < n[1] && n[0] < n[2])?n[0]:(n[1] < n[2] && n[1] < n[0])?n[1]:n[2];    
        menor = min(min(n[0],n[1]),n[2]);
        printf("%d\n", menor);
    
    
    }
    return 0;
}