#include <iostream>
#include "BankUtilities.h"
#include "BankAccount.h"

using namespace std;

void exampleWithStructs();
void exampleWithOO();

int main()
{
    exampleWithStructs();
    exampleWithOO();

    return 0;
}

void exampleWithStructs()
{
    cout << endl
         << "*** Example with structs" << endl
         << endl;

    // Create Alice's bank account, containing 1000 DKK
    BankAccountStruct accA = {1, "Alice", 1000};
    // Create Bob's bank account, containing 500 DKK
    BankAccountStruct accB = {2, "Bob", 500};

    // Print information of the two accounts
    printAccount(accA);
    printAccount(accB);

    // Transfer money from Alice's account to Bob's one, and then print information of the two accounts
    transferMoney(accA, accB, 10);
    printAccount(accA);
    printAccount(accB);

    // Attempt to transfer money from Alice's account to Bob's one
    // This will fail: Alice does not have 5000 DKK
    transferMoney(accA, accB, 5000);
    printAccount(accA);
    printAccount(accB);


    cout << endl << "Unfortunately, the account fields can be changed.." << endl;
    accA.owner = "Bob";
    accA.balance -= 100;
    printAccount(accA);
}

void exampleWithOO()
{
    cout << endl
         << "*** Example with classes" << endl
         << endl;

    // Create Alice's bank account, containing 1000 DKK
    BankAccount accA = {1, "Alice", 1000};
    // Create Bob's bank account, containing 500 DKK
    BankAccount accB = {2, "Bob", 500};

    // Print information of the two accounts
    accA.print();
    accB.print();

    // Transfer money from Alice's account to Bob's one, and then print information of the two accounts
    accA.transferMoney(accB, 10);
    accA.print();
    accB.print();

    // Attempt to transfer money from Alice's account to Bob's one
    // This will fail: Alice does not have 5000 DKK
    accA.transferMoney(accB, 5000);
    accA.print();
    accB.print();

    accA.transferMoney(accB, 5000);
    accA.print();
    accB.print();

    accA.wrongTrasferMoney(accB, 10);
    accA.print();
    accB.print();
}
