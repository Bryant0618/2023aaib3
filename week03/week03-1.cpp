///�]��range-based for�j�饲���bc++11 (2011����)�~���
///�p�G�ϥ�c++98 (1998�~��c++) �|�L�k���T�sĶ ����|�X��
///CodeBlocks 17.12 �� Setting-Compiler �ĲĤG�� -std=c++11
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c:s)
		{
			if (c != '2') cout << c;

		}
		return 0;
}
