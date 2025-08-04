#include <iostream>
#include <libconfig.h++>
using namespace std;
using namespace libconfig;

int main() {
    Config cfg;
    cfg.readFile("hello-world.cfg");
    string world = cfg.lookup("world");
    cout << "Hello " << world << endl;
    return 0;
}
