#include <stdio.h>
#include <string.h>
////4. You are designing a classroom grade analyzer
//There are 5 students and 4 subjects.
//Your program should
//a. Input grades into a 2D array
//b. Display the grades in a neatly formatted table
//c. Calculate the average grade per student.
//d. Count how many students scored above 80 in Math (subject
//1)
int main(){
	int students = 5;
	int subjects = 4;
	float grades[students][subjects];
	
	int i,j;
	for(i = 0 ; i < students ; i++){
		printf("Enter Grades(marks) of student %d of each subject",i);
		for(j = 0 ; i < subjects ; j++){
			scanf("%f",&grades[i][j]);
		}
	}
	for(i = 0 ; i < students ; i++){
		for(j = 0 ; i < subjects ; j++){
			printf("%0.2f \t",grades[i][j]);
		}
		printf("\n");
	}
	float average = 0;
	for(i = 0 ; i < students ; i++){
		for(j = 0 ; i < subjects ; j++){
			average += grades[i][j];
		}
		printf("\n");
		average /= 4;
	}
	
}
