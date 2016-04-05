#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

float n[3];
float delta;
float raizes[2];
using namespace std;

int main()
{    
  
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%f",&n[0]) != EOF){
      // b² – 4 * a * c
        scanf("%f",&n[1]);
     
        scanf("%f",&n[2]);
       
        if(n[0]==0){
             printf("NEESG\n");
        }else{
        delta = pow(n[1],2) - 4 * n[0] *n[2]; 


        if(delta > 0){
            raizes[0] = ((-1*n[1])+sqrt(delta))/(2*n[0]);
            raizes[1] = ((-1*n[1])-sqrt(delta))/(2*n[0]);
         printf("%.2f\n%.2f\n",raizes[0],raizes[1]);
        
        }else if(delta<0){
         printf("NRR\n");
        
        }else if (delta ==0){
            raizes[0] = (-1*n[1])/(2*n[0]);
            printf("%.2f\n%.2f\n",raizes[0],raizes[0]);

         }
         }
     delta = 0;
 }
    return 0;
}