/*

*/
#include <iostream>

class Car {
private:
	int gasoloineGauge;
public:
	Car(int ag) : gasoloineGauge(ag) {}				// 콜론초기화
	int getGasGauge() { return gasoloineGauge; }
};

class HybridCar : public Car {
private:
	int electricGauge;
public:
	HybridCar(int ag, int ae) : Car(ag), electricGauge(ae) {}
	int getElecGauge() { return electricGauge; }
};

class HybirdWaterCar : public HybridCar {
	int waterGauge;
public:
	HybirdWaterCar(int ag, int ae, int aw) : HybridCar(ag,ae), waterGauge(aw) {}
	void showGauge() {
		std::cout << "잔여 가솔린: " << getGasGauge() << std::endl;
		std::cout << "잔여 전기량: " << getElecGauge() << std::endl;
		std::cout << "잔여 워터량: " << waterGauge << std::endl;


	}
};

int main()
{
	HybirdWaterCar hwc(10, 20, 30);
	hwc.showGauge();

	return 0;
}