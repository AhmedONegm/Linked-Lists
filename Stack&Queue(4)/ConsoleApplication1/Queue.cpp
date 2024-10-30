
#include <iostream>
#include<vector>
using namespace std;
int n;

struct node{
    string name;
    string address;
    node* ptr;
};
struct order{
    node * ptr;
    int n;
};
struct queue {
    node Node;
    node* current;
    std::vector<order> mix;

    void enqueue() {
        if (current == NULL) {
            cout << "queue is empty, this is the first element";
            n = 0;
        }
        node* temp = new node;
        cout << "enter the data: name & address respicitevely:";
        cin >> (*temp).name >> (*temp).address;
        current = temp;
        n++;
        mix.push_back({ current,n });
    }

    void dequeue() {
        node* pointer;
        pointer = mix[n].ptr; //3ayez 7aga tgeb el pointer ely m3 el i dy
        if (pointer != NULL) {
        delete current;
        n -= 1;
        }
    }
    
    void find_in_queue() {
        return;
    }

    void enqueue_at_index() {
        return;
    }

    void printNode(node* p)
    {
        printf("\n Employee Details...\n");
        printf("\n Name           : %s", p->name);
        printf("\n address        : %s \n", p->address);
        printf("-------------------------------------\n");
    }
};

int main()
{
    queue Q;
    Q.enqueue();
    Q.enqueue();
    //Q.printNode(Q);
}
