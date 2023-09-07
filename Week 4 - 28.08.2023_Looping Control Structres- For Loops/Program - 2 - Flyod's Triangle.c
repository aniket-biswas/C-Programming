#include <stdio.h>

int main() {
    int N, num = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Floyd's Triangle:\n");

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

// Algorithm:

// 1. Input the limit N.
// 2. Initialize a variable 'num' to 1.
// 3. For 'i' from 1 to N:
//    4. For 'j' from 1 to 'i':
//       5. Print the value of 'num' followed by a space.
//       6. Increment 'num' by 1.
//    7. Print a newline to move to the next row.
// 8. End of loop.
// 9. End of program.
