#include <stdio.h>
#include <math.h>

int main() {

	double total, oilmoney, oilkm, park, toll, fuelCost,cost;
	printf("�п�J�@��Ѫ��`���{��:");
	scanf("%lf", &total);

	printf("�п�J�C�[��/���ɪ��T�o����:");
	scanf("%lf", &oilmoney);

	printf("�п�J�C�[��/���ɪ�������p���{:");
	scanf("%lf", &oilkm);

	printf("�п�J�@�Ѫ������O:");
	scanf("%lf", &park);

	printf("�п�J�@�Ѫ��q��O(�L���O):");
	scanf("%lf", &toll);
	fuelCost = (total / oilkm) * oilmoney;
	cost = toll + park + fuelCost;
	printf("�@�Ѫ��U�Ʀ�����: %.2f\n",fuelCost);
	printf("�@�Ѫ��`�}��������: %.2f\n",cost);

	return 0;
}