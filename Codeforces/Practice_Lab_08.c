#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_STUDENTS 1000

struct student {
    int id;          // student ID
    char name[20];   // first name of student
};

bool find_id(int id, struct student arr[], int n, char *found_name) {
    for (int i = 0; i < n; i++) {
        if (arr[i].id == id) {
            strcpy(found_name, arr[i].name);
            return true;
        }
    }
    return false;
}

int main() {
    struct student students[MAX_STUDENTS];
    char command[20];
    int id, num_students = 0;

    while (scanf("%s", command) == 1) {
        if (strcmp(command, "add") == 0) {
            scanf("%d %s", &id, students[num_students].name);
            students[num_students].id = id;
            num_students++;
        } else if (strcmp(command, "find") == 0) {
            int search_id;
            scanf("%d", &search_id);
            char found_name[20];
            if (find_id(search_id, students, num_students, found_name)) {
                printf("%s\n", found_name);
            } else {
                printf("Not found\n");
            }
            break;
        }
    }

    return 0;
}
