/* Output:

Input 5 scores: 63 88 97 53 77
Ordered Scores:

    score[0] =   97
    score[1] =   88
    score[2] =   77
    score[3] =   63
    score[4] =   53

               378 is the sum of all the scores
              75.6 is the class average

*/

#include <stdio.h>
#define CLASS_SIZE 5

int main(void) {
    int i, j, score[CLASS_SIZE], sum = 0, tmp;

    printf("Input %d scores: ", CLASS_SIZE);

    for (i = 0; i < CLASS_SIZE; ++i) {
        scanf("%d", &score[i]);
        sum += score[i];
    }

    for (i = 0; i < CLASS_SIZE - 1; ++i) {  /* Bubble sort */
        for (j = CLASS_SIZE - 1; j > i; --j) {
            if (score[j - 1] < score[j]) {  /* Check the order */
                tmp = score[j - 1];
                score[j - 1] = score[j];
                score[j] = tmp;
            }
        }
    }

    printf("Ordered Scores:\n\n");

    for (i = 0; i < CLASS_SIZE; ++i) {
        printf("    score[%d] =%5d\n", i, score[i]);
    }

    printf(
        "\n%18d%s\n%18.1f%s\n\n",
        sum,
        " is the sum of all the scores",
        (double) sum / CLASS_SIZE,
        " is the class average"
    );

    return 0;
}
