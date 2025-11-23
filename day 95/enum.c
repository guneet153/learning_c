//Return a structure containing top student's details from a function.

#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
struct Student getTopStudent(struct Student students[], int count) {
    int i, top_index = 0;

    for (i = 1; i < count; i++) {
        if (students[i].marks > students[top_index].marks) {
            top_index = i;
        }
    }

    return students[top_index];
}
int main() {
    struct Student students[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        getchar(); 
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    
    struct Student top_student = getTopStudent(students, 5);

    
    printf("\nTop Student Details:\n");
    printf("Name: %s", top_student.name); 
    printf("Roll Number: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);

    return 0;
}
