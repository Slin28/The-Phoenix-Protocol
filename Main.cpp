#include <iostream>
#include <string>
using namespace std;

int main() {

int energy = 0;
int attempts = 0;
int choice;

cout << "============================" << endl;
cout << " PHOENIX PROTOCOL" << endl;
cout << "============================" << endl;

cout << "\nSYSTEM FAILURE DETECTED..." << endl;
cout << "Your system has crashed." << endl;
cout << "Time to rebuild yourself." << endl;

while (energy < 100) {

cout << "\nENERGY: " << energy << "/100" << endl;

cout << "\nChoose your recovery action:" << endl;
cout << "1. Learn from the failure (+20)" << endl;
cout << "2. Try a new strategy (+30)" << endl;
cout << "3. Give yourself another chance (+15)" << endl;

cout << "\nEnter choice: ";
cin >> choice;

if (choice == 1) {
energy += 20;
cout << "LESSON SAVED. You are growing!" << endl;
}

else if (choice == 2) {
energy += 30;
cout << "NEW STRATEGY ACTIVATED!" << endl;
}

else if (choice == 3) {
energy += 15;
cout << "RESTARTING... Never give up!" << endl;
}

else {
cout << "Invalid command. Try again." << endl;
}

attempts++;

if (energy > 100) {
energy = 100;
}
}

cout << "\n============================" << endl;
cout << " SYSTEM RESTORED" << endl;
cout << "============================" << endl;

cout << "\nTHE PHOENIX HAS RISEN!" << endl;
cout << "You rebuilt yourself in "
<< attempts << " attempts." << endl;

cout << "\nBOUNCE BACK. STRONGER THAN BEFORE." << endl;

return 0;
}
