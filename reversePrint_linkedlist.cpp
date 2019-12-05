#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node {
	int data;
	node* next;	
};

node* head;

void insert(int data) {
	node* temp = new node();
	temp->data = data;
	temp->next = NULL;
	if(head == NULL) {
		head = temp;
	}
	else {
		node* temp1 = head;
		while(temp1->next != NULL) {
			temp1 = temp1->next;
		}
		temp1->next = temp;
	}
}

void reverse() {
	vector<int> list;
	node* temp = head;
	while(temp != NULL) {
		list.push_back(temp->data);
		temp = temp->next;
	}
	reverse(list.begin(), list.end());
	for(auto x: list) cout << x << " ";
	cout << "\n";
}


int main() {
	
	head = NULL;
	insert(1);
	insert(2);	
	insert(3);
	insert(4);
	insert(5);
	reverse();
	return 0;
}
