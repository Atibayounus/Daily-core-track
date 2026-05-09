// ================= TASK MANAGEMENT MODULE =================

class Task
{
private:
    string taskName;
    string priority;
    string deadline;
    string status;

public:
    Task()
    {
        taskName = "";
        priority = "";
        deadline = "";
        status = "Pending";
    }

    // Constructor Overloading
    Task(string t, string p, string d)
    {
        taskName = t;
        priority = p;
        deadline = d;
        status = "Pending";
    }

    void addTask()
    {
        cin.ignore();

        cout << "Enter Task Name: ";
        getline(cin, taskName);

        cout << "Enter Priority: ";
        getline(cin, priority);

        cout << "Enter Deadline: ";
        getline(cin, deadline);

        status = "Pending";

        saveTask();

        cout << "\nTask Added Successfully!\n";
    }

    void updateTask()
    {
        cin.ignore();

        cout << "Enter New Task Name: ";
        getline(cin, taskName);

        cout << "Enter New Priority: ";
        getline(cin, priority);

        cout << "Enter New Deadline: ";
        getline(cin, deadline);

        saveTask();

        cout << "\nTask Updated Successfully!\n";
    }

    void deleteTask()
    {
        taskName = "";
        priority = "";
        deadline = "";
        status = "";

        ofstream fout("tasks.txt");
        fout.close();

        cout << "\nTask Deleted Successfully!\n";
    }

    void markCompleted()
    {
        status = "Completed";

        saveTask();

        cout << "\nTask Marked Completed!\n";
    }

    void displayTask()
    {
        cout << "\n===== TASK DETAILS =====\n";

        cout << "Task Name: "
             << taskName << endl;

        cout << "Priority: "
             << priority << endl;

        cout << "Deadline: "
             << deadline << endl;

        cout << "Status: "
             << status << endl;
    }

    void saveTask()
    {
        ofstream fout("tasks.txt");

        fout << taskName << endl;
        fout << priority << endl;
        fout << deadline << endl;
        fout << status << endl;

        fout.close();
    }

    void loadTask()
    {
        ifstream fin("tasks.txt");

        getline(fin, taskName);
        getline(fin, priority);
        getline(fin, deadline);
        getline(fin, status);

        fin.close();
    }
};
