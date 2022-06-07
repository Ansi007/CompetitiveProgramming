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