#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;


int n;
int sum = 0;
int ax;
int ay;
int bx;
int by;
int main()
{ 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    while(scanf("%d",&n) != EOF){

    for (int i = 0; i < n; ++i)
    {
        
    scanf("%d %d %d %d",&ax,&ay,&bx,&by);

        sum += (bx - ax + 1) * (by - ay + 1);
    }

    printf("%d\n",sum);
    sum = 0;
}
    return 0;
}