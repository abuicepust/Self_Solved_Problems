#include<stdio.h>

int main()
{
    char arr[] = "He is numb";
    int i=0;
    while( arr[i] != '\0'){

            printf("%c",arr[i]);
            i++;
        }
    printf("\n%d",i);

    return 0;
}
