#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::string;
using std::vector;

int main()
{
    vector<int> numbers{5, 8, 9};//
    cout<<"Capacity: "<<numbers.capacity()<<"\n";
    cout<<"Size: "<<numbers.size()<<"\n";

    numbers.push_back(4);//add an int with value 4
    cout<<"Capacity: "<<numbers.capacity()<<"\n";
    cout<<"Size: "<<numbers.size()<<"\n";

    numbers.push_back(10);//add an int with value 10
    cout<<"Capacity: "<<numbers.capacity()<<"\n";
    cout<<"Size: "<<numbers.size()<<"\n";

    numbers.push_back(12);//add an int with value 10
    cout<<"Capacity: "<<numbers.capacity()<<"\n";
    cout<<"Size: "<<numbers.size()<<"\n";
    numbers.push_back(15);//add an int with value 10
    cout<<"Capacity: "<<numbers.capacity()<<"\n";
    cout<<"Size: "<<numbers.size()<<"\n\n";

    vector<char> chars{'a', 'b', 'c'};
    for(auto ch: chars)
    {
        cout<<ch<<"\n";
    }
    cout<<"\n";

    vector<string> strings{"C++", "Python", "Java"};
    for(auto str: strings)
    {
        cout<<str<<"\n";
    }

    cout<<"\n";
    //create vectors
    vector<int> numbers1(10, 1);
    for(auto n: numbers1)
    {
        cout<<n<<"\n";
    }


    return 0;
}