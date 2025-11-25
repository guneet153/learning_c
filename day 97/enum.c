//Store employee data in a binary file using fwrite() and read using fread()
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
void writeEmployeeToFile(struct Employee emp, const char *filename) {
    FILE *file = fopen(filename, "ab"); 
    if (file != NULL) {
        fwrite(&emp, sizeof(struct Employee), 1, file);
        fclose(file);
    } else {
        printf("Error opening file for writing.\n");
    }
}
void readEmployeesFromFile(const char *filename) {
    FILE *file = fopen(filename, "rb"); 
    struct Employee emp;

    if (file != NULL) {
        printf("\nEmployee Details from file:\n");
        while (fread(&emp, sizeof(struct Employee), 1, file)) {
            printf("Name: %s", emp.name);
            printf("ID: %d\n", emp.id);
            printf("Salary: %.2f\n\n", emp.salary);
        }
        fclose(file);
    } else {
        printf("Error opening file for reading.\n");
    }
}
int main() {
    struct Employee emp;
    const char *filename = "employees.dat";

    printf("Enter Employee Name: ");
    getchar(); 
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    writeEmployeeToFile(emp, filename);
    readEmployeesFromFile(filename);

    return 0;
}
