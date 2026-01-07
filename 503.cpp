#include<iostream>
using namespace std;

class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void inputData() {
		cin >> length >> width >> height;
	}
	double calculateVolume() {
		return length * width * height;
	}
	void outputVolume() {
		cout << "体积为:" << calculateVolume() << endl;
	}
};

int main() {
	Cuboid cubs[3];
	cout << "请输入3个长方柱的长、宽、高（空格分隔）：" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "第" << i + 1 << "个长方柱" << endl;
		cubs[i].inputData();
	}
	cout << "\n3个长方柱的体积分别为：" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "第" << i + 1 << "个长方柱 ";
		cubs[i].outputVolume();
	}
	return 0;
}