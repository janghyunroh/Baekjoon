#include <iostream>
#include <string>

using namespace std;


//문자열 매칭 알고리즘(find, npos 사용)
int find(int N) {
	int n = 665, cnt = 0;
	while (N > cnt) {
		n++;
		string s = to_string(n);
		if (s.find("666") != string::npos) 
			cnt++;
	}
	return n;
}

int main() {
	int N;
	cin >> N;
	printf("%d", find(N));
}