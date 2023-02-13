#include<stdio.h>
float simpleInterest(float principal, float time, int seniorCitizen) 
{ 
    float rate; 
    if (seniorCitizen == 1)rate = 12; 
    else
        rate = 10; 
    return (principal * time * rate)/100; 
} 
int main() 
{ 
    float principal, time; 
    int seniorCitizen; 
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the no of years: ");
    scanf("%f", &time);
    printf("Is customer senior citizen (y/n): ");
    scanf(" %c", &seniorCitizen);
    if((seniorCitizen == 'y') || (seniorCitizen == 'Y'))
        seniorCitizen = 1;
    else
        seniorCitizen = 0;
    float interest = simpleInterest(principal, time, seniorCitizen); 
    printf("Interest: %.2f", interest); 
    return 0; 
}
