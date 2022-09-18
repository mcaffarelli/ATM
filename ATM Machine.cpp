


#include <iostream>
#include <string>
using namespace std;


void menu() //Function to Display Menu.
{
    cout << "1. Sign in \n";
    cout << "2. Balance \n";
    cout << "3. Deposit \n";
    cout << "4. Withdraw \n";
    cout << "5. Exit \n";
}

void menu2() //Display Menu without sign in.
{
    cout << "1. Balance \n";
    cout << "2. Deposit \n";
    cout << "3. Withdraw \n";
    cout << "4. Exit \n";
}

void balance(const double x[], int index) // Balance Function
{

    const int SIZE2 = 4; //index size for balance function 
    // repost user balance;
    cout << " Your balance is : ";
    for (int i = 0; i < SIZE2; i++)
    {
        cout << x[i];
        if (x[0] < 1 && x[1] <= 1)
            cout << " Low Balance "; //Report Low balance
    }


}

void deposit(double x[], int index) // Deposit Function
{
    double depositAmount[4]; //Declair depositAmount[4]


    for (int i = 0; i < 2; i++)
    {
        cout << " Please Enter Amount to Deposit: " << endl;
        for (int i = 0; i < 4; i++)
        {
            cin >> depositAmount[i]; //User inputs deposit Amount
        }


        if (depositAmount[0] < 0)
        {
            cout << "Warning - Invalid Amount \n"; //Warning message

        }

        else // This adds the deposit ammount to the array.
        {

            x[0] = x[0] + depositAmount[0];
            x[1] = x[1] + depositAmount[1];
            x[2] = x[2] + depositAmount[2];
            x[3] = x[3] + depositAmount[3];


            cout << " Your new Total is: \n " << endl; // Displays array

            for (int i = 0; i < 4; i++)
            {
                cout << x[i];

            }
            cout << "\n";
            break;
        }
    }

}

void withdraw(double x[], int index) //Withdraw Function
{
    double withdrawAmount[4];

    for (int i = 0; i < 2; i++)
    {
        cout << " Please Enter Amount to Withdraw: " << endl;
        for (int i = 0; i < 4; i++)
        {
            cin >> withdrawAmount[i]; // User inputs Withdraw Amount
        }


        if (withdrawAmount[0] > x[0]) //Display Warning message
        {
            cout << "Warning - Invalid Amount \n";

        }

        else
        { // Subtracts each index to come up with x[4].

            x[0] = x[0] - withdrawAmount[0];
            x[1] = x[1] - withdrawAmount[1];
            x[2] = x[2] - withdrawAmount[2];
            x[3] = x[3] - withdrawAmount[3];


            cout << " Your new Total is: \n " << endl; // Displays array
            for (int i = 0; i < 4; i++)
            {
                cout << x[i];

            }
            cout << "\n";
            break;
        }
    }

}


int main()
{   // Declair Variables and Arrays.
    int depositAmount;
    int withdrawAmount;
    const int SIZE = 10;
    double accounts[SIZE];
    bool token = false; // use to indicate user is signed in
    int input = 0; // What the user inputs
    int accountNumber[10];
    accountNumber[0] = 0;
    accountNumber[1] = 1;
    accountNumber[2] = 2;
    accountNumber[3] = 3;
    accountNumber[4] = 4;
    accountNumber[5] = 5;
    accountNumber[6] = 6;
    accountNumber[7] = 7;
    accountNumber[8] = 8;
    accountNumber[9] = 9;
    int yourAccountNumber;
    bool nextUser = true; // If you want to exit the program
    const int SIZE2 = 4;
    double x[4];
    x[0] = 1;
    x[1] = 0;
    x[2] = 0;
    x[3] = 0;
    const int SIZE3 = 4;



    while (nextUser) { //While input is not 1- keep displaying message and asking for input.
        do
        {
            menu();
            cout << "Please sign in with option 1";
            cin >> input;
        } while (input != 1);

        do
        {
            // Account number needs to be "0,1,2,3,4,5,6,7,8,9"
            cout << "Enter correct account number (0 -9) ==> ";
            cin >> yourAccountNumber;

            if (yourAccountNumber < 0 || yourAccountNumber > 9)
            {
                cout << " Invalid account number - "; // Warning message

            }

        } while (yourAccountNumber < 0 || yourAccountNumber > 9);
        // Using Token = True to be signed in
        token = true; // signed in
        cout << "Welcome to the ATM Machine!\n";



        while (token == true)
        {
            menu2(); //Display menu2- Does not include "Sign in" because user is already signed in.
            do {
                cout << "Make Selection ====>";
                cin >> input;
            } while (input < 1 || input > 4); // Exclude items >less than 1 and  greater than 4.
            //This is the switch statement that calls each function with the users selection.
            switch (input)
            {

            case 1: balance(x, 4); //Calls Balance Function
                cout << "\n";
                break;

                break;
            case 2: deposit(x, 4); // Calls Deposit Function
                break;
            case 3: withdraw(x, 4); // Calls Withdraw Function
                break;
            case 4: // exit
                cout << " Thank you- Have a great day! \n";
                token = false;
                break;

            }
        }
        cout << " Next User yes = 1 or no = 0 \n";
        cin >> nextUser;
    }



    return 0;
}


