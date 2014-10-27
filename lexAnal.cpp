#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char** argv )
{
//store the file into a string
assert(argc ==2);
ifstream file;
file.open(argv[1]);
string fileContent;
getline(file, fileContent, '\0'); 
for(auto i = fileContent.cbegin(); i != fileContent.cend(); ++i)
{
cout << *i << " ";
}
return 0;
}
