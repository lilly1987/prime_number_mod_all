#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>

using namespace std;

// �Էµ� ���ڱ��� �Ҽ� ���ϱ�
// ��ü ���� �ϴ� ��������� goto�� ��¥ ��������
int main()
{
	// �Է°�
	unsigned int n,m=0 ,c=0,p=2 ,q=1,s=0;
	cout << "�O�� �Ҽ���:";
	cin >> n;

	// ���� n�� 1���� �۰ų� ������ �Լ� ����
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

