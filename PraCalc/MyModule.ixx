export module MyModule;

import std.core;

namespace MyModule {
    export void MyTestFunc();

    void MyTestFunc()
    {
        using namespace std;
        cout << "Hello" << endl;
    }
}
