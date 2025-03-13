#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  
    vector<string> emails;
    string email;

    cout << "Enter emails (type 'done' to finish):" << endl;

    // Take user input 
    // when they type "done" end it
    while (true) {
        getline(cin, email);
        if (email == "done") break; 
        emails.push_back(email);
    }

    // Sort the emails alphabetically
    // uses algorithm library
    sort(emails.begin(), emails.end());

    cout << endl << "Sorted Emails:" << endl;
  
    // output of emails
    for (const string& e : emails) {
        cout << e << endl;
    }

    return 0;
}
