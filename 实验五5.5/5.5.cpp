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
		cout << "修改后的坐标为" << "(" << x << "," << y << ")";
	}
};
int main() {
	point a;
	int i, j;
	cout << "输入修改值";
	cin >> i >> j;
	a.setPoint(i,j);
	a.display();
	return 0;
}