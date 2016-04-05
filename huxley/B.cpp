#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

char n[120];

using namespace std;

int main()
{    
  
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%s",&n) != EOF){
        for (int i = 0; i < strlen(n); ++i)
        {
               printf("Seja muito bem-vindo %s\n", n[i]); 
        }
     
         memset(n, 0, 120*sizeof(char));
    }
    return 0;
}