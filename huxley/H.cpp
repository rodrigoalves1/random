#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>


int i,a;
int soma = 0;
using namespace std;

int main()
{    
  
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%d",&i) != EOF){
        
              
        
        for ( ; i > 0; --i)
        {
            scanf("%d",&a);
            soma+=a;
        }
          printf("%d\n", soma);
          soma = 0;
          a=0;
    }
    return 0;
}