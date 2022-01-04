export module utils;

namespace utils
{
  void noFounds()
  {
    cout << "Insufficient funds" << endl;
    cout << "\n"
         << endl;
  };

  void currentBalance(int balance)
  {
    cout << "Your current balance is " << balance << " euros" << endl;
    cout << "\n"
         << endl;
  };
  void login()
  {
    string name;
    string password;
    const string pass = "123";
    cout << "***********LOGIN***********" << endl;
    cout << "Please, introduce your username: " << endl;
    cin >> name;
    do
    {
      cout << "Introduce a valid password " << endl;
      cin >> password;
      cout << "***************************" << endl;
      if (password != pass)
      {
        system("cls");
        cout << "Wrong password!!!" << endl;
      }
    } while (password != pass);
    cout << "Welcome " << name << endl;
  };
  void showMenu()
  {
    cout << "***********MENU***********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Send" << endl;
    cout << "5. Exit" << endl;
    cout << "***************************" << endl;
  }
}