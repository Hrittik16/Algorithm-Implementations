#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

node* head;

void insert_node_at_tail(int val) {
	if(head == NULL) {
		node* temp = new node();
		temp->data = val;
		temp->next = NULL;
		head = temp;
	}
	else {
		node* temp = new node();
		temp->data = val;
		temp->next = NULL;
		node* temp1 = head;
		while(temp1->next != NULL) temp1 = temp1->next;
		temp1->next = temp;
	}
}

void insert_node_at_beginning(int val) {
	node* temp = (node*)malloc(sizeof(node));
	temp->data = val;
	temp->next = head;
	head = temp;
}

void insert_node_at_position(int val, int pos) {
	node* temp = new node();
	temp->data = val;
	if(pos == 1) {
		temp->next = head;
		head = temp;
		return;
	}
	node* temp1 = head;
	for(int i = 0; i < pos-2; i++) {  // go to the pos-1 th position
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;
}

void delete_node(int pos) {
	if(pos == 1) {
		node* temp = head;
		temp = temp->next;
		head = temp;
	}
	else {
		node* temp = head;
		for(int i = 0; i < pos-2; i++) temp= temp->next;
		node* temp1 = temp->next->next;
		temp->next = temp1;
	}
}

void print_list() {
	node* temp = head;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}
  
int main() {
	head = NULL;
	/*
	int n, val;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> val;
		insert_node_at_beginning(val);
	}
	print_list();
	*/
	
	insert_node_at_position(12, 1); // 12
	insert_node_at_position(10, 1); // 10, 12
	insert_node_at_position(14, 3); // 10, 12, 14
	print_list();
	insert_node_at_position(15, 2);
	print_list();
	delete_node(1);
	print_list();
	delete_node(3);
	print_list();

	return 0;
}


