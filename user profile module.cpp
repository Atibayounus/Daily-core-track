// ================= USER PROFILE MODULE =================

class UserProfile : public Person
{
private:
    string goals;
    string routinePreference;

public:
    UserProfile()
    {
        goals = "";
        routinePreference = "";
    }

    void addProfile()
    {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Goals: ";
        getline(cin, goals);

        cout << "Enter Routine Preference: ";
        getline(cin, routinePreference);

        saveToFile();

        cout << "\nProfile Saved Successfully!\n";
    }

    void updateProfile()
    {
        addProfile();

        cout << "\nProfile Updated Successfully!\n";
    }

    void display()
    {
        cout << "\n===== USER PROFILE =====\n";

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Goals: " << goals << endl;
        cout << "Routine Preference: "
             << routinePreference << endl;
    }

    void saveToFile()
    {
        ofstream fout("profile.txt");

        fout << name << endl;
        fout << age << endl;
        fout << goals << endl;
        fout << routinePreference << endl;

        fout.close();
    }

    void loadFromFile()
    {
        ifstream fin("profile.txt");

        getline(fin, name);

        fin >> age;
        fin.ignore();

        getline(fin, goals);
        getline(fin, routinePreference);

        fin.close();
    }
};
