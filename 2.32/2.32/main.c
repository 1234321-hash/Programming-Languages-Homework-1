#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int height_cm, weight_kg;
    double height_m, bmi;
    bmi = 0;

    printf("��J����(cm) �M �魫(kg): ");
    scanf("%d %d", &height_cm, &weight_kg);


    height_m = height_cm / 100.0;


    bmi = weight_kg / (height_m * height_m);


    printf("�z�� BMI �O: %.2f\n", bmi);


    if (bmi < 18.5) {
        printf("�z���魫�L��\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("�z���魫���`\n");
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        printf("�z�W���F\n");
    }
    else {
        printf("�z�ݩ�έD�d��\n");
    }

    return 0;
}