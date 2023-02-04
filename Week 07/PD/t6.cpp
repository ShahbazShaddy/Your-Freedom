#include <iostream>
using namespace std;
void hospital();
main()
{

    hospital();
}
void hospital()
{
    int day;
    cout << "Enter days:";
    cin >> day;
    int patient;
    int doctor = 7;
    int treated = 0;
    int untreated = 0;
    for (int x = 1; x <= day; x++)
    {
        cout << "Enter number of patients:";
        cin >> patient;
        if (x % 3 == 0 && untreated > treated)
        {
            doctor = doctor + 1;
        }
        if (patient <= doctor)
        {
            treated = treated + patient;
        }
        if (patient > doctor)
        {
            untreated = untreated + (patient - doctor);
            treated = treated + doctor;
        }

        cout << "Treated: " << treated << endl;
        cout << "Untreated: " << untreated << endl;
    }
}