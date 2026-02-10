#include <stdio.h>
int fib(int n) {

	if(n <= 1)
		return n;
	return fib(n-1)+fib(n-2);
}
int main()
{
	int a ;
	scanf("%d",&a);
	int b = fib(a);
	printf("%d",b);

	return 0;
}
