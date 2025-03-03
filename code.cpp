#include<bits/stdc++.h>
using namespace std;


class Task
{
public:
    string description;
    Task* next;

    Task(string desc)
    {
        description=desc;
        next=nullptr;
    }
};


class ToDoList
{
private:
    Task* head;

public:
    ToDoList()
    {
        head=nullptr;
    }

    void addTask(string desc)
    {
        Task* newTask=new Task(desc);
        if(!head) 
        {
            head=newTask;
        } 
        else
        {
            Task* temp=head;
            while(temp->next)
            {
                temp=temp->next;
            }
            temp->next=newTask;
        }
        cout<<"Task added: "<<desc<<"\n";
    }

    void displayTasks() 
    {
        if(!head)
        {
            cout<<"No tasks in the list.\n";
            return;
        }
        cout<<"\nYour Tasks:\n";
        Task* temp=head;
        int i=1;
        while(temp)
        {
            cout<<i++<<". "<<temp->description<<"\n";
            temp=temp->next;
        }
    }

    void deleteTask(int taskNumber) {
        if(!head)
        {
            cout<<"No tasks to delete.\n";
            return;
        }

        Task* temp=head;
        Task* prev=nullptr;
        int count=1;

        if(taskNumber==1)
        {
            head=head->next;
            delete temp;
            cout<<"Task deleted successfully!\n";
            return;
        }

        while(temp&&count!=taskNumber)
        {
            prev=temp;
            temp=temp->next;
            count++;
        }

        if(!temp) 
        {
            cout<<"Invalid task number!\n";
            return;
        }

        prev->next=temp->next;
        delete temp;
        cout<<"Task deleted successfully!\n";
    }
};


int main() {
    ToDoList myList;
    int choice,taskNumber;
    string desc;
    while(true)
    {
        cout<<"\nTo-Do List Menu\n";
        cout<<"1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
                cout<<"Enter task description: ";
                getline(cin,desc);
                myList.addTask(desc);
                break;
            case 2:
                myList.displayTasks();
                break;
            case 3:
                cout<<"Enter task number to delete: ";
                cin>>taskNumber;
                myList.deleteTask(taskNumber);
                break;
            case 4:
                exit(0);
            default:
                cout<<"Invalid choice! Try again.\n";
        }
    }
    return 0;
}
