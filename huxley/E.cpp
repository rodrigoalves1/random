#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

float n[3];
float media;
using namespace std;

int main()
{    
  
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%f",&n[0]) != EOF){
      
        scanf("%f",&n[1]);
     
        scanf("%f",&n[2]);
       

        media = (n[0]+n[1]+n[2])/3;

        if(media >= 7)
         printf("aprovado\n");
        else if(media<3)
         printf("reprovado\n");
        else if ((media < 7) &&  (media >=3))
         printf("prova final\n");
     media = 0;
 }
    return 0;
}