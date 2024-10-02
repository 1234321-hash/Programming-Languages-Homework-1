#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int rows = 9, cols = 9, radius = 5, size = 5;
    int height = 11; 

 
    for (int i = 0; i < height; i++) {
    
        if (i < rows) {
            for (int j = 0; j < cols; j++) {
                if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        else {
            for (int j = 0; j < cols; j++) {
                printf(" ");  
            }
        }

        printf("\t");  

 
        if (i <= 2 * radius) {
            int y = radius - i;
            for (int x = -radius; x <= radius; x++) {
                if (round(sqrt(x * x + y * y)) == radius) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        else {
            for (int x = -radius; x <= radius; x++) {
                printf(" "); 
            }
        }

        printf("\t");  

   
        if (i < 4) {
            for (int j = 3 - i; j > 0; j--) {
                printf(" ");
            }
            for (int j = 0; j < (2 * i + 1); j++) {
                printf("*");
            }
        }
        else if (i >= 4 && i < 10) {
            printf("   *");
        }
        else {
            printf("       ");  
        }

        printf("\t");

       
        if (i < size) {
            for (int j = size - i; j > 0; j--) {
                printf(" ");
            }
            for (int j = 0; j < (2 * i + 1); j++) {
                if (j == 0 || j == (2 * i)) {
                    printf("*");  
                }
                else {
                    printf(" ");  
                }
            }
        }
        else if (i < 2 * size - 1) {
            int new_i = i - size + 1;
            for (int j = 0; j <= new_i; j++) {
                printf(" ");
            }
            for (int j = 0; j < (2 * (size - new_i) - 1); j++) {
                if (j == 0 || j == (2 * (size - new_i) - 2)) {
                    printf("*");  
                }
                else {
                    printf(" ");  
                }
            }
        }
        else {
            for (int j = 0; j < 2 * size + 1; j++) {
                printf(" ");  
            }
        }

        printf("\n");  
    }

    return 0;
}
