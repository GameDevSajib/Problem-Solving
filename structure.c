#include <stdio.h>
#include <string.h>
#define ll long long
struct Student {
    int id;
    char name[50];
    float mark;
};

int main() {
    ll n;
    scanf("%d",&n);
    struct Student s[100005]; // array of 3 Student structures

    // Input data for the students using a for loop
    for (int i = 0; i < n; i++) {
        //printf("Enter the ID, name, and mark of student %d: ", i+1);
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].mark);
    }

    // Display the data for the students
    printf("ID\tName\tMark\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].mark);
    }
    return 0;
}
