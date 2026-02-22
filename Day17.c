#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[100]; //let frequency of each element be less than 100.
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    
    for(int i =0;i<n;i++){
        if(arr[i]>0){
            printf("%d,%d",arr[i],freq[arr[i]]);
            freq[arr[i]] =0;
        }
    }
    printf("\n");
    return 0;
}
