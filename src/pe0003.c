#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        if(str[i] != str[len-1-i]) {
            return 0;
        }
    }
    return 1;
}

int solution(int max) {
    int maxVal = 0L;
    int multy;
    char strText[7];
    for(int i = 1; i <= max; i++) {
        for(int j = 1; j <= max; j++) {
            multy = i*j;
            sprintf(strText, "%d", multy);
            if(isPalindrome(strText)) {
                if(maxVal < multy) {
                    maxVal = multy;
                }
            }
        }
    }
    return maxVal;
}

void main() {
    int result = solution(999);
    printf("result is %d \n", result);
}