#include <stack>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
using namespace std;


bool validar(string exp)
{
	
	stack<char>  S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '['){
			S.push(exp[i]);

		}
		else if(exp[i] == ')')
		{
			if(S.empty()) 
				return false;
			if(S.top() != '('){
				S.pop();
				return false;}
		}
		else if(exp[i] == ']'){
			if(S.empty()) 
				return false;
			if(S.top() != '['){
				S.pop();
				return false;}
		}
	}
	return S.empty()?true:false;
}

int main()
{
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	char expression[200];
	int n = 0;
	
	scanf("%d",&n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s",&expression);
		if(strlen(expression) == 0)
			printf("Yesz\n");
		else if(validar(expression))
			printf("Yes\n");
		else
			printf("No\n");
		
	}
	
	return 0;
}