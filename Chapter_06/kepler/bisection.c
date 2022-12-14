#include "kepler.h"

dbl bisection(dbl f(dbl x), dbl a, dbl b) {
    dbl m = (a + b) / 2.0; /* midpoint */

    ++cnt;

    if (f(m) == 0.0 || b - a < eps) {
        return m;
    } else if (f(a) * f(m) < 0.0) {
        return bisection(f, a, m);
    } else {
        return bisection(f, m, b);
    }
}
