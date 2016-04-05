#include <stdio.h>
int i = 0;
a() { 
	printf("%d\n", ++i); }
b()
 { a();a();a();a();a(); }
c(){ 
	b();
	b();
	b();
	b();
	b(); 
}
d(){ c();
	c();
	c();
	c();
	c(); }
int main() {
 d();d();d();d();d();d();d();d(); 
 return 0; 
}