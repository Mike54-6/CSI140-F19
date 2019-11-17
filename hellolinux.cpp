#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector <string> myDogs =
      {"Pug",
      "Pomeranian",
      "Bulldog",
      "Poodle",
      "Great Dane"
      };
  for (string dog:myDogs)
    {
      cout << dog << endl;
    }
    cout << "These are some types of dogs" << endl;
    
    return EXIT_SUCCESS
    
}
