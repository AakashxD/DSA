
#include <iostream>
using namespace std;
void removeOccurrence(string& s, const string& part) {
    size_t found = s.find(part);
    while (found != string::npos) {
        s.erase(found, part.size());
        found = s.find(part);
    }
}
int main() {
    string input = "Hello, world! Hello, universe! Hello, everyone!";
    string substring = "Hello";
    removeOccurrence(input, substring);
 cout << "Modified string: " << input << endl;
    return 0;
}
