#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 1000

struct student {
    int id;          // student ID
    char name[20];   // first name of student
};

// find_name(name, arr, n, ids) searches for student(s) with given name in arr;
//   returns the number of students found and the array ids is updated to
//   contain the id numbers of those students
// requires: arr contains n students
//           students in arr have unique ids
//           ids points to enough memory to hold the found student ids
int find_name(char *name, struct student arr[], int n, int ids[]) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (strcmp(name, arr[i].name) == 0) {
            ids[count++] = arr[i].id;
            //count++;
        }
    }
    return count;
}

int main(void) {
    struct student students[MAX_STUDENTS];
    char command[20];
    int id, num_students = 0;

    while (scanf("%s", command) == 1) {
        if (strcmp(command, "add") == 0) {
            scanf("%d %s", &id, students[num_students].name);
            students[num_students].id = id;
            num_students++;
        } else if (strcmp(command, "find") == 0) {
            char name[20];
            scanf("%s", name);
            int ids[MAX_STUDENTS];
            int found = find_name(name, students, num_students, ids);
            if (found == 0) {
                printf("Not found\n");
            } else {
                for (int i = 0; i < found; ++i) {
                    printf("%d\n", ids[i]);
                }
            }
            break;
        }
    }

    return 0;
}
