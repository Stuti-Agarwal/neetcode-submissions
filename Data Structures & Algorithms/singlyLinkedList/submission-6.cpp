#include <vector>
using namespace std;

class LinkedList{
    public:
        struct Node{
            int val;
            Node* next;
            // constructor for Node
            Node(int val){
                this->val = val;
                next =nullptr;
            }
        };
        Node* head;

        //constructor for LL
        LinkedList(){
            head = nullptr;
        }

        int get(int i){
            Node* current = head;
            int index = 0;
            while(current != nullptr){
                if(index==i){
                    return current->val;
                }
                current = current->next;
                index++;
            }
            return -1;
        }

        void insertHead(int val){
            Node* new_head = new Node(val);
            new_head->next = head;
            head = new_head;
            cout << head;
            return;
        }

        void insertTail(int val){
            Node* new_tail = new Node(val);
            if (head==nullptr){
                head =new_tail;
                return;

            }
            Node* curr = head;
            while(curr->next != nullptr){
                curr= curr->next;
            }
            curr->next = new_tail;
        }

        bool remove(int i){
            if(head==nullptr or i<0){
                return false;
            }
            Node* curr = head;
            int x = 0;
            if (i == 0){
                Node* temp = head;
                head = head->next;
                delete temp;

                return true;
            }
            else {
                Node* nextnode;
                while (curr->next != nullptr){
                    if (x==i-1){
                        nextnode = curr->next;
                        curr->next = nextnode->next;
                        delete nextnode;
                        return true;
                        
                    }
                    x++;
                    curr = curr->next;
                }
            }
            return false;
        }

        vector<int> getValues(){
            vector<int> result;
            Node* curr = head;

            while(curr!=nullptr){
                result.push_back(curr->val);
                curr = curr->next;
            }
            return result;
        }
};
