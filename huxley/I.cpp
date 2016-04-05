#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>


char i[2];

using namespace std;

int main()
{    
  
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%s",&i) != EOF){
        
          for (int a = 1; a != 0; --a)
              {
                printf("%s", i[a]);
              }    
              printf("\n");
        memset(i, 0, 2*sizeof(int));
          
         
    }
    return 0;
}