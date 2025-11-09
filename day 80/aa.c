//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record
#include <stdio.h>
int main() {
    FILE *file;
    char name[50];
    int rollNumber;
    float marks;
    int n, i;

    // Take number of student records to store
    printf("Enter number of student records to store: ");
    scanf("%d", &n);

    // Open the file in write mode
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take student records as input and write to the file
    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        scanf("%s %d %f", name, &rollNumber, &marks);
        fprintf(file, "%s %d %.2f\n", name, rollNumber, marks);
    }

    // Close the file after writing
    fclose(file);

    // Reopen the file in read mode to display the records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("-----------------\n");

    // Read and display each student record
    while (fscanf(file, "%s %d %f", name, &rollNumber, &marks) == 3) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", name, rollNumber, marks);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}