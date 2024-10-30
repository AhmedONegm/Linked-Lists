#include<iostream>

struct node {
	int id;
	node* left;
    node* right;
}n = { 10,NULL,NULL };



struct BST {
public:
    node n;

    void Search_Binary(node* temp, int id) {

            if (temp == NULL)
                std::cout<<"Not found";
            if (id == temp->id) {
                std::cout << "It's here";
            }
            else if (id < temp->id) {
                Search_Binary(temp->left, id);
            }
            else if (id > temp->id) {
                Search_Binary(temp->right, id);
            }
            else
                std::cout << "Not found";
    }

    node * Insert_stud(node * temp, int id) {
        if (temp == NULL) {
           temp = new node;
        }
        else if (id < temp->id)
            temp->left = Insert_stud(temp->left, id);
        else
            temp->right = Insert_stud(temp->right, id);
        return temp;
    }

    void Find_stud( int id) {
        Search_Binary(&n, id);
        std::cout << "found";
    }
};
int main() {
    BST bst = {{ 10,NULL,NULL },};
    bst.Search_Binary(&n,10);
}