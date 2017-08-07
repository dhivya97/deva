#include <stdio.h>
int main()
{
    int s;
    printf("Enter a character: ");
    scanf("%d",&s);

    if( (s>='a' && s<='z') || (s>='A' && s<='Z'))
        printf("%d is an alphabet.",c);
    else
        printf("%d is not an alphabet.",c);

    return 0;
}
