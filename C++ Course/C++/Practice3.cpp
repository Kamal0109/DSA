#include <iostream>
using namespace std;

class Account{
    protected:
    int accountNo;
    float interest;
    int balance;
};

class Savings: public Account{
    public:
    void setSavingsData(){
        cout << "Enter Savings Account Number: ";
        cin >> accountNo;
        cout << "Enter Savings Account Interest: ";
        cin >> interest;
        cout << "Enter Savings Account balance: ";
        cin >> balance;
    }

    void getSavingsData(){
        cout << "Savings Account Number: " << accountNo << endl;
        cout << "Savings Account Interest: " << interest << endl;
        cout << "Savings Account balance: " << balance << endl;
    }

};


class Fixed: public Account{
    int tenure;
    public:
    void setFixedData(){
        cout << "Enter Fixed Account Number: ";
        cin >> accountNo;
        cout << "Enter Fixed Account Interest: ";
        cin >> interest;
        cout << "Enter Fixed Account balance: ";
        cin >> balance;
        cout << "Enter Tenure of Fixed Account: ";
        cin >> tenure;
    }

    void getFixedData(){
        cout << "Fixed Account Number: " << accountNo << endl;
        cout << "Fixed Account Interest: " << interest << endl;
        cout << "Fixed Account balance: " << balance << endl;
        cout << "Tenure of Fixed Account: " << tenure << endl;
    }
};


class Customer{
    string name;
    string DOB;
    int PAN;
    int phoneNo;
    string address;
    Savings *s = new Savings();
    Fixed *f = new Fixed();
    int fixedIndex;
    int savingsIndex;

    public:
    Customer(){
        fixedIndex = 0;
        savingsIndex = 0;
        cout << "Enter name: ";
        cin >> name;
        cout << "DOB: ";
        cin >> DOB;
        cout << "PAN number: ";
        cin >> PAN;
        cout << "Phone number: ";
        cin >> phoneNo;
        cout << "Address: ";
        cin >> address;
    }

    void getCustomerDetails(){
        cout << "Name: " << name << endl;
        cout << "DOB: " << DOB << endl;
        cout << "PAN number: " << PAN << endl;
        cout << "Phone number: " << phoneNo << endl;
        cout << "Address: " << address << endl;
    }

    void openSavingsAccount(){
        if(savingsIndex==1){
            cout << "1 Saving Account already exist" << endl;
            return;
        }
        s->setSavingsData();
        savingsIndex++;
    }

    void getSavingsAccountData(){
        s->getSavingsData();
    }


    void closeSavingsAccount(){
        if(savingsIndex==0){
            cout << "Savings account not exist" << endl;
            return;
        }
        savingsIndex--;
        delete(s);
    }

    
    void openFixedAccount(){
        f[fixedIndex++].setFixedData();
    }

    void countFixedAccount(){
        cout << "Number of Fixed Account: " << fixedIndex << endl;
    }

    void getFixedAccount(int pos){
        if(fixedIndex<pos){
            cout << "Fixed Account does not exist" << endl;
            return;
        }
        f[--pos].getFixedData();
    }

};


int main(){
    Customer c1;
    // c1.openSavingsAccount();
    // c1.openSavingsAccount();
    // c1.getSavingsAccountData();
    // c1.closeSavingsAccount();
    // c1.openSavingsAccount();
    c1.openFixedAccount();
    c1.openFixedAccount();
    c1.openFixedAccount();
    c1.countFixedAccount();
    c1.getFixedAccount(3);
}