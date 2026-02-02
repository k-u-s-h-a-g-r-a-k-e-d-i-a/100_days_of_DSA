#include <stdio.h>
int main()
{
	int arr[6] = {1,2,3,5,6};
	int a,pos;;
	printf("Enter element to insert in array:");
	scanf("%d",&a);
	printf("Enter position of element:");
	scanf("%d",&pos);
	for(int i =6; i>=pos; i--) {
		arr[i]=arr[i-1];

	}
	arr[pos-1]=a;
	for (int i = 0; i <6; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
