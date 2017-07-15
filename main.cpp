#include <iostream>
#include <vector>
#include <chrono>
#include <iomanip>

using namespace std;

const std::string nameString("CXXTests");
const std::string versionString("0.1");

std::string fullNameString(){
    return nameString + " " + versionString;
}

std::string getTimeString()
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    stringstream ss;
    ss << put_time(&tm, "%d-%m-%Y %H-%M-%S");
    return ss.str();
}

int main(int argc, char **argv) {
    cout << fullNameString() << " Start" << endl;

    cout << "Started at: " << getTimeString() << endl;

    vector<string> args(argv,argv+argc);
    if (args.size()>0){
        cout << "Arguments:" << endl;
        for (const auto& a : args)
            cout << "  " << a << endl; 
    }

    cout << "Ended at: " << getTimeString() << endl;
    cout << fullNameString() << " End" << endl;
    return 0;
}
