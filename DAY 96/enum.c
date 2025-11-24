//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};
void printEmployeeDetails(struct Employee emp) {
    printf("Employee Name: %s", emp.name);
    printf("Employee ID: %d\n", emp.id);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
}
int main() {
    struct Employee emp;

    printf("Enter Employee Name: ");
    getchar(); 
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

    printf("\nEmployee Details:\n");
    printEmployeeDetails(emp);

    return 0;
}