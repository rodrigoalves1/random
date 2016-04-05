#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int n,a,d;
int T;



int main (){

	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	

	scanf("%d", &T);
	for (int i = 0; i < T; ++i)
	{
		scanf("%d%d%d", &n, &a, &d);
		printf("%d\n", (2*a+d*n-d)*n/2);
	} 
		
		
	
	return 0;

	}

