#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
using namespace std;

// Function Prototype.....

void header();
void mainMenu();
string signup(string name, string password);
string login(string name, string password);
bool passwordvalid(string password);
void clear();

bool adminMenu();
bool customerMenu();
bool checkBal();
bool customerBal();
bool recharge();
bool giveloan();
bool addOffers();
bool getloan();
bool removeOffers();
bool offerList();
bool callOffer();
bool smsOffer();
bool internetOffer();
bool saleOffer();
bool giftMbs();
bool faqs();
void questions();
bool saleOfferCustomer();
bool viewFaqs();
bool writeFeedback();
bool viewFeedback();
bool deleteAccount();
void saveData();
void loadData();
string getfield(string record, int field);
bool invalid(int choice);
void tryAgain();

// Variable and array.....

string names[10];
string loginName;
string passwords[10];
string adminPassword[10];
string loginPassword;
string role;
string phoneNum[10];
string creditCardNum[10];
int userCount = 0;
int option;
int index = 0;
int currentindex = 0;
string balance[10];
string balanceRecharge;
int arrSize;
string offer[10];
string amountOfOffer[10];
string offerType[10];
string offerSpec[10];
string discountOffer[10];
string discountAmountOfOffer[10];
string discountOfferType[10];
string discountOfferSpec[10];
string afterDiscount[10] = {"0"};
int mbs;
string faqNum[10];
string question[10];
string answer[10];
string questionToRemove[10];
string feedback[10];

