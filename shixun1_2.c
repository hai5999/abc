#include <stdio.h>
void fibonacci(int n);
int main(){
	int n;
	scanf( "%d", &n );
	fibonacci(n);
	return 0;
}
void fibonacci(int n){
	int a=1,b=1,c=a;
	printf( "%d ", a );
	printf( "%d ", b );
	n = n-2;
	while( n>0 ){
		c = a;
		a = b;
		b = c+b;
		printf( "%d ", b );
		n--;	
	}
}
