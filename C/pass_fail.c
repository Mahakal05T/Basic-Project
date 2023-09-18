#include <stdio.h>

int main() {
    float subject1, subject2, subject3;

    // Input marks for three subjects
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);

    // Calculate the total percentage
    float totalMarks = subject1 + subject2 + subject3;
    float percentage = (totalMarks / 300) * 100;

    // Check if the student has passed or failed
    if (percentage >= 40.0 && subject1 >= 33.0 && subject2 >= 33.0 && subject3 >= 33.0) {
        printf("Congratulations! You have passed with %.2f%%\n", percentage);
    } else {
        printf("Sorry, you have failed. Please try again.\n");
    }

    return 0;
}
