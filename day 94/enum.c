//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void printStudent(struct Student student) {
    printf("Student Details:\n");
    printf("Name: %s", student.name); // fgets includes newline
    printf("Roll Number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);
}
int main() {
    struct Student student;

    
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter student's roll number: ");
    scanf("%d", &student.roll_no);

    printf("Enter student's marks: ");
    scanf("%f", &student.marks);

    
    printStudent(student);

    return 0;
}