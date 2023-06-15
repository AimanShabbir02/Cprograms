#include <iostream>
using namespace std;
int main()
{
    int a(0);
    printf("Enter number : ");
    scanf ("%d",&a);
    if (a > 1 && a <= 19 && (a % 2 == 1))
    {
        printf("\n");
        for (int x(a); x >= 1; x--)
        {
            for (int y(x); y > 1; y -= 2)
            {
                printf(" ");
            }
            for (int z(a); z >= x; z--)
            {
                if (x % 2 == 1)
                {
                    printf("*");
                }
            }
            printf("\n");
        }
        printf("\n");
        for (int x(a); x > 1; x--)
        {
            for (int y(a); y >= x; y -= 2)
            {
                printf(" ");
            }
            for (int z(x - 1); z > 1; z--)
            {
                if (x % 2 == 1)
                {
                    printf("*");
                }
            }
            printf("\n");
        }
     
    else
    {
        printf(" Wrong Value \n");
            printf(" enter in the range 1 to 19 \n");
    }
}
}
