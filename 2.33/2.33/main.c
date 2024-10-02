#include <stdio.h>
#include <math.h>

int main() {

	double total, oilmoney, oilkm, park, toll, fuelCost,cost;
	printf("請輸入一整天的總里程數:");
	scanf("%lf", &total);

	printf("請輸入每加侖/公升的汽油價格:");
	scanf("%lf", &oilmoney);

	printf("請輸入每加侖/公升的平均行駛里程:");
	scanf("%lf", &oilkm);

	printf("請輸入一天的停車費:");
	scanf("%lf", &park);

	printf("請輸入一天的通行費(過路費):");
	scanf("%lf", &toll);
	fuelCost = (total / oilkm) * oilmoney;
	cost = toll + park + fuelCost;
	printf("一天的燃料成本為: %.2f\n",fuelCost);
	printf("一天的總開車成本為: %.2f\n",cost);

	return 0;
}