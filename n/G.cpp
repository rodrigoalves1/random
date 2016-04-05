
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int n, aux, i, j, a, b, c, d, t, k, h;
long long m;

long long ah[20009];


int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &k);
        for(i = 0; i < n; i++){
            scanf("%lld", &ah[i]);
        }
        sort(&ah[0], &ah[n]);
       
        printf("%lld\n", ah[n-1]-ah[n-k]);
    }
    
    return 0;
}