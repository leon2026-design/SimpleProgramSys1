#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5}; 
    int length = sizeof(numbers) / sizeof(numbers[0]); 
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += numbers[i];
    }

    printf("The sum of the array is: %d\n", sum);

    return 0;
}
