#include <iostream>
#include <string>

using namespace std;

import utils;

int main()
{
  //check balance, deposit, withdraw, show menu
  int choice;
  double balance = 800;
  double amount;
  double withdraw;
  double send;
  string name;

  utils::login();
  do
  {
    utils::showMenu();
    cout << "Please, enter your choice: ";
    cin >> choice;
    system("cls");
    switch (choice)
    {
    case 1:
      utils::currentBalance(balance);
      break;
    case 2:
      cout << "Deposit amount " << endl;
      cin >> amount;
      balance += amount;
      cout << "New balance is " << balance << " euros" << endl;
      cout << "\n"
           << endl;
      break;
    case 3:
      cout << "Amount to withdraw " << endl;
      cin >> withdraw;
      if (withdraw <= balance)
      {
        balance -= withdraw;
        utils::currentBalance(balance);
      }
      else
      {
        utils::noFounds();
      }
      break;
    case 4:
      cout << "Introduce recipient name " << endl;
      cin >> name;
      cout << "Introduce the amount to send " << endl;
      cin >> send;
      if (send <= balance)
      {
        balance -= send;
        cout << name << " received " << send << " euros" << endl;
        utils::currentBalance(balance);
      }
      else
      {
        utils::noFounds();
      }
      break;
    default:
      break;
    }
  } while (choice != 5);

  system("pause>0");
  //to execute the pause command
}