#include<stdio.h> 

int main()
{
    int Number;
    printf("Enter The Size of Array : ");
    scanf("%d",&Number);
    int ArrayNumber[Number];
    int NewArray[Number];
    for(int i=0;i<Number;i++)
    {
        printf("Enter The [%d] Element : ",i+1);
        scanf("%d",&ArrayNumber[i]);
    }
    printf("\nArray Element is : \n");
    for(int i=0;i<Number;i++)
    {
        printf("%d \t",ArrayNumber[i]);
    }
    for(int i=0;i<Number;i++)
    {
        NewArray[i] = ArrayNumber[i];
    }
    printf("\nNew Array Element is : \n");
    for(int i=0;i<Number;i++)
    {
        printf("%d \t",NewArray[i]);
    }

     return 0;
}