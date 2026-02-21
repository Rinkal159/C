#include <stdio.h>

// will create a new data type called "Student", does not need struct keyword while declaring varible from that struct.
typedef struct
{
    int rollNo;
    char name[50];
    float marks;
} Student;

// normal struct, Planet is not a data type here, we need to write struct before declaring varible from that struct.
struct Planet
{
    char name[50];
};

int main(void)
{
    // single struct
    Student s1 = {1, "Rinkal", 94.53};
    printf("Roll no: %d, Name: %s, Percentage: %.2f\n", s1.rollNo, s1.name, s1.marks);

    // array of struct
    Student s2[] = {
        {2, "Priya", 90.90},
        {3, "Maya", 30.45},
        {4, "Alok", 98.45}};

    for (int i = 0; i < sizeof(s2) / sizeof(s2[0]); i++)
    {
        printf("Roll no: %d, Name: %s, Percentage: %.2f\n", s2[i].rollNo, s2[i].name, s2[i].marks);
    }

    printf("\n");

    struct Planet p1[3] = {
        {"Earth"},
        {"Mars"},
        {"Mercury"},
    };

    for (int i = 0; i < sizeof(p1) / sizeof(p1[0]); i++)
    {
        printf("Name of planet %d: %s\n", i + 1, p1[i].name);
    }
}