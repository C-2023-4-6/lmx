#include<iostream>
using namespace std;
class cft {
private:
	double l, w, h;
public:
	void set() {
		cin >> l >> w >> h;
	}
	double cal() {
		return l * w * h;
	}
};
int main() {
	cft a[3];
	for (int i = 0; i <= 2; i++) {
		cout << "请输入第" << i + 1 << "个长方体的长宽高"<<endl;
		a[i].set();
	}
	for (int i = 0; i <= 2; i++) {
		cout << "第" << i + 1 << "个长方体的体积是";
		cout<<a[i].cal()<<endl;
	}
}