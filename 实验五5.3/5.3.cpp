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
		cout << "�������" << i + 1 << "��������ĳ����"<<endl;
		a[i].set();
	}
	for (int i = 0; i <= 2; i++) {
		cout << "��" << i + 1 << "��������������";
		cout<<a[i].cal()<<endl;
	}
}