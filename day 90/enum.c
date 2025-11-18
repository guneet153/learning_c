//Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum
Gender
{
    MALE,
    FEMALE,
    OTHER
};
struct Person
{
    char name[50];
    enum Gender
    gender
};

int main()
{
    struct Person person1;
    struct Person person2;

    
    snprintf(person1.name, sizeof(person1.name), "Alice");
    person1.gender = FEMALE;

    snprintf(person2.name, sizeof(person2.name), "Bob");
    person1.gender = MALE;

    
    printf("Name: %s, Gender: ", person1.name);
    switch (person1.gender)
    {
    case MALE:
        printf("MALE\n");
        break;
    case FEMALE:
        printf("FEMALE\n");
        break;
    case OTHER:
        printf("OTHER\n");
        break;
    }
    
    printf("Name: %s, Gender: ", person2.name);
    switch (person2.gender)
    {
    case MALE:
        printf("MALE\n");
        break;
    case FEMALE:
        printf("FEMALE\n");
        break;
    case OTHER:
        printf("OTHER\n");
        break;
    }
    return 0;
}
