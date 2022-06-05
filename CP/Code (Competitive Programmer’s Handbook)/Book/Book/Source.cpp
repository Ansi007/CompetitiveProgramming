#include<iostream>
#include<stdint.h>
#include<cstdint>
#include<vector>

//Shortening Codes
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;



struct MyStruct
{
	string First, Second;
};
typedef MyStruct MS;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//These lines at the beginning of the code makes the I/O more efficient
	// /n is faster than endl

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	//To read the data from input.txt and write in output.txt

	//int x;
	//while (cin >> x) {
	//	cout << x << endl;
	//}

	//int a = 123456789;
	//long long b = long long(a) * long long(a);
	//cout << b << "\n"; // -1757895751
	
	//__int128_t c;

	//int n = 10;
	//int m = 10;
	//long long x = 1;
	//for (int i = 2; i <= n; i++) {
	//	x = (x * i) % m;
	//}
	//cout << x % m << "\n";

	//Comparing Float Numbers
	
	long float a = 0.0000000000000001;
	long float b = 0.0000000000000001;
	if (abs(a - b) < 1e-9) {
		cout << "Equal" << endl;
	}


	//Macros

	vi myVector;
	MS ms;
	myVector.PB(ms.First);
	myVector.PB(ms.Second);

	REP(i, 0, 10) {
		cout << i << endl;
	}
	return 0;
}