main()
{

    //After executing the Program the this will load the file into the arrays
    loadData();
    /////////////

    system("Color F2");
    while (true)
    {
        system("cls");
        header();
        mainMenu();

        //Option for Login
        if (option == 1)
        {

            system("cls");
            header();

            string name;
            string password;
            cout << "Username:";
            cin >> name;
            cout << "Password:";
            cin >> password;
            role = login(name, password);

            if (role == "Admin" || role == "admin")   //When admin login in the application
            {
                int n = 1;
                while (n != 0)
                {
                    system("cls");
                    header();
                    adminMenu();

                    if (option == 1)   //For checking the balance of customer
                    {
                        system("cls");
                        header();
                        customerBal();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 2)   //For giving loan to a particular customer
                    {
                        system("cls");
                        header();
                        giveloan();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 3)    //For adding an offer
                    {
                        system("cls");
                        header();
                        addOffers();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 4)    //For removing an offer
                    {
                        system("cls");
                        header();
                        removeOffers();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 5)   //For viewing the complete offer list
                    {
                        system("cls");
                        header();
                        offerList();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 6)    //For giving a sale in the offer
                    {
                        system("cls");
                        header();
                        saleOffer();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 7)   //For giving a gift to a customer
                    {
                        system("cls");
                        header();
                        giftMbs();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 8)    //FAQs
                    {
                        system("cls");
                        header();
                        faqs();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 9)    //For viewing the feedback given by the customer
                    {
                        system("cls");
                        header();
                        viewFeedback();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 10)    //For delete the customer's account
                    {
                        system("cls");
                        header();
                        deleteAccount();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 11)   //For logout
                    {
                        break;
                    }
                    else   //Options pressed other than the given options
                    {
                        if (option > 11)
                            tryAgain();
                        else
                            invalid(option);
                    }
                }
                if (n != 0)
                {
                    cout << endl;
                    cout << "Press any key to continue:" << endl;
                    getch();
                }
            }

            if (role == "Customer" || role == "customer")
            {
                int n = 1;
                while (n != 0)
                {
                    system("cls");
                    header();
                    customerMenu();
                    if (option == 1)
                    {
                        system("cls");
                        header();
                        checkBal();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 2)
                    {
                        system("cls");
                        header();
                        recharge();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 3)
                    {
                        system("cls");
                        header();
                        getloan();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 4)
                    {
                        system("cls");
                        header();
                        callOffer();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 5)
                    {
                        system("cls");
                        header();
                        smsOffer();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 6)
                    {
                        system("cls");
                        header();
                        internetOffer();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 7)
                    {
                        system("cls");
                        header();
                        saleOfferCustomer();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 8)
                    {
                        system("cls");
                        header();
                        viewFaqs();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 9)
                    {
                        system("cls");
                        header();
                        writeFeedback();
                        cout << endl;
                        cout << "Press 1 for Main Menu:";
                        cin >> option;
                        if (option == 1)
                        {
                            system("cls");
                            continue;
                        }
                    }
                    if (option == 10)
                    {
                        break;
                    }
                    else
                    {
                        if (option > 10)
                            tryAgain();
                        else
                            invalid(option);
                    }
                }
                if (n != 0)
                {
                    cout << endl;
                    cout << "Press any key to continue:" << endl;
                    getch();
                }
            }
        }

        if (option == 2)
        {
            system("cls");
            header();

            string name;
            string password;
            cout << "Username:";
            cin >> name;
            cout << "Password:";
            cin >> password;
            cout << "Role:";
            cin >> role;
            if (role == "Customer" || role == "customer")
            {
                cout << "Phone Number:";
                cin >> phoneNum[currentindex+1];
            }

            bool passwordvalidity;

            string Isvalid;
            passwordvalidity = passwordvalid(password);
            if (passwordvalidity)
            {
                Isvalid = signup(name, password);
                if (Isvalid == "false")
                {
                    names[userCount] = name;
                    passwords[userCount] = password;
                    userCount++;
                    cout << endl;
                }
            }
            if (Isvalid == "true")
            {
                cout << endl;
                cout << "Already Existed! Try Again" << endl;
            }
            if (password.length() < 5)
            {
                cout << endl;
                cout << "Password is too short! Try Again" << endl;
            }
            clear();
        }

        if (option == 3)
        {
            saveData();
            break;
        }
    }
}
//-----------------------------------------------------
//////////////////////////// Basic Functions...........
//-----------------------------------------------------
void header()
{
    cout << "" << endl;
    cout << "**************************************************************************" << endl;
    cout << "*                                                                        *" << endl;
    cout << "*                 MOBILE PHONE SERVICES ( PACKAGES )                     *" << endl;
    cout << "*                                                                        *" << endl;
    cout << "**************************************************************************" << endl;
    cout << "" << endl;
}
void mainMenu()
{
    cout << "Menu" << endl;
    cout << "---------------------------------------" << endl;
    cout << "1.Login" << endl;
    cout << "2.Sign up" << endl;
    cout << "3.Exit" << endl;

    cout << "Select an option:";
    cin >> option;

    if (option > 10)
        tryAgain();
    else
        invalid(option);
}
string signup(string name, string password)
{
    string Isfound = "false";
    for (int index = 1; index < userCount; index++)
    {
        if (names[index] == name)
        {
            Isfound = "true";
        }
    }
    return Isfound;
}
string login(string name, string password)
{
    string role = "Undefined";
    for (int index = 1; index < userCount; index++)
    {
        if (name == names[index] && password == passwords[index])
        {
            role = "Customer";
            currentindex = index;
        }
    }
    int index = 0;
    if (name == names[index] && password == passwords[index])
    {
        role = "Admin";
        currentindex = index;
    }
    return role;
}
bool passwordvalid(string password)
{
    bool isvalid = false;
    int count = 0;
    for (int x = 0; password[x] != '\0'; x++)
    {
        count++;
    }
    if (count > 4)
    {
        isvalid = true;
    }
    return isvalid;
}
void clear()
{
    cout << endl;
    cout << "Press any key to continue:";
    getch();
    system("cls");
}

//-----------------------------------------------------
//////////////////////////// Functions For Admin.......
//-----------------------------------------------------

