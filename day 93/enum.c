//find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student students[5];
    int i, top_index = 0;

    
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

    
    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[top_index].marks) {
            top_index = i;
        }
    }

    
    printf("\nTop Student Details:\n");
    printf("Name: %s", students[top_index].name); 
    printf("Roll Number: %d\n", students[top_index].roll_no);
    printf("Marks: %.2f\n", students[top_index].marks);

    return 0;
}