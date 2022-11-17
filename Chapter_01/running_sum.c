/* Input: 1 2 3 4 5 | Output:

Count     Item      Min      Max         Sum     Average
-----     ----      ---      ---         ---     -------

    1      1.0      1.0      1.0       1.000       1.000
    2      2.0      1.0      2.0       3.000       1.500
    3      3.0      1.0      3.0       6.000       2.000
    4      4.0      1.0      4.0      10.000       2.500
    5      5.0      1.0      5.0      15.000       3.000

*/

/* Compute the minimum, maximum, sum, and average. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    double x, min, max, sum, avg;

    if (scanf("%lf", &x) != 1) {
        printf("Error: No data found.\n");
        exit(1);
    }

    min = max = sum = avg = x;

    printf(
        "%5s%9s%9s%9s%12s%12s\n%5s%9s%9s%9s%12s%12s\n\n",
        "Count", "Item", "Min", "Max", "Sum", "Average",
        "-----", "----", "---", "---", "---", "-------"
    );

    printf(
        "%5d%9.1f%9.1f%9.1f%12.3f%12.3f\n",
        1, x, min, max, sum, avg
    );

    for (i = 2; scanf("%lf", &x) == 1; ++i) {

        if (x < min) {
            min = x;
        } else if (x > max) {
            max = x;
        }

        sum += x;
        avg = sum / i;

        printf(
            "%5d%9.1f%9.1f%9.1f%12.3f%12.3f\n",
            i, x, min, max, sum, avg
        );

    }

    return 0;
}
