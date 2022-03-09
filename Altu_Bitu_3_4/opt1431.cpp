#include "iostream"
#include "algorithm"
#include "string"
#include "vector"

using namespace std;

#define N_MAX 1000 + 1;
#define STR_MAX 50 + 1;

int sum(string s){
	//�ø����ȣ�� ���� ���ϴ� �Լ�
	int result = 0;
	int i;
	for(i=0; i<s.length(); i++)
		if((s[i]-'0') >= 1 && (s[i]-'0') <= 9)
			result += (s[i]-'0');

	return result;
}

bool cmp(string a, string b){
	//����1
	if(a.length() != b.length())
		return a.length() < b.length();
	else{
		int aSum = sum(a);
		int bSum = sum(b);

		if(aSum != bSum)
			return aSum < bSum;
		else
			return a<b;
	}
}

int main(void){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int i, N;
	cin >> N;

	vector<string> v(N);
	for (i=0; i<N; i++)
		cin >> v[i];

	sort(v.begin(), v.end(), cmp);
	for(i=0; i<N; i++)
		cout << v[i] <<"\n";


	return 0;
}


/*�ټ��̴� ��Ÿ�� ���� ������ �ִ�. �׸��� ������ ��Ÿ�� ��� �ٸ� �ø��� ��ȣ�� ������ �ִ�. 
�ټ��̴� ��Ÿ�� ���� ã�Ƽ� ���� ����鿡�� �������ֱ� ���ؼ� ��Ÿ�� �ø��� ��ȣ ������� �����ϰ��� �Ѵ�.

��� �ø��� ��ȣ�� ���ĺ� �빮�� (A-Z)�� ���� (0-9)�� �̷���� �ִ�.

�ø����ȣ A�� �ø����ȣ B�� �տ� ���� ���� ������ ����.

A�� B�� ���̰� �ٸ���, ª�� ���� ���� �´�.
���� ���� ���̰� ���ٸ�, A�� ��� �ڸ����� �հ� B�� ��� �ڸ����� ���� ���ؼ� ���� ���� ������ ���� 
�����´�. (������ �͸� ���Ѵ�)
���� 1,2�� �� �������ε� ���� �� ������, ���������� ���Ѵ�. ���ڰ� ���ĺ����� ���������� �۴�.
�ø����� �־����� ��, �����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
// Created by yoona on 2022-03-09.
//

