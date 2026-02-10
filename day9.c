#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	char a[n];
	for(int i =0 ; i<n; i++) {
		scanf(" %c",&a[i]);
	}
	for(int j = n-1; j>=0; j--) {
		printf("%c",a[j]);
	}
	return 0;
}
