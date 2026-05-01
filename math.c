#include <stdio.h>

int main() {
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';
    printf("Number of items : %d\n",items);
    printf("The cost of each item is : %f\n",cost_per_item);
    printf("The total cost is : %2.f %c\n",total_cost, currency);

        return 0;
}
