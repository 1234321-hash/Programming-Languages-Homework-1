#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int height_cm, weight_kg;
    double height_m, bmi;
    bmi = 0;

    printf("輸入身高(cm) 和 體重(kg): ");
    scanf("%d %d", &height_cm, &weight_kg);


    height_m = height_cm / 100.0;


    bmi = weight_kg / (height_m * height_m);


    printf("您的 BMI 是: %.2f\n", bmi);


    if (bmi < 18.5) {
        printf("您的體重過輕\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("您的體重正常\n");
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        printf("您超重了\n");
    }
    else {
        printf("您屬於肥胖範圍\n");
    }

    return 0;
}