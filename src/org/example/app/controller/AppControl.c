//Pashkulskyi Yevhen AS-246
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int run() {
    float func, min_range, max_range, step;
    float a_val, b_val, x_val;

    printf("Input value \'a\': \n"); // вивід повідомлення для користувача
    //цикл в якому виконується хоча б один раз код в тілі
    do {
        scanf("%f", &a_val); //введення користувачем значення
        if (a_val <= 0) {
            //умова якщо знаяення а меньше 0 то виводить повідомлення
            printf("\'a\' should be greater than \'0\': \n"); //повідомлення при некоректному вводі значення
        } else break; //якщо все коректно то виходимо з циклу
    } while (true); //умова циклу завжди істина поки не виконається умова

    printf("Input value \'b\': \n");
    do {
        scanf("%f", &b_val);
        if (b_val == a_val * -1) {
            printf("\'b\' should not be equal to the reciprocal of \'a\': \n");
        } else break;
    } while (true);

    printf("Input the \'min\' value and \'max\' value of the range: \n");
    do {
        scanf("%f %f", &min_range, &max_range);
        if (min_range >= max_range) {
            printf("\'min\' value cannot be equal to or more \'max\' value: \n");
        } else break;
    } while (true);

    printf("Input step in range: \n");
    do {
        scanf("%f", &step);
        if (step <= 0 || step >= max_range - min_range) {
            printf("The \'step\' cannot be greater than the range and is equal to 0: \n");
        } else break;
    } while (true);

    x_val = min_range;
    printf("   X\t  Y\n");
    // цикл який виконує за умови наприклад як в цьому поки x_val<=max_range
    while (x_val <= max_range) {
        printf("%.4f\t", x_val);
        //розрахунок завдання з витримкою порядка виконання операцій відповідно до їх пріоритету
        func = sin(fabs(x_val) / (2 * sqrt(a_val))) +
               pow(cos(pow(x_val, 3) / (a_val + b_val)), 2);
        printf("%.4f\n", func);
        x_val = x_val + step;
    }
    return 0;
}
