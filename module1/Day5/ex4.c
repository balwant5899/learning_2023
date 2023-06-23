#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    char rollNo[20];
    int marks;
};

void readData(struct student* s1) {
    printf("Enter the student's name: ");
    scanf("%s", s1->name);
    printf("Enter the student's roll number: ");
    scanf("%s", s1->rollNo);
    printf("Enter the student's marks: ");
    scanf("%d", &(s1->marks));
}

void writeData(struct student s1) {
    printf("\nStudent details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %s\n", s1.rollNo);
    printf("Marks: %d\n", s1.marks);
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student* students = (struct student*)malloc(n * sizeof(struct student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        readData(&students[i]);
    }

    printf("\nStudent data:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        writeData(students[i]);
    }

    free(students);

    return 0;
}
