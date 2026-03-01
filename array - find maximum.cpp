#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 5, 30, 15};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum element is %d\n", max);
    return 0;
}
