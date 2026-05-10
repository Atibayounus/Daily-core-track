// ================= HEALTH TRACKER MODULE =================

class HealthTracker
{
private:
    int sleepHours;
    int waterIntake;
    int exerciseTime;

public:
    HealthTracker()
    {
        sleepHours = 0;
        waterIntake = 0;
        exerciseTime = 0;
    }

    void addHealthData()
    {
        cout << "Enter Sleep Hours: ";
        cin >> sleepHours;

        cout << "Enter Water Intake (Glasses): ";
        cin >> waterIntake;

        cout << "Enter Exercise Time (Minutes): ";
        cin >> exerciseTime;

        saveHealth();

        cout << "\nHealth Data Saved Successfully!\n";
    }

    void displayHealthReport()
    {
        cout << "\n===== HEALTH REPORT =====\n";

        cout << "Sleep Hours: "
             << sleepHours << endl;

        cout << "Water Intake: "
             << waterIntake << " glasses" << endl;

        cout << "Exercise Time: "
             << exerciseTime << " minutes" << endl;
    }

    void saveHealth()
    {
        ofstream fout("health.txt");

        fout << sleepHours << endl;
        fout << waterIntake << endl;
        fout << exerciseTime << endl;

        fout.close();
    }

    void loadHealth()
    {
        ifstream fin("health.txt");

        fin >> sleepHours;
        fin >> waterIntake;
        fin >> exerciseTime;

        fin.close();
    }
};