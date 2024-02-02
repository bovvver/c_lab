#include <stdio.h>

int main(int argc, char *argv[]) {
	int gradeCounters[11], i, grade;

	for (i = 1; i < 11; ++i)
		gradeCounters[i] = 0;	

	printf("Enter grades from 1 to 10;\n");

	while(1) {
		scanf("%i", &grade);

		if(grade == 999) break;

		if (grade < 1 || grade > 10)
			printf("Invalid response: %i\n", grade);
		else
			++gradeCounters[grade];
	}

	printf("\n\nGrade			Number of Responses\n");
	for (i = 1; i < 11; ++i)
		printf("%4i%14i\n", i, gradeCounters[i]);
	return 0;
}
