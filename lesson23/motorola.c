#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int* p1 = (int*)(&a + 1); 
    int* p2 = (int*)((int)a + 1);
    int* p3 = (int*)(a + 1);

    printf("%d   %d   %0X    %d\n", p1[-1], p2[0], p2[0], p3[1]);

    
    DIV_LINE;
    printf("%0X\n", a);
    printf("%0X\n", (int)a);

    printf("(int)a + 1 = %0X\n", *((int)a + 1));

    printf("a + 1 = %0X\n", a + 1);
    
    return 0;
}
