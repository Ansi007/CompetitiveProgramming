#include<iostream>
#include<stdint.h>
#include<cstdint>
#include<vector>
#include<algorithm>
using namespace std;

//Shortening Codes
//typedef long long ll;
//typedef vector<int> vi;
//typedef vector<string> vs;
//
//#define F first
//#define S second
//#define PB push_back
//#define MP make_pair
//
//#define REP(i,a,b) for (int i = a; i <= b; i++)
//
//
//
//int fictorial(int i);
//int fibonacci(int i);
//
//struct MyStruct
//{
//	string First, Second;
//};
//typedef MyStruct MS;


struct MyStruct {
	int x;
	bool operator < (const MyStruct& m) {
		return x < m.x;
	}
};

struct MyStruct2 {
	int x, y;
	bool operator < (const MyStruct2& m) {
		if (x != m.x) return x < m.x;
		else return y < m.y;
	}
};

bool comp(string a, string b) {
	if (a.size() != b.size()) return a.size() < b.size();
	return a < b;
} //Custom Function of sorting

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
	
	//long float a = 0.0000000000000001;
	//long float b = 0.0000000000000001;
	//if (abs(a - b) < 1e-9) {
	//	cout << "Equal" << endl;
	//}


	//Macros

	//vi myVector;
	//MS ms;
	//myVector.PB(ms.First);
	//myVector.PB(ms.Second);

	//REP(i, 0, 10) {
	//	cout << i << endl;
	//}

	// Mathematics

	// Arithmetic Progression
	// Geometric Progression
	// Harmonic Sequence

	//cout << fictorial(3) << endl;

	vector<int> myV = {5,10,3,2,1,5,6,9,11};
	int arr[] = { 5,10,3,2,1,5,6,9,11 };
	string s = "MMONKEY";
	sort(myV.begin(), myV.end());
	for (int i : myV) {
		cout << i << " ";
	}
	cout << endl;
	sort(arr, arr + 9);
	for (int i : arr) {
		cout << i << " ";
	}
	cout << endl;
	sort(s.begin(),s.end());
	for (char i : s) {
		cout << i;
	}
	cout << endl;
	vector<pair<int, int>> pairedVector;
	pair<int, int> p;
	p.first = 3;
	p.second = 10;
	pairedVector.push_back({ 1,2 });
	pairedVector.push_back({ 10,2 });
	pairedVector.push_back({ 3,3 });
	pairedVector.push_back({ 4,2 });
	pairedVector.push_back({ 11,2 });
	pairedVector.push_back(p);
	sort(pairedVector.begin(), pairedVector.end());
	for (pair<int, int> x : pairedVector) {
		cout << "{" << x.first << "," << x.second << "}" << endl;
	}

	//vector<tuple<int, int,int>> tupleVector;
	//tupleVector.push_back({ 2,1,4 });
	//tupleVector.push_back({ 10,2 });
	//tupleVector.push_back({ 3,3 });
	//tupleVector.push_back({ 4,2 });
	//tupleVector.push_back({ 11,2 });
	//tupleVector.push_back(p);
	//sort(tupleVector.begin(), tupleVector.end());
	//for (pair<int, int> x : tupleVector) {
	//	cout << "{" << x.first << "," << x.second << "}" << endl;
	//}

	vector<MyStruct> mS;
	MyStruct myStruct;
	myStruct.x = 10;
	mS.push_back(myStruct);	myStruct.x = 11;
	mS.push_back(myStruct);	myStruct.x = 1;
	mS.push_back(myStruct);	myStruct.x = 30;
	mS.push_back(myStruct);	myStruct.x = 0;
	mS.push_back(myStruct);	myStruct.x = 20;
	mS.push_back(myStruct);	myStruct.x = 110;
	mS.push_back(myStruct);
	sort(mS.begin(), mS.end());
	for (auto i : mS) {
		cout << i.x << " ";
	}
	cout << endl;

	int n = 9;
	int a = 0, b = n - 1;
	int x = 3;
	while (a <= b) {
		int k = (a + b) / 2;
		if (arr[k] == x) {
			cout << "FOUND: " << x << endl;
			break;
		}
		if (arr[k] > x) b = k - 1;
		else a = k + 1;
	}
	return 0;
}


//int fictorial(int i) {
//	//takes i return i!
//	//but recursively
//	if (i <= 0) {
//		return 1;
//	}
//	else {
//		return i * fictorial(i - 1);
//	}
//}
//
//int fibonacci(int i) {
//
//	if (i <= 0) {
//		return 0;
//	}
//	else if (i == 1) {
//		return 0;
//	}
//	else {
//		return fibonacci(i - 1) + fibonacci(i - 2);
//	}
//}