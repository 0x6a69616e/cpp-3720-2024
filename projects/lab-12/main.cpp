// Name:
// Block:
// Lab 12: Email Address

#include <iostream>
#include <map>
using namespace std;

string get_catg(string tld) {
  return tld.length() == 2
             ? "Country code"
             : map<string, string>{{"edu", "Educational institutions"},
                                   {"org", "Not-for-profit organizations"},
                                   {"mil", "Military installations"},
                                   {"net", "Network service providers"},
                                   {"com", "Commercial ventures"}}[tld];
}
string get_tld(string addr) { return addr.substr(addr.find_last_of('.') + 1); }
string get_usr(string addr) { return addr.substr(0, addr.find('@')); }

int main() {
  string addr;
  return (cout << "Enter your email address: ", cin >> addr,
          cout << "\nYour username is: " << get_usr(addr) << "\nYour site is: "
               << get_tld(addr) << " - " << get_catg(get_tld(addr)),
          0);
}