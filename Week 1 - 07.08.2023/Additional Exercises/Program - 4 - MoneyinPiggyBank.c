#include <stdio.h>

int main() {
    int twenty_notes, ten_notes, five_coins, fifty_paisa_coins;
    double total_amount;

    // Input the number of each denomination
    printf("Enter the number of twenty rupee notes: ");
    scanf("%d", &twenty_notes);

    printf("Enter the number of ten rupee notes: ");
    scanf("%d", &ten_notes);

    printf("Enter the number of five rupee coins: ");
    scanf("%d", &five_coins);

    printf("Enter the number of fifty paisa coins: ");
    scanf("%d", &fifty_paisa_coins);

    // Calculate the total amount
    total_amount = (twenty_notes * 20) + (ten_notes * 10) + (five_coins * 5) + (0.50 * fifty_paisa_coins);

    // Display the result
    printf("Total amount in the piggy bank: Rs.%.2lf\n", total_amount);

    return 0;
}
