#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>

using namespace std;

// 입력된 숫자까지 소수 구하기
// 객체 지향 하는 사람들한테 goto는 진짜 웬수같음
int main()
{
	// 입력값
	unsigned int n,m=0 ,c=0,p=2 ,q=1,s=0;
	cout << "찿을 소수값:";
	cin >> n;

	// 만일 n이 1보다 작거나 같으면 함수 종료
	if (n <= 1) return 0;
	  
	do {
		q = 1;
		s = 0;
		
		do {
			q += 1;
			if (q < p) {
				m = p % q;
			}
			else {
				goto goto3;
			}

		} while (m != 0);
		
		s = 1;

	goto3:

		if (s == 0) {
			cout << p << ",";
			c += 1;
			if (c % 5 == 0)
			{
				cout << endl;
			}
		}
		p += 1;
	} while (p < n);

	cout << c << endl;;
	return 0;
}

