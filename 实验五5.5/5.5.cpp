#include <iostream>
using namespace std;
class point { 
private:
	int x=60, y=80;
public:
	point(){

	}
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "�޸ĺ������Ϊ" << "(" << x << "," << y << ")";
	}
};
int main() {
	point a;
	int i, j;
	cout << "�����޸�ֵ";
	cin >> i >> j;
	a.setPoint(i,j);
	a.display();
	return 0;
}