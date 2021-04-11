#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node{
	char data;
	int freq;

	Node *left, *right;
	Node (char d, int f, Node *l = nullptr, Node *r = nullptr){
		data = d;
		freq = f;

		left = l;
		right = r;
	}
};

class compare{
public:
	bool operator() (Node *a, Node *b){
		return (a->freq > b->freq);
	}
};

void print_codes (Node *node, string str){
	if (node != nullptr){
		if (node->data != '*')
			cout << node->data << ": " << str << endl;
		
		print_codes(node->left, str+'0');
		print_codes(node->right, str+'1');
	}
}

void cleanup(Node *node){
	if (node != nullptr){
		cleanup(node->left);
		cleanup(node->right);

		delete node;
	}
}

void huffman_encode (char *arr, int *freq, size_t n){
	Node *left, *right, *top;
	priority_queue<Node *, vector<Node *>, compare> q;
	for(size_t i = 0;i < n;i++){
		q.push(new Node(arr[i], freq[i]));
	}
	for(size_t i = 1;i < n;i++){
		left = q.top();
		q.pop();

		right = q.top();
		q.pop();
		top = new Node('*', left->freq + right->freq, left, right);
		q.push(top);
	}

	print_codes(q.top(), "");
	cleanup(q.top());
}
