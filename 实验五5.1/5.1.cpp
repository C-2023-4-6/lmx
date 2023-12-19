#include<iostream>
using namespace std;
class Time{
private:              
	int hour;
	int minute;
	int sec;
public:
	void set(int h, int m, int s) {
		cin >> h >> m >> s;
		hour = h;
		minute = m;
		sec = s;
	}
	void get() {
		cout<<  hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1; 
	int h=0, m=0, s=0;
	t1.set(h, m, s);
	t1.get();
	return 0;
}
