#include <stdio.h>

int solution(int a, int b, int max) {
    int result = 0;
    for(int i = 1; i < max; i++) {
        if(i % a == 0 || i % b == 0) {
            result += i;
        }
    }
    return result;
}

void main() {
    int result = solution(3, 5, 1000);
    printf("result is %d \n", result);
}