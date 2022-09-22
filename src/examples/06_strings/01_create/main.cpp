#include <iostream>
#include<string>

using std::cout; using std::string;

int main()
{
    string name = "C++";
    char letter = 'a';
    
    cout<<letter<<"\n";
    cout<<name<<"\n";
    cout<<"Size: "<<name.size()<<"\n";
    cout<<"Capacity: "<<name.capacity()<<"\n\n";

    //create strings
    string s0("Initial string");
    cout<<s0<<"\n";
    
    string s1;
    s1.append("a");
    s1.append("b");
    s1.append("c");
    s1.push_back('d');
    cout<<s1<<"\n";

    string s2(s0);
    cout<<s2<<"\n";

    string s3(s0, 8, 3);
    cout<<s3<<"\n";

    string s4("Another character sequence", 12);
    cout<<s4<<"\n";

    string s5(10, 'x');
    cout<<s5<<"\n";

    string s6(10, 42);//42 is the *
    cout<<s6<<"\n";

    return 0;
}