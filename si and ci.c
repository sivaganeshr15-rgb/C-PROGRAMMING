#include <stdio.h>
#include <math.h> // for pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Input values
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Display results
    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f", compoundInterest);

    return 0;
}
