
//Find Maximum and Minimum Element
#include <stdio.h>
int main(){
    int n;
    int arr[n];
    int min = 0;
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min)
            min = arr[i];
        else if(arr[i]>max)
            max = arr[i];
    }
    printf("max:%d,Min:%d",max,min);
    return 0;
}
