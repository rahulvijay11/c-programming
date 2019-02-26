#include<stdio.h>
int main()
{
    int year;
    char technique[1000],fertilizer[1000];
    printf("Welcome to Organic Farming\n");
    printf("Year\n");
    scanf("%d",&year);
    printf("%d\n",year);
    printf("Fertilizer\n");
    scanf("%s",fertilizer);
    printf("%s\n",fertilizer);
    printf("Technique\n");
    scanf("%s",technique);
    printf("%s\n",technique);
    printf("Organic Farming was introduced in the Year 1972.It relies on Compost Manure and many places emphasis Crop Rotation as a technique.\n");
    return 0;
    
}
