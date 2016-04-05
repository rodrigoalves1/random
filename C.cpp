#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int n;
char entrada[21];

int  isprime(int n) {
    unsigned short i, raiz;
    if(n==1){
        printf("It is a prime word.\n");
        return 0;
    }
    char c = 0;
 
    raiz = (short) sqrt(n);
    if ((n % 2 == 0) && (n != 2))
        c = 1;
    else {
        for (i = 3; i <= raiz; i = i + 2)
            if (n % i == 0) {
                c = 1;
                break;
            }
    }
    if(c==0)
    	printf("It is a prime word.\n");
   	else
    	printf("It is not a prime word.\n");
    return 0;
}

int main (){

	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	

	while(scanf("%s", entrada) != EOF){ 
		
		for(int i = 0; i < strlen(entrada); ++i){
			 
			if(isupper(entrada[i])){
				n+=entrada[i] -38;
			
			}
			else{
				n += entrada[i] -96;
			
			}
		}

      isprime(n);
		n = 0;
	}

	return 0;
}
