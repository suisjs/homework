#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000 

int main(void)
{
    int sumFrequency[13] = { 0 };
    int die1, die2, sum;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < ROLLS; i++)
    {
        die1 = rand() % 6 + 1; 
        die2 = rand() % 6 + 1; 
        sum = die1 + die2;     
        sumFrequency[sum]++;   
    }

    printf("Sum\tFrequency\tProbability\n");
    for (int i = 2; i <= 12; i++)
    {
        printf("%d\t%d\t\t%.2f%%\n", i, sumFrequency[i], (sumFrequency[i] / (float)ROLLS) * 100);
    }

    return 0;
}