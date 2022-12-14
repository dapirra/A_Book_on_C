/* Output:

No. of fct calls: 59
Approximate root:  2.499454528163501
  Function value:  0.000000000000000

*/

/* Use bisection to solve the Kepler equation. */

#include "kepler.h"

int cnt = 0;
const dbl eps = 1e-15;
const dbl e = 0.5;
const dbl m = 2.2;

int main(void) {
    dbl a = -100;
    dbl b = +100;
    dbl root;

    assert(kepler(a) * kepler(b) <= 0.0);
    root = bisection(kepler, a, b); /* recursive fct call */

    printf(
        "%s%d\n%s% .15f\n%s% .15f\n",
        "No. of fct calls: ", cnt,
        "Approximate root: ", root,
        "  Function value: ", kepler(root)
    );

    return 0;
}
