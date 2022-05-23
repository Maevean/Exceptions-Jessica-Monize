/// Exceptions Jessica Monize.cpp : This file contains the 'main' function. Program execution begins and ends there.
///

#include <iostream>
using namespace std;



int main()
{
    //Name and Age Variables
    string yourName;
    int yourCode;

    //Asking for correct name
    std::cout << "Hello, what is your name?" <<endl;
    std::cin >> yourName;
    try { //if name is Jessica
        if (yourName == "Jessica") {


            std::cout << "Welcome " << yourName << "!" << endl;
        }
        else { //if name is not Jessica
            throw (yourName);
        }
    } //end try name

    //Access denied end program
   catch (string yourName)
   {
       cout << yourName << ", you do not have access to this program." << endl;
       return 0;
   } //end catch name

   //start of access code
    std::cout << "What is your acess code, " << yourName << "?" << endl;
    cin >> yourCode;
    cout << yourName << ", you chose " << yourCode << endl;
    try { //valid access code
        if (yourCode == 323) {

        cout << "Access granted, " << yourName << ", your acces code is " << yourCode << endl;

        }
        else { //wrong code
            throw (yourCode);
        }
    }//end try access code

    catch (int yourCode) //access denied end program
    {
        cout << yourCode << " is invalid, " << yourName << ", you do not have access to this program." << endl;
        return 0;
    }//end catch

}//end int main