bool adminMenu()
{
    cout << "1.Check Customer's Balance:" << endl;
    cout << "2.Give Loan:" << endl;
    cout << "3.Add Offers::" << endl;
    cout << "4.Remove Offers" << endl;
    cout << "5.View Offer List:" << endl;
    cout << "6.Add Sale On Offers:" << endl;
    cout << "7.Gift MBs To Customers:" << endl;
    cout << "8.See FAQs:" << endl;
    cout << "9.View Feedback:" << endl;
    cout << "10.Delete Account:" << endl;
    cout << "11.Logout:" << endl;
    cout << "Select an option:";
    cin >> option;
}
bool customerBal()
{
    string phoneNumber;
    cout << "Enter Phone Number Of Customer:";
    cin >> phoneNumber;
    if (phoneNumber == phoneNum[currentindex+1])
    {
        cout << "Balance (Rs.):" << balance[currentindex];
    }
    else
        cout << "Invalid Number!";
    bool customerBalance = true;
    if (customerBalance == true)
    {
        return customerBal;
    }
}
bool giveloan()
{
    cout << "Enter Phone Number Of Customer:";
    cin >> phoneNum[currentindex+1];
    cout << "Enter Amount Of Loan To Give:";
    cin >> balance[currentindex];

    bool giveLoan = true;
    if (giveLoan == true)
    {
        return giveloan;
    }
}
bool addOffers()
{
    cout << "How many offers you want to add?";
    cin >> arrSize;
    for (int index = 0; index < arrSize; index++)
    {
        cout << "Enter Offer Name:";
        cin >> offer[index];
        cout << "Enter Amount:";
        cin >> amountOfOffer[index];
        cout << "Offer Type:";
        cin >> offerType[index];
        cout << "Offer Specification:";
        cin >> offerSpec[index];
        cout << endl;
    }
    bool addoffers = true;
    if (addoffers == true)
    {
        return addOffers;
    }
}
bool removeOffers()
{
    int count = 0;
    string offerRemove;
    cout << "Enter Offer Name To Remove:";
    cin >> offerRemove;
    for (int index = 0; index < arrSize; index++)
    {
        if (offerRemove == offer[index])
        {
            offer[index] = {""};
            amountOfOffer[index] = {""};
            offerType[index] = {""};
            offerSpec[index] = {""};
        }
    }
    if (count == 1)
    {
        cout << "Offer is removed.";
    }
    if (count > 1)
    {
        cout << "There was more than one offer with " << endl;
        cout << "same name and all of them are removed now.";
    }
    if (count == 0)
    {
        cout << "Offer does not exist.";
    }
    bool removeoffers = true;
    if (removeoffers == true)
    {
        return removeOffers;
    }
}
bool offerList()
{
    cout << "Offer" << '\t' << "Price" << '\t' << "Type" << '\t' << "Specification" << endl;
    for (int index = 0; index < arrSize; index++)
    {
        cout << offer[index] << '\t' << amountOfOffer[index] << '\t' << offerType[index] << '\t' << offerSpec[index] << endl;
        cout << discountOffer[index] << '\t' << discountAmountOfOffer[index] << '\t' << discountOfferType[index] << '\t' << discountOfferSpec << endl;
    }
    bool offerlist = true;
    if (offerlist == true)
    {
        return offerList;
    }
}
bool saleOffer()
{
    cout << "How many sale offers you want to add?" << endl;
    cin >> arrSize;
    for (int index = 0; index < arrSize; index++)
    {

        cout << "Enter Offer Name:";
        cin >> discountOffer[index];
        cout << "Enter Amount After Discount:";
        cin >> discountAmountOfOffer[index];
        cout << "Offer Type:";
        cin >> discountOfferType[index];
        cout << "Offer Specification:";
        cin >> discountOfferSpec[index];
        cout << endl;
    }
    bool saleoffer = true;
    if (saleoffer == true)
    {
        return saleOffer;
    }
}
bool giftMbs()
{
    cout << "Enter Customer's Phone Number:";
    cin >> phoneNum[currentindex+1];
    cout << "Enter Gift MBs:";
    cin >> mbs;
    cout << "Operation Succussful";

    bool giftmbs = true;
    if (giftmbs == true)
    {
        return giftMbs;
    }
}
bool faqs()
{

    questions();
    bool FAQ = true;
    if (FAQ == true)
    {
        return faqs;
    }
}
void questions()
{
    cout << "1.What kind of app is this?" << endl;
    cout << "2.What are the benefits of this app?" << endl;
    cout << "3.How can you download this app?" << endl;
}
bool viewFeedback()
{
    cout << "Customer name:" << names[currentindex+1] << endl;
    cout << "Customer phone number:" << phoneNum[currentindex+1] << endl;
    cout << "Customer feedback:" << feedback[currentindex];
    bool viewfeedback = true;
    if (viewfeedback == true)
    {
        return viewFeedback;
    }
}
bool deleteAccount()
{
    string phone;
    cout << "Enter phone number of customer:";
    cin >> phone;
    if (phone == phoneNum[currentindex+1])
    {
        cout << "Press 1 to delete account:";
        cin >> option;
        if (option == 1)
        {
            names[currentindex+1] = "";
            phoneNum[currentindex+1] = "";
            passwords[currentindex+1] = "";
            cout << "Account is deleted.";
        }
    }
    else
        cout << "Number does not exist!!!";
    bool deleteaccount = true;
    if (deleteaccount == true)
    {
        return deleteAccount;
    }
}

//--------------------------------------------------------------
///////////////////////////// Functions For Customer............
//--------------------------------------------------------------
bool customerMenu()
{
    cout << "1.Check Balance:" << endl;
    cout << "2.Recharge:" << endl;
    cout << "3.Loan:" << endl;
    cout << "4.Call Offers:" << endl;
    cout << "5.SMS Offers:" << endl;
    cout << "6.Internet Offers:" << endl;
    cout << "7.Sale Offers:" << endl;
    cout << "8.FAQs:" << endl;
    cout << "9.Feedback:" << endl;
    cout << "10.Logout:" << endl;
    cout << "Select an option:";
    cin >> option;
}
bool checkBal()
{
    cout << "Balance (Rs.):" << balance[currentindex];
    bool checkbalance = true;
    if (checkbalance == true)
    {
        return checkBal;
    }
}
bool recharge()
{
    cout << "Enter Credit Card Number:";
    cin >> creditCardNum[currentindex];
    cout << "Enter Amount (Rs.):";
    cin >> balance[currentindex];
    bool rechargeBal = true;
    if (rechargeBal == true)
    {
        return recharge;
    }
}
bool getloan()
{
    int bal = 25;

    cout << "You have successfully recieved Rs. " << bal << endl;
    bool getLoan = true;
    if (getLoan == true)
    {
        return getloan;
    }
}
bool callOffer()
{
    cout << "Offer Name" << '\t' << "Price" << '\t' << "Specification" << endl;
    for (int index = 0; index < 10; index++)
    {
        int count = index + 1;
        if (offerType[index] == "Call" || offerType[index] == "call")
        {
            cout << count << "." << offer[index] << '\t' << amountOfOffer[index] << '\t' << offerSpec[index] << endl;
        }
    }
    cout << "Select one option:";
    cin >> option;
    for (int index = 0; index < 10; index++)
    {
        int count = index + 1;
        if (offerType[index] == "Call" || offerType[index] == "call")
        {
            if (option == count && balance[userCount] >= amountOfOffer[index])
            {
                cout << "Congratulations!Offer is activated.";
            }
            else
                cout << "Sorry not enough balance.Recharge first.";
        }
    }
    bool calloffer = true;
    if (calloffer == true)
    {
        return callOffer;
    }
}
bool smsOffer()
{
    cout << "Offer Name" << '\t' << "Price" << '\t' << "Specification" << endl;
    for (int index = 0; index < 10; index++)
    {
        int count = index + 1;
        if (offerType[index] == "SMS" || offerType[index] == "sms" || offerType[index] == "Sms")
        {
            cout << count << "." << offer[index] << '\t' << amountOfOffer[index] << '\t' << offerSpec[index] << endl;
        }
    }
    cout << "Select one option:";
    cin >> option;
    for (int index = 0; index < 10; index++)
    {
        int count = index + 1;
        if (offerType[index] == "SMS" || offerType[index] == "sms" || offerType[index] == "Sms")
        {
            if (option == count && balance[userCount] >= amountOfOffer[index])
            {
                cout << "Congratulations!Offer is activated.";
            }
            else
                cout << "Sorry not enough balance.Recharge first.";
        }
    }
    bool smsoffer = true;
    if (smsoffer == true)
    {
        return smsOffer;
    }
}
bool internetOffer()
{
    cout << "Offer" << '\t' << "Price" << '\t' << "Specification" << endl;
    for (int index = 0; index < 10; index++)
    {
        int count = index + 1;
        if (offerType[index] == "Internet" || offerType[index] == "internet" || offerType[index] == "net")
        {
            cout << count << "." << offer[index] << '\t' << amountOfOffer[index] << '\t' << offerSpec[index] << endl;
        }
    }
    cout << "Select one option:";
    cin >> option;
    for (int index = 0; index < 10; index++)
    {
        int count = index + 1;
        if (offerType[index] == "Internet" || offerType[index] == "internet" || offerType[index] == "net")
        {
            if (option == count && balance[userCount] >= amountOfOffer[index])
            {
                cout << "Congratulations! Offer is activated.";
            }
            else
                cout << "Sorry not enough balance.Recharge first.";
        }
    }
    bool internetoffer = true;
    if (internetoffer == true)
    {
        return internetOffer;
    }
}
bool saleOfferCustomer()
{
    cout << "Name" << '\t' << "DiscountPrice" << '\t' << "Type" << '\t' << "Specification" << endl;
    for (int index = 0; index < arrSize; index++)
    {
        cout << discountOffer[index] << '\t' << discountAmountOfOffer[index] << '\t' << discountOfferType[index] << '\t' << discountOfferSpec[index] << endl;
    }
    bool saleoffercustomer = true;
    if (saleoffercustomer == true)
    {
        return saleOfferCustomer;
    }
}
bool viewFaqs()
{
    questions();
    cout << endl;
    cout << "Select an option:";
    cin >> option;
    if (option == 1)
    {
        cout << "This is a business applicaion.";
    }
    if (option == 2)
    {
        cout << "This app will save your time and provide you an easy suscribtion to offers.";
    }
    if (option == 3)
    {
        cout << "You can download this app from play store.";
    }
    bool viewfaqs = true;
    if (viewfaqs == true)
    {
        return viewFaqs;
    }
}
bool writeFeedback()
{
    cin.ignore();
    cout << "Feel free to write down your experience here." << endl
         << " Inform us if you want some update." << endl;
        
    cout << "Feedback:";
     getline(cin, feedback[userCount]);
    
    
    bool writefeedback = true;
    if (writefeedback == true)
    {
        return writeFeedback;
    }
}

