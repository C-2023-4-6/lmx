#include<iostream>
using namespace std;
class stu {
public:
	int id, score;
};
void max(stu* p) {
	stu a[5];
	for (int i = 0; i <= 4; i++) {
		cout << "�������" << i + 1 << "��ѧ����ѧ�źͳɼ�";
		cin >> a[i].id >> a[i].score;
		if (a[i].score >= p->score) {
			*p = a[i];
		}
	}
	cout << "��߷�ѧ����ѧ����" << p->id;
}
int main() {
	stu a[5] ;
	a[0].score = 0;
	stu* p = &a[0];
	max(p);
}