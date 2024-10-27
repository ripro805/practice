#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() : head(nullptr) {}

    void linkedListTraversal() const {
        if (head == nullptr) return;
        Node* ptr = head;
        do {
            std::cout << "Element is " << ptr->data << std::endl;
            ptr = ptr->next;
        } while (ptr != head);
    }

    void insertAtFirst(int data) {
        Node* ptr = new Node(data);
        if (head == nullptr) {
            head = ptr;
            head->next = head;
            return;
        }

        Node* p = head;
        while (p->next != head) {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = head;
        head = ptr;
    }

    void insertAtIndex(int data, int index) {
        if (index == 0) {
            insertAtFirst(data);
            return;
        }

        Node* ptr = new Node(data);
        Node* p = head;
        for (int i = 0; i < index - 1 && p->next != head; i++) {
            p = p->next;
        }
        ptr->next = p->next;
        p->next = ptr;
    }

    void insertAtEnd(int data) {
        Node* ptr = new Node(data);
        if (head == nullptr) {
            head = ptr;
            head->next = head;
            return;
        }

        Node* p = head;
        while (p->next != head) {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = head;
    }

    void insertAfterNode(Node* prevNode, int data) {
        if (prevNode == nullptr) return;

        Node* ptr = new Node(data);
        ptr->next = prevNode->next;
        prevNode->next = ptr;
    }

    void deleteFirst() {
        if (head == nullptr) return;

        Node* p = head;
        while (p->next != head) {
            p = p->next;
        }

        Node* temp = head;
        p->next = head->next;
        head = head->next;
        delete temp;
    }

    void deleteAtIndex(int index) {
        if (head == nullptr) return;

        Node* p = head;
        if (index == 0) {
            deleteFirst();
            return;
        }

        for (int i = 0; i < index - 1 && p->next != head; i++) {
            p = p->next;
        }
        Node* q = p->next;
        p->next = q->next;
        delete q;
    }

    void deleteAtLast() {
        if (head == nullptr) return;

        Node* p = head;
        Node* q = head;
        while (q->next != head) {
            p = q;
            q = q->next;
        }
        p->next = head;
        delete q;
    }

    void deleteByValue(int value) {
        if (head == nullptr) return;

        Node* p = head;
        Node* q = head->next;
        if (head->data == value) {
            deleteFirst();
            return;
        }

        while (q != head && q->data != value) {
            p = q;
            q = q->next;
        }
        if (q->data == value) {
            p->next = q->next;
            delete q;
        }
    }

    ~CircularLinkedList() {
        if (head == nullptr) return;
        Node* current = head;
        Node* nextNode = nullptr;
        do {
            nextNode = current->next;
            delete current;
            current = nextNode;
        } while (current != head);
    }
};

int main() {
    CircularLinkedList list;

    // Allocate memory for nodes in the linked list
    list.head = new Node(4);
    Node* second = new Node(3);
    Node* third = new Node(6);
    Node* fourth = new Node(1);

    // Link first and second nodes
    list.head->next = second;

    // Link second and third nodes
    second->next = third;

    // Link third and fourth nodes
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->next = list.head;

    std::cout << "Circular Linked list before insertion" << std::endl;
    list.linkedListTraversal();

    list.insertAtFirst(54);
    list.insertAtFirst(58);
    list.insertAtFirst(59);
    list.insertAtIndex(52, 1);
    list.insertAtEnd(53);
    list.insertAfterNode(third, 45);

    std::cout << "Circular Linked list after insertion" << std::endl;
    list.linkedListTraversal();

    list.deleteFirst(); // For deleting the first element of the linked list
    std::cout << "After deleting the first element:" << std::endl;
    list.linkedListTraversal();

    list.deleteAtIndex(1); // For deleting the element at index 1
    std::cout << "After deleting the element at index 1:" << std::endl;
    list.linkedListTraversal();

    list.deleteAtLast(); // For deleting the last element
    std::cout << "After deleting the last element:" << std::endl;
    list.linkedListTraversal();

    list.deleteByValue(3); // For deleting the element with value 3
    std::cout << "After deleting the element with value 3:" << std::endl;
    list.linkedListTraversal();

    return 0;
}
