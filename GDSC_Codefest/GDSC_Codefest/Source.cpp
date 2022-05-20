#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int i = 1;
int maxCount = -1;
class Node {
public:
	Node* left;
	Node* right;
	int value;
	Node(int value, Node* left = NULL, Node* right = NULL) {
		this->value = value;
		this->left = left;
		this->right = right;
	}
};

void function(Node* root) {
	if (i < maxCount) {
		function(root->left);
		function(root->right);
		root->value = i++;
	}
	else {
		return;
	}
}

int main() {

	int h;
	cin >> h;
	string inp = "";
	getline(cin, inp);
	string s;
	stringstream inputStream(inp);
	vector<int> q;
	while (getline(inputStream,s,' ')) {
		int i = stoi(s);
		q.push_back(i);
	}
	int top = pow(2, h - 1);
	maxCount = top;
	Node* root = new Node(top);
	function(root);

	return 0;
}