#include <iostream>

using namespace std;

class HelloWorld {
    private:
        string s;
    public:
        HelloWorld(string s) {
            this->s = s;
        }
        string getS() {
            return this->s;
        }
};

int main() {
    HelloWorld myHelloWorld("Hello, World!");

    cout << myHelloWorld.getS() << endl;
    return 0;
}