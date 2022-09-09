//this code is for finding a unique element in array
//using one loop

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr;
    int b = 0; 
    printf("give how many no you want give:");
    scanf("%d",&n);
    ptr=(int *)malloc(n * sizeof(int));
    printf("give numbers");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++)        //single loop for unique no searching using xor operator
    {
        b = b^(*(ptr+i));           //but i think if a no repeats itself odd times then it will not work
    }                           //as i learned this code only for no who have other no repeated itself only 2 times
    printf("unique no is:%d",b);
    free(ptr);
    return 0;

}