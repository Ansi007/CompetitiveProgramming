#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int i = 1;
int Count = 0;
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

	if(root->left)  function(root->left);	
	if(root->right) function(root->right);
	root->value = i++;
}

Node* push(Node* root) {
	if (!root) {
		root = new Node(0);
		return root;
	}
	else if (!root->left) {
		return push(root->left);
	}
	else if (!root->right) {
		return push(root->right);
	}
	return NULL;
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
	Node* root = NULL;
	root = push(root);
	root = push(root);
	root = push(root);
	root = push(root);
	root = push(root);
	root = push(root);
	root = push(root);
	function(root);

	return 0;
}