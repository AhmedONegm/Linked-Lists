#include<iostream>
using namespace std;

struct node {
	int id;
	char name[10];
	char job[10];
	node* next;
};

node* next_ptr = NULL;

void Add_Emp() {
	node* temp = new node;
	cin >> temp->id;
	cin >> temp->name;
	cin >> temp->job;
	temp->next = next_ptr;
	next_ptr = temp;
}

void Delete_Emp(node* p) {
	if (p->next == p) {
	}
	return;
}

void Find_Emp() {
	while (next_ptr != NULL) {
		return;
	}
}

void Replace_Emp(node * x, node * y) {
	return;

}

void Print_Emps(node* p) {
	while (next_ptr != NULL) {
		return;
	}
}
void printNode(node* p)
{
	printf("\n Employee Details...\n");
	printf("\n ID       : %d", p->id);
	printf("\n Name           : %s", p->name);
	printf("\n job    : %s \n", p->job);
	printf("-------------------------------------\n");
}
int main() {
	Add_Emp();
	printNode(next_ptr);
	return 0;
}