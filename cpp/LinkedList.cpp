#include <iostream>

using namespace std;

class LinkedList{
    private:
        struct Node {
            int val;
            Node* next;
            Node(int val) : val(val), next(nullptr) {}
        };

        Node* head;
        int size;

    public:
        LinkedList() : head(nullptr), size(0) {}

        bool isEmpty() const {
            return head == nullptr;
        }

        void insertAtBeginning(int val) {
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
            size++;
        }

        void insertAtEnd(int val) {
            if(isEmpty()){
                insertAtBeginning(val);
            } else {
                Node* newNode = new Node(val);
                Node* curr = head;
                while (curr->next != nullptr) {
                    curr = curr->next;
                }

                curr->next = newNode;
                size++;
            }
        }

        void insertAtMiddle(int val, int position) {
            if(position <= 0) {
                insertAtBeginning(val);
            } else if (position >= size) {
                insertAtEnd(val);
            } else {
                Node* newNode = new Node(val);
                Node* curr = head;
                for (int i = 0; i < position - 1; i++) {
                    curr = curr->next;
                }
                newNode->next = curr->next;
                curr->next = newNode;
                size++;
            }
        }

        void deleteAtBeginning() {
            if(!isEmpty()) {
                Node* temp = head;
                head = head->next;
                delete temp;
                size--;
            }
        }

        void deleteAtEnd() {
            if (isEmpty()) return;

            if(head->next == nullptr) {
                delete head;
                head = nullptr;
            } else {
                Node* curr = head;
                while(curr->next->next != nullptr) {
                    curr = curr->next;
                }
                delete curr->next;
                curr->next = nullptr;
            }
            size--;
        }

        void deleteAtMiddle(int position) {
            if(position <= 0) {
                deleteAtBeginning();
            } else if (position >= size - 1){
                deleteAtEnd();
            } else {
                Node* curr = head;
                for (int i = 0; i <position - 1; i++) {
                    curr = curr->next;
                }
                Node* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
                size--;
            }
        }
        
        void reverse() {
            Node* prev = nullptr;
            Node* curr = head;
            Node* next = nullptr;

            while(curr != nullptr) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }  
            head = prev;
        }

        void traverse() const {
            Node* curr = head;
            cout << "[ ";
            while (curr != nullptr)
            {
                cout << curr->val << " ";
                curr = curr->next;
            }

            cout << " ]" << endl;
        }

        ~LinkedList() {
            while (!isEmpty())
            {
                deleteAtBeginning();
            }
            
        }
};

int main() {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.traverse();

    list.insertAtBeginning(0);
    list.traverse();

    list.insertAtMiddle(5, 3);
    list.traverse();

    list.deleteAtBeginning();
    list.traverse();

    list.deleteAtEnd();
    list.traverse();

    list.deleteAtMiddle(2);
    list.traverse();

    list.reverse();
    list.traverse();

    return 0;
}