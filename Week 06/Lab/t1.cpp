#include <iostream>
using namespace std;
string title(int age,char gender);
main()
{
    int age;
    char gender;
    

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender(m/f): ";
    cin >> gender;

    string result = title(age,gender);
    cout << "After Discount is " << result;
}
string title(int age,char gender)
{
    string title;
    if (gender=='m' && age>=16)
    {
        title ="Mr.";
    }
    if (gender=='m' && age<16)
    {
        title ="Master";
    }
        if (gender=='f' && age>=16)
    {
        title ="Ms.";
    }
        if (gender=='f' && age<16)
    {
        title ="Miss";
    }
    return title;
}
