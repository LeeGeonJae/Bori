#include <iostream>

using namespace std;

int main()
{
	int Hight = 0;
	int Base = 0;
	float Area = 0.0f;

	cout << "�ﰢ���� ���̸� �Է����ּ���." << endl;
	cin >> Hight;
	cout << "�ﰢ���� �غ��� �Է����ּ���." << endl;
	cin >> Base;

	// 4 + (4 / 4);
	Area = (static_cast<float>(Base) * static_cast<float>(Hight))
		/ 2.0f;

	cout << "�ﰢ���� ���̴� " << Area << " �Դϴ�." << endl;

	cout << "git ����" << endl;

	return 0;
}