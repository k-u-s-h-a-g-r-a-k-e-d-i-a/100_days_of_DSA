#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int n = strlen(str);

    int flag = 1;
    for(int i=0; i<n/2; i++) {
        if(str[i] != str[n-1-i]) {
            flag = 0;
            break;
        }
    }

    printf("%s\n", flag ? "Palindrome" : "Not Palindrome");
    return 0;
}
