#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

float n[2];
float media;
using namespace std;

int main()
{    
  
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%f",&n[0]) != EOF){
      
        scanf("%f",&n[1]);

        for (int i = n[0]; i <= n[1]; ++i)
        {
            if(i%2==1)
            printf("%d\n", i);
        }
 }
    return 0;
}