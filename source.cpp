#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
/*
How to use :
input :: string that you want to parse into its parts
_out  :: an empty vector that stores each part of input
*/
vector<string> parser(string& input, vector<string>& _out){
    stringstream ss_input(input);
    string syllabus;
    while (ss_input >> syllabus)
    {
        _out.push_back(syllabus);
    }
    return _out;
}
