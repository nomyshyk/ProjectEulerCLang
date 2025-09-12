#include <stdio.h>
#include <math.h>

// In the first one-thousand expansions, 
// how many fractions contain a numerator with more digits than the denominator?
// int isPalindrome(char str[]) {
//     int len = strlen(str);
//     for(int i = 0; i < len; i++) {
//         if(str[i] != str[len-1-i]) {
//             return 0;
//         }
//     }
//     return 1;
// }

int solution(int max) {
    long nom = 3;
    long denom = 2;
    int cnt = 0;
    for(int i = 1; i < max; i++) {
        long newNom = nom + (2 * denom);
        long newDenom = nom + denom;
        printf("value is %d %d", newNom, newDenom);
        if(log10(newNom) > log10(newDenom)) {
            cnt++;
        }
        nom = newNom;
        denom = newDenom;
    }
    return cnt;
}

void main() {
    int result = solution(10);
    printf("result is %d \n", result);
}