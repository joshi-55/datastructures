#include <stdio.h>
struct student 
{
	int roll;
	char name[20];
	float marks;
	char grade;
};
int main()
{
	struct student s1 = {101,"seetha",89.5,'a'};
	printf("\n student roll number = %d \n student name = %s \n student marks = %f\n student grade = %c",s1.roll,s1.name,s1.marks,s1.grade);
	return 0;
	}

