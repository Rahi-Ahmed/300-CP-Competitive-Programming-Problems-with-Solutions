

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int id;
	char name[20];
}student;

int main(void)
{
    student std1 = {110158294, "Rahi Ahmed"};
    printf("%s", std1.name);
}
