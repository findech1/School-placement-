#include <stdio.h>
#include <string.h>

// Function to validate age
int isValidAge(int age) {
    return age >= 12 && age <= 18;
}

int main() {
    int score;
    char gender;
    int age;
    char specialNeeds[4]; // Yes or No

    // Input the candidate's details
    printf("Enter candidate's score: ");
    scanf("%d", &score);

    printf("Enter candidate's gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter candidate's age: ");
    scanf("%d", &age);

    printf("Does the candidate have special needs? (Yes/No): ");
    scanf("%s", specialNeeds);

    // Validate age
    if (!isValidAge(age)) {
        printf("Age not within the acceptable range (12-18). Process terminated.\n");
        return 0;
    }

    // Check for special needs placement
    if (strcmp(specialNeeds, "Yes") == 0 && score >= 250) {
        if (gender == 'M') {
            printf("Placement: Boys' Special School\n");
        } else if (gender == 'F') {
            printf("Placement: Girls' Special School\n");
        } else {
            printf("Invalid gender input.\n");
        }
        return 0;
    }

    // Determine school placement based on score
    if (score >= 400 && score <= 500) {
        printf("Placement: National School\n");
    } else if (score >= 350 && score <= 399) {
        printf("Placement: Extra County School\n");
    } else if (score >= 250 && score <= 349) {
        printf("Placement: County School\n");
    } else {
        printf("Candidate does not qualify for secondary school placement.\n");
        printf("Options: Vocational training course or retake the national examination.\n");
    }

    return 0;
}
