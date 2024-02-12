#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <regex>

using namespace std;

// Assuming a hypothetical sendmail function
void sendmail(const string& to) {
    // Implementation of sendmail function
    cout << "Sending email to: " << to << endl;
    // Your actual implementation of sending an email should go here
}

string extractDomain(const string& email) {
    // Extract domain from email address using regex
    regex pattern("@([a-zA-Z0-9.-]+)");
    smatch match;
    if (regex_search(email, match, pattern)) {
        return match[1];
    } else {
        return "";
    }
}

int main() {
    // Input array of email addresses
    vector<string> emails = {
        "ghi@hotmail.com", "def@yahoo.com", "ghi@gmail.com", "abc@channelier.com",
        "abc@hotmail.com", "def@hotmail.com", "abc@gmail.com", "abc@yahoo.com",
        "def@channelier.com", "jkl@hotmail.com", "ghi@yahoo.com", "def@gmail.com"
    };

    // Map to store the first email address of each domain
    map<string, string> firstEmails;

    // Sort the emails alphabetically
    sort(emails.begin(), emails.end());

    // Iterate through sorted emails and send email to the first address of each domain
    for (const auto& email : emails) {
        string domain = extractDomain(email);

        // If the domain is not present in the map, send email and add it to the map
        if (firstEmails.find(domain) == firstEmails.end()) {
            sendmail(email);
            firstEmails[domain] = email;
        }
    }

    return 0;
}