//////////////////////////////////////////////////File Handling

void saveData()
{
    string line;
    fstream file;
    file.open("Record.txt", ios::out);
    for (int index = 0; index < userCount; index++)
    {
        file << names[index] << ",";
        file << passwords[index] << ",";
        file << phoneNum[index] << ",";
        file << balance[index] << ",";
        file << offer[index] << ",";
        file << amountOfOffer[index] << ",";
        file << offerType[index] << ",";
        file << offerSpec[index] << ",";
        file << discountOffer[index] << ",";
        file << discountAmountOfOffer[index] << ",";
        file << discountOfferType[index] << ",";
        file << discountOfferSpec[index] << ",";
        file << feedback[index] << ",";
        file << creditCardNum[index] << "," << endl;
    }
}
void loadData()
{
    int index = 0;
    string record;
    fstream myfile;
    myfile.open("Record.txt", ios::in);
    while (getline(myfile, record))
    {
        names[index] = getfield(record, 1);
        passwords[index] = getfield(record, 2);
        phoneNum[index] = getfield(record, 3);
        balance[index] = getfield(record, 4);
        offer[index] = getfield(record, 5);
        amountOfOffer[index] = getfield(record, 6);
        offerType[index] = getfield(record, 7);
        offerSpec[index] = getfield(record, 8);
        discountOffer[index] = getfield(record, 9);
        discountAmountOfOffer[index] = getfield(record, 10);
        discountOfferType[index] = getfield(record, 11);
        discountOfferSpec[index] = getfield(record, 12);
        feedback[index] = getfield(record, 13);
        creditCardNum[index] = getfield(record, 14);
        index++;
    }
    userCount = index;
}
string getfield(string record, int field)
{
    int commaCount = 1;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount++;
        }
        else if (commaCount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}
bool invalid(int option)
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore();
        tryAgain();
        return false;
    }
    else
    {
        return true;
    }
}

void tryAgain()
{
    cout << "Choose a valid option!" << endl;

    Sleep(4000);
}