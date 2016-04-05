#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

string ans[50001];
int n = 0;
string put(string a, string b){

  string sol = "";
  int carry = 0;
  int d = a.size()-1;
  int e = b.size()-1;

  while ( d >= 0 || e >= 0 || carry != 0){

    if (d >= 0) {
      carry+= (a[d] - '0');
      d--;
    }
    if (e >= 0) {
      carry+= (b[e] - '0');
      e--;
    }

    sol.insert(sol.begin(),'0' + (carry%10));
    carry /= 10;

  }

  return sol;

}
string fib(int n){
  if (ans[n].size() > 0) 
    return ans[n];
  else {
    string aux = put(fib(n-1), fib(n-2));
    ans[n] = aux;
    return aux;
}
  }



int main(){

  int n;
  ans[0] = "0";
  ans[1] = "1";
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
   while(scanf("%d",&n) != EOF){
     
     printf("The Fibonacci number of %d is %s\n", n,fib(n).c_str());
    
    }

  return 0;


}