#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int modulus(int a) {
    return (a >= 0) ? a : -a; 
}

int main(int argc)
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    
    if ((x2 < x3) || (x4 < x1)) {
        printf("%d", 0);
        return 0;
    }
    
    if ((y2 > y3) || (y4 > y1)) {
        printf("%d", 0);
        return 0;
    }
    
    int intersection_width = min(x2, x4) - max(x1, x3);
    int intersection_height = min(y1, y3) - max(y2, y4);
    
    printf("%d", modulus(intersection_width * intersection_height));
    return 0;
}