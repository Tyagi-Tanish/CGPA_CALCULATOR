#include <stdio.h>
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define RESET "\033[0m"


float getGradePoint(float marks) {
    if (marks >= 90) return 10;
    else if (marks >= 80) return 9;
    else if (marks >= 70) return 8;
    else if (marks >= 60) return 7;
    else if (marks >= 50) return 6;
    else if (marks >= 40) return 5;
    else return 0;  // Fail case
}

int main() {
    int n;
    
    printf(BLUE "--------------------------------------\n");
    printf("      CGPA & Percentage Calculator    \n");
    printf("--------------------------------------\n" RESET);
    
    printf(GREEN "Enter the number of subjects: " RESET);
    scanf("%d", &n);

    float marks[n], credits[n], totalCredits = 0, weightedSum = 0;

    for (int i = 0; i < n; i++) {
        printf(YELLOW "\nEnter marks for Subject %d (out of 100): " RESET, i + 1);
        scanf("%f", &marks[i]);

        printf(YELLOW "Enter credits for Subject %d: " RESET, i + 1);
        scanf("%f", &credits[i]);

        float gradePoint = getGradePoint(marks[i]);
        weightedSum += gradePoint * credits[i];
        totalCredits += credits[i];
    }

    float cgpa = weightedSum / totalCredits;
    float percentage = cgpa * 9.5;  
    printf(BLUE "\n--------------------------------------\n" RESET);
    printf(GREEN "Total Credits: %.2f\n" RESET, totalCredits);
    printf(GREEN "Your CGPA: %.2f\n" RESET, cgpa);
    
    if (percentage >= 75) {
        printf(GREEN "Equivalent Percentage: %.2f%% (Excellent!)\n" RESET, percentage);
    } else if (percentage >= 60) {
        printf(YELLOW "Equivalent Percentage: %.2f%% (Good Job!)\n" RESET, percentage);
    } else if (percentage >= 40) {
        printf(RED "Equivalent Percentage: %.2f%% (Needs Improvement)\n" RESET, percentage);
    } else {
        printf(RED "Equivalent Percentage: %.2f%% (Failed, Better Luck Next Time!)\n" RESET, percentage);
    }
    printf(BLUE "--------------------------------------\n" RESET);

    return 0;
}
