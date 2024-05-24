#include <iostream>
#include <string>

using namespace std;

void display_task(string tasks[], bool completed[], int task_count = 0)
{
cout<< endl<< "Tasks to do:\n";
  for (int i=0; i<task_count; i++)
{
    cout<< endl<<"Task"<< i << "=" << tasks [i]<<endl;
     if (completed[i])
        {
            cout << " [Completed]";
        }
}
}

int main()
{
int task_count = 0;
int choice = -1 ;

bool completed[10] = {false};
string tasks [10];


while (choice != 0)
    {
cout << "\n~~~~~To Do List~~~~~~~~\n\n";
cout << "Enter 1 to add a new task ";
cout << " \nEnter 2 to view all tasks ";
cout << " \nEnter 3 to delete any tasks ";
cout << " \nEnter 4 to mark any task as completed ";
cout << " \nEnter 0 to terminate the program "<<endl;
cin>> choice;

 switch(choice)
 {
 case 1:
    {
        if (task_count> 9)
        {
            cout<< "List is full";
        }
        else
        {
            cout<< "Enter a new task:";
            cin.ignore();
            getline (cin, tasks[task_count]);  //using 'cin>> tasks[task_count];' sentence me space nhi daal skte...
            completed[task_count] = false;
            task_count++ ;
        }
        break;
    }
 case 2:
    {
       display_task(tasks, completed, task_count) ;
       break;
    }
case 3:
    {
        int del_task = 0;
        cout << "Enter a task to delete: "<<endl;
        cin>> del_task;
        if (del_task < 0 || del_task > 9)
        {
            cout << " Invalid value ";
            break;
        }
        else
        {
           for (int i= del_task; i < task_count; i++ )
           {
                tasks[i] =  tasks[i+1];
                completed[i] = completed[i + 1];
           }
           task_count-- ;
        }
        break;
  }
  case 4:
                 {
                int mark_task = 0;
                cout << "Enter a task number to mark as completed: ";
                cin >> mark_task;
                if (mark_task < 0 || mark_task >= task_count) {
                    cout << "Invalid value" << endl;
                } else {
                    completed[mark_task] = true;
                }
                break;
               }

    }
  }
    cout<< "Program terminated";

return 0;

}
