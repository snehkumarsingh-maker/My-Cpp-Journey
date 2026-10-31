#include <bits/stdc++.h>
using namespace std;


class Account {
public:
    int id; string name; double bal;
    Account(int i = 0, string n = "", double b = 0) : id(i), name(n), bal(b) {}
};

vector<Account> acc;
void load() {
    ifstream f("bank.txt"); Account a;
    while (f >> a.id >> a.name >> a.bal) acc.push_back(a);
}


void save() {
    ofstream f("bank.txt");
    for (auto &a : acc) f << a.id << " " << a.name << " " << a.bal << "\n";
}


Account* findAcc(int id) {
    for (auto &a : acc) if (a.id == id) return &a;
    return nullptr;
}


int main() {
    load();

    int ch;
    do {
        cout << "\n1.Create 2.Deposit 3.Withdraw 4.Show 0.Exit: "; cin >> ch;

        if (ch == 1) {
            Account a; cout << "ID Name(no spaces) Balance: ";
            cin >> a.id >> a.name >> a.bal;
            if (findAcc(a.id)) cout << "ID already exists\n"; else acc.push_back(a);

        } else if (ch == 2 || ch == 3) {
            int id; double amt; cout << "ID Amount: "; cin >> id >> amt;
            Account* a = findAcc(id);
            if (!a) cout << "Not found\n";

            else if (ch == 2) a->bal += amt;

            else if (amt > a->bal) cout << "Insufficient balance\n";
            
            else a->bal -= amt;

        } else if (ch == 4) {
            for (auto &a : acc) cout << a.id << " " << a.name << " Rs." << a.bal << "\n";
        }
        save();
    } while (ch != 0);
}