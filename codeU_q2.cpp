#include <iostream>
#include <vector>
#include <string>
#include <map>
//Assignment 1 - Getting Started - Question2
using namespace std;
struct node{
	int dis;
	node *next;
};
void insertFirstElement(node *&head, node *&tail){
	node *n = new node;
	n -> dis = 0;
	n -> next = NULL;
	head = n;
	tail = n; 
}
void insertElement(node *&head, node *&tail, int i){
	node *n = new node;
	n -> dis = i;
	n -> next = NULL;
	tail -> next = n;
	tail = n;
}
int main (){
	int num; cin >> num;
	node *head = NULL;
	node *tail = NULL;
	insertFirstElement(head,tail);
	for (int i = 1; i < num; i++) {
		insertElement(head,tail, i);
	}
	return 0;
}