#include<bits/stdc++.h>
using namespace std;
class Stack
{
private:
    int top;
    int arr[5];
public:
    Stack()
    {
        top=-1;
        for(int i=0; i<5; i++)
        {
            arr[i]=0;
        }
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(top==4)
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if(isFull())
        {
            cout<<"Stack is overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=val;
        }
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is underfolw"<<endl;
            return 0;
        }
        else
        {
            int popval=arr[top];
            arr[top]=0;
            top--;
            return popval;
        }

    }
    int Count()
    {
        return top+1;
    }
    int peek(int pos)
    {
        if(isEmpty())
        {
            cout<<"stack underflow."<<endl;
            return 0;
        }
        else
            return arr[pos];

    }
    void change(int pos, int val)
    {
        arr[pos]=val;
        cout<<"Item change at the location"<<pos<<"by value"<<val<<"."<<endl;
    }
    void display()
    {
        cout<<"All value in this stack are:-"<<endl;
        for(int i=4; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        }
    }


};
int main()
{
    Stack s1;
    int position,option,value;
    do
    {
        cout<<"\nWhat option do you want to perform?Select option number.Enter 0 to Exit."<<endl;
        cout<<"1. push()"<<endl;
        cout<<"2. pop()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. peek()"<<endl;
        cout<<"6. count()"<<endl;
        cout<<"7. change()"<<endl;
        cout<<"8. display()"<<endl;
        cout<<"9. Clear screen()"<<endl;
        cin>>option;
        switch(option)
        {
        case 0:
            break;
        case 1:
            cout<<"Enter an item to push stack:"<<endl;
            cin>>value;
            s1.push(value);
            break;
        case 2:
            cout<<"pop function callaed - pop value:"<<s1.pop()<<endl;
            break;
        case 3:
            if(s1.isEmpty())
            {
                cout<<"Stack is empty.";
            }
            else
            {
                cout<<"Stack is not empty.";
            }
            break;
        case 4:
            if(s1.isFull())
            {
                cout<<"Stack is full.";
            }
            else
            {
                cout<<"Stack is not full.";
            }

            break;
        case 5:
            cout<<"Enter position you want to peek"<<endl;
            cin>>position;
            cout<<"Peek function called -value at positon="<<position<<"\n"<<s1.peek(position)<<endl;
            break;
        case 6:
            cout<<"Count function called - Number of item in this stack:-"<<s1.Count()<<endl;

            break;
        case 7:
            cout<<"Change function called."<<endl;
            cout<<"Enter position of item you want to change:"<<endl;
            cin>>position;
            cout<<endl;
            cout<<"Enter value of position you want to change:"<<endl;
            cin>>value;
            s1.change(position,value);

            break;
        case 8:
            cout<<"Display function called."<<endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout<<"Please Enter valid Input."<<endl;
        }
    }
    while(option!=0);
    return 0;
}
