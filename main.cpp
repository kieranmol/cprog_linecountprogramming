#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string filename = "C:/input.txt";
    ifstream inFile(filename);
    string t;
    int lineCount = 0;
    
    while(getline(inFile, t)) //test condition
        {
        lineCount += 1;
        }

    cout << "The file '" << filename << "' has " << lineCount << " line(s)." << endl;
    inFile.close();

    return 0;
}