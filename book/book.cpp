#include <iostream>
using namespace std;

void First()
{
	int n;
	cin >> n; // 높이를 입력 하는 것.

	for (int i = 0; i <= n; i++) // i의 값을 0 으로 초기화 시키고, i 의 값이 내가 입력한 n의 값보다 작거나 같을 때, i의 값이 + 된다.
	{
		for (int k = 0; k <= i; k++) // 위와 동일. 그러나, 조건 부에, "*" 를 출력하는 i의 값을 대입함으로서 가로로 출력되는 *  의 값을 n의 높이에 맞춰 개수를 줄이거나 늘린다.
			cout << "*"; // k가 출력 됨으로서 가로로 출력되는 "*" 값 지정.

		cout << "*" << endl;
	}
}
void Second()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) // n = 5라 가정 했을 떄, i 의 값은 0이기 때문에, i < 5 가 됨으로 조건이 달성. = 높이를 결정.
	{							// k의 값이 0이고, k의 값이 5 - i의 값. 으로 조건이 달성하여 *의 값을 더하여  = 높이 마다 들어가는 *의 개수 결정
		for (int k = 0; k < n - i; k++)
			cout << "*";

		cout << "*" << endl;
	}
}
int main()
{
	Second();
}
