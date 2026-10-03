#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;
int main() {
    vector<int> vec;
    stack<int> stk;
    list<int> lst;

    //variables to add/remove from each container
    int a = 2;
    int b = 5;
    int c = 10;
    int d = 25;

    //vector methods

    //adds the variables together
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);


    cout << "vector size ~ " << vec.size() << endl;

    //removes last element
    vec.pop_back();

    cout << "vector size after a pop_back() ~ " << vec.size() << endl;

    cout << "first element ~ " << vec.front() << endl;
    cout << "last element ~ " << vec.back() << endl;

    //first and last element added together (should be 2 + 10)
    int firstAndLast = vec.front() + vec.back();

    cout << "first and last element added together ~ " << firstAndLast << endl;

    //stack methods

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;




    cout << "stack size without anything added ~ " << stk.size() << endl;

    stk.push(a+b);
    stk.push(c+d);
    stk.push(b+c);
    stk.push(d+a);

    cout << "new stack size after push() ~ " << stk.size() << endl;

    cout << "stack values in order ~ \n ~~~~~~~~~~~~~~~~" << endl;

    while (!stk.empty()) {
        cout << stk.top() << endl;
        stk.pop();
    }


    //list methods
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    int loop  = a + b;


    //loop that adds multiple to list at the same time
    for (int i = 0; i < loop; ++i) {
        lst.push_back(a+i);
        cout << "adding next number (" << a+i << ") to list...." << endl;
    }

    //sorts list in ascending order
    lst.sort();
    cout << "size after list sort() ~ " << lst.size() << endl;

    //print out list
    cout << "printing out list" << endl;
    for (int val : lst) {
        cout << val << endl;
    }
    //reverse list
    lst.reverse();
    cout << "printing out list after reversing" << endl;
    for (int val : lst) {
        cout << val << endl;
    }

}