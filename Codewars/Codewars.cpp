#include <iostream>
using namespace std;

string tolow(const std::string& str, const int& len) {
  string sstr = "";
  for (int i = 0; i < len; i++) {
    sstr += tolower(str[i]);
  };
  return sstr;
}

string revs(const std::string& str, const int& len) {
  string sstr = "";
  for (int i = len - 1; i >= 0; i--) {
    sstr += str[i];
  }
  return sstr;
}

bool isPalindrom(std::string str) {
  bool res = false;
  int len = distance(begin(str), end(str));
  if (tolow(str, len) == tolow(revs(str, len), len)) res = true;
  return res;
}

int main()
{
  int res = isPalindrom("Ollo");
  std::cout << res;
}
