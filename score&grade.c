// O nline C compiler to run C program online
#include <stdio.h>

int main() {
    
    int score;        // to store mark
    char grade;       // to store grade
    
    //input score
    printf("enter your exam score here: ");
    scanf("%d", &score);
    
    // display of grades
    
    if (score>=90)
    grade= 'o';                // note here tht char is under 'qoute'
    
    else if (score>=80)
    grade= 'a';
    
    else if (score>=70)
    grade= 'b';
    
    else if (score>=60)
    grade= 'c';
    
    else
    grade= 'd';
    
    printf("your score=%d\n",score);
    printf("your grade=%c\n",grade);
    
    
    
    
    
    
    
    
    
    
    
    
}