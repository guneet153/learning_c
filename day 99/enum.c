//Use malloc() to allocate structure memory dynamically and print details
#include <stdio.h>
#include <stdlib.h>
struct Car {
    char model[50];
    int year;
    float price;
};
void printCarDetails(struct Car *car) {
    printf("Car Model: %s", car->model);
    printf("Manufacturing Year: %d\n", car->year);
    printf("Price: %.2f\n", car->price);
}
int main() {
    struct Car *car = (struct Car *)malloc(sizeof(struct Car));
    if (car == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter Car Model: ");
    getchar(); 
    fgets(car->model, sizeof(car->model), stdin);

    printf("Enter Manufacturing Year: ");
    scanf("%d", &car->year);

    printf("Enter Price: ");
    scanf("%f", &car->price);

    printf("\nCar Details:\n");
    printCarDetails(car);

    free(car); 

    return 0;
}