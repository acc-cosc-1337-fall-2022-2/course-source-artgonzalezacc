#include "text_output.h"

using std::cout;
using std::ofstream; using std::ifstream;
using std::string;

void output_text_tofile()
{
    ofstream myfile;// represents a file
    myfile.open("example.dat");
    myfile<<"Write a line to file\n";
    myfile<<"Write another line to file\n";
    myfile<<"Write another line to file\n";
    myfile.close();
}

void read_text_fromfile()
{
    //Read from file
    string line;
    ifstream file("example.dat");
    if(file.is_open())
    {
        while(getline(file, line))
        {
            cout<<line<<"\n";
        }

        file.close();
    }
    else
    {
        cout<<"Cannot open file\n";
    }

}