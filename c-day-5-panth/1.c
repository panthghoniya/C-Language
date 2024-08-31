// Develop a program that takes a score out of 100 as input from the user and calculates the
// corresponding grade using a ternary operator. Allocate grades from A to F for various ranges.
// Example:
// Input: Enter your score: 92
// Output: Your grade is A




// Extend the program to provide additional comments based on the grade using a switch-case
// statement. For example, if the grade is ‘A’, then print ‘Excellent work!’. If the grade is ‘B’, then
// print ‘Well done’. If the grade is ‘C’, then print ‘Good job’. If the grade is ‘D’, then print ‘You
// passed, but you could do better’. And if the grade is ‘F’, then print ‘Sorry, you failed’.




// Further, extend the program to check eligibility for the next level based on the grade using an
// if-else statement. Print ‘Congratulations! You are eligible for the next level’ if the grade is from
// ‘A’ to ‘D’. Print ‘Please try again next time’ if the grade is ‘F’.




#include<stdio.h>

int main(){

    int score;
    char grade;

    printf("Enter your marks => ");
    scanf("%d", &score);

    grade = (100 < score ) ? '*' :(0 > score ) ? '*' :(80 < score) ? 'A' :( 60 < score) ? 'B' :(40 < score) ? 'C' :(33 < score) ? 'D' : 'f';

    printf("Your grade is => %c\n", grade);




    switch(grade) {
        case 'A':
            printf("Excellent work ! \n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("You passed, but you could do better\n");
            break;
        case 'f':
            printf("Sorry, you failed\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }




    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("Congratulations! You are eligible for the next level\n");
    } else if (grade == 'f') {
        printf("Please try again next time\n");
    } else {
        printf("Invalid grade for heck\n");
    }
}