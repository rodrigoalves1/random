#include<stdio.h>

using namespace std;

int x1,Y1,x2,y2,n,p1,p2,j,m;



int main (){

	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	
	scanf("%d%d%d%d", &x1,&Y1,&x2,&y2);
	j=0;
		while(x1!=0 && x2!= 0 && Y1!= 0 && y2!=0){
		
			m=0;
			scanf("%d",&n);

			for (int i = 0; i < n; ++i)
				{
					scanf("%d%d",&p1,&p2);
			   		if (p1 >= x1 && p2 <= Y1 && p1 <= x2 && p2 >= y2)
						m = m + 1;
				}
	printf("Teste %d\n%d\n\n", ++j, m);
	scanf("%d%d%d%d", &x1,&Y1,&x2,&y2);
	}

	return 0;

	}

