#include <iostream>
using namespace std;
void result1(int hour, int days, int numOfWorker);

main()
{
    int hour, days, numOfWorker;
    cout << "Enter the needed hour: ";
    cin >> hour;
    cout << "Enter days the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> numOfWorker;
    result1(hour, days, numOfWorker);
}
void result1(int hour, int days, int numOfWorker)
{
    int workingHourPerDay = numOfWorker * 9;
    int totalWorkHour = workingHourPerDay * days;
    if (totalWorkHour > hour)
    {
        int output = totalWorkHour - hour;
        cout << "Yes! " << output << " hours left";
    }
    else
    {
        int output = hour - totalWorkHour;
        cout << "Not enough time! " << output << " hours needed";
    }
}