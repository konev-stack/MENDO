#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
int main(int argc, char *argv[])
{
  vector<string> a;
  map<string, int> m;
  int n;
  std::cin>>n;
 
  // fill a with strings
std::string sn; //temporary string
 
for(int i = 0; i<=n; i++){
std::getline(std::cin, sn);
 
a.push_back(sn);
}
 
  // count occurrences of every string
  for (int i = 0; i < a.size(); i++)
    {
      map<string, int>::iterator it = m.find(a[i]);
 
      if (it == m.end())
        m.insert(pair<string, int>(a[i], 1));
 
      else
        m[a[i]] += 1;
     }
 
  // find the max
  map<string, int>::iterator it = m.begin();
  for (map<string, int>::iterator it2 = m.begin(); it2 != m.end(); ++it2)
    {
      if (it2 -> second > it -> second)
      it = it2;
    }
 
  cout << it -> first << endl;
  return 0;
}
