#include <stdio.h>

int solution(int max) {
    int result = 2;
    int arr[100]; 
    int idx = 1;
    arr[0] = 1;
    arr[1] = 2;
    while (arr[idx] <= max)
    {
        idx++;
        arr[idx] = arr[idx -1] + arr[idx-2]; 
        if(arr[idx] % 2 ==0) {
            result += arr[idx];
        }
        printf("%d ", arr[idx]);
    }
    return result;
}

void main() {
    int result = solution(4000000);
    printf("result is %d \n", result);
}