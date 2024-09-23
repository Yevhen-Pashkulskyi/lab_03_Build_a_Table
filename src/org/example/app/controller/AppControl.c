#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int run() {
    float func, min_range, max_range, step;
    float a_value, b_value, x_value;

    printf("Input function value \'a\': ");
    do {
        scanf("%f", &a_value);
        if (a_value <= 0) {
            printf("\'a\' should be greater than \'0\': ");
        } else break;
    } while (true);

    printf("Input function value \'b\': ");
    do {
        scanf("%f", &b_value);
        if (b_value == a_value * -1) {
            printf("\'b\' should not be equal to the reciprocal of \'a\': ");
        } else break;
    } while (true);

    printf("Input the \'min\' value and \'max\' value of the range: ");
    do {
        scanf("%f %f", &min_range, &max_range);
        if (min_range >= max_range) {
            printf("\'min\' value cannot be equal to or more \'max\' value");
        } else break;
    } while (true);

    printf("Input step in range: ");
    do {
        scanf("%f", &step);
        if (step <= 0 || step >= max_range - min_range) {
            printf("The \'step\' cannot be greater than the range and is equal to 0");
        } else break;
    } while (true);

    x_value = min_range;
    printf("\tX\t\tY\n");
    while (x_value <= max_range) {
        printf("%f\t", x_value);
        func = sin(fabs(x_value) / (2 * sqrt(a_value))) +
               pow(cos(pow(x_value, 3) / (a_value + b_value)), 2);
        printf("%f\n", func);
        x_value = x_value + step;
    }
    return 0;
}
