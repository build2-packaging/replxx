#include <iostream>
//
#include <replxx.hxx>

using namespace std;

int main() {
  replxx::Replxx rx;
  while (true) {
    const char* input = rx.input("prompt> ");
    if (!input) break;
    cout << "echo: '" << input << "'" << endl;
  }
}
