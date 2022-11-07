#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
        next = NULL;
    }
};

class CircularQueue_U_LinkedList
{
public:
    Node *front;
    Node *rear;

    CircularQueue_U_LinkedList()
    {
        front = NULL;
        rear = NULL;
    }

    bool isEmpty()
    {
        if(front == NULL && rear == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool checkIfNodeExist(Node *n)
    {
        Node *temp = front;
        bool exist = false;

        do
        {
            if(temp -> key == n -> key)
            {
                exist = true;
                break;
            }
            else
            {
                temp = temp -> next;
            }

        }while(temp != front);



        return exist;
    }

    void enqueue(Node *n)
    {
        if (isEmpty())
        {
            front = n;
            rear = n;
            rear -> next = front;
            cout << "Node  ENQUEUED successfully." << endl;
        }
        else if(checkIfNodeExist(n))
        {
            cout << "Node already exist with this Key value."
                 << "Enter different Key value." << endl;
        }
        else
        {
            rear -> next = n;
            rear = n;
            rear -> next = front;
            cout << "Node  ENQUEUED successfully." << endl;
        }

    }

    Node *dequeue()
    {
        Node *temp = NULL;
        if (isEmpty())
        {
            cout << "Queue is Empty." << endl;
            return temp;
        }
        else
        {
            if(front == rear)
            {
                temp = front;
                front = NULL;
                rear = NULL;
                return temp;
            }
            else
            {
                temp = front;
                front = front -> next;
                rear -> next = front;
                return temp;
            }

        }
    }

    int count()
    {
        int count = 0;
        Node *temp = front;
      
        if(isEmpty())
        {
            return count;
        }

        else
        {
            do
            {
                count++;
                temp = temp -> next;
            }while(temp != front);

            return count;
        }
    }

    void display()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty." << endl;
        }
        else
        {
            cout << "All values in the Queue are:" << endl;
            Node *temp = front;

            do
            {
                cout <<"("<< temp -> key <<","<< temp -> data <<")"<<" -> ";
                temp = temp -> next;
            }while(temp != front);

            cout <<"("<< temp -> key <<","<< temp -> data <<")";
            cout << endl;
        }

    }


};

int main()
{
    CircularQueue_U_LinkedList q;
    int option,key1, data1;

    do
    {
        cout << endl;
        cout << "What operation do you want to perform?"
             <<"Select Option number. Enter 0 to exit." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. count()" << endl;
        cout << "5. display()" << endl;
        cout << "6. Clear Screen" << endl << endl;
        cin >> option;


        Node *new_node = new Node();


        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "ENQUEUE Function Called.." << endl;
            cout << "Enter KEY and VALUE of NODE to ENQUEUE "
                 << "in the Queue:"
                 << endl;
            cin >> key1;
            cin >> data1;
            new_node -> key = key1;
            new_node -> data = data1;
            q.enqueue(new_node);
            break;

        case 2:
            cout << "DEQUEUE Function Called.." <<endl;
            new_node = q.dequeue();
            if(new_node == NULL)
            {
                cout << "No node for dequeue.First enqueue new node." <<endl;
            }
            else
            {
                cout << "Dequeued Value is:" <<"("<< new_node -> key <<","
                     <<  new_node -> data <<")";
                delete  new_node;
                cout << endl;
            }
            break;

        case 3:
            cout << "isEmpty Function Called.." << endl;
            if (q.isEmpty())
                cout << "Queue is Empty." << endl;
            else
                cout << "Queue is NOT Empty." << endl;
            break;

        case 4:
            cout << "Count Function Called.." << endl;
            cout << "No of nodes in the Queue:" <<q.count()
                 << endl;
            break;

        case 5:
            cout << "Display Function Called.." << endl;
            q.display();
            cout << endl;
            break;

        case 6:
            system("cls");
            break;

        default:
            cout << "Enter Proper Option number!" << endl;
        }

    }while (option != 0);


    return 0;
}
