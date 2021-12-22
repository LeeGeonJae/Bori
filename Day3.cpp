#include <iostream>

using namespace std;

int main()
{
	int Hight = 0;
	int Base = 0;
	float Area = 0.0f;

	cout << "삼각형의 높이를 입력해주세요." << endl;
	cin >> Hight;
	cout << "삼각형의 밑변을 입력해주세요." << endl;
	cin >> Base;

	// 4 + (4 / 4);
	Area = (static_cast<float>(Base) * static_cast<float>(Hight))
		/ 2.0f;

	cout << "삼각형의 넓이는 " << Area << " 입니다." << endl;

	cout << "git 생성" << endl;

	return 0;
}