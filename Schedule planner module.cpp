// ================= SCHEDULE PLANNER MODULE =================

class Schedule
{
private:
    string classTiming;
    string studyHours;
    string restTime;

public:
    Schedule()
    {
        classTiming = "";
        studyHours = "";
        restTime = "";
    }

    void addSchedule()
    {
        cin.ignore();

        cout << "Enter Class Timing: ";
        getline(cin, classTiming);

        cout << "Enter Study Hours: ";
        getline(cin, studyHours);

        cout << "Enter Rest Time: ";
        getline(cin, restTime);

        saveSchedule();

        cout << "\nSchedule Saved Successfully!\n";
    }

    void displaySchedule()
    {
        cout << "\n===== DAILY SCHEDULE =====\n";

        cout << "Class Timing: "
             << classTiming << endl;

        cout << "Study Hours: "
             << studyHours << endl;

        cout << "Rest Time: "
             << restTime << endl;
    }

    void saveSchedule()
    {
        ofstream fout("schedule.txt");

        fout << classTiming << endl;
        fout << studyHours << endl;
        fout << restTime << endl;

        fout.close();
    }

    void loadSchedule()
    {
        ifstream fin("schedule.txt");

        getline(fin, classTiming);
        getline(fin, studyHours);
        getline(fin, restTime);

        fin.close();
    }
};