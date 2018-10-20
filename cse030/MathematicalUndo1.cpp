#ifndef MathematicalUndo1_cpp
#define MathematicalUndo1_cpp
#include <iostream>
#include "OpStack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    long total = 0;
    Stack* S = new Stack();
    
    char command;
    
    cin >> command;
    long val;
    while (command != 'q'){
        
        if (command == 'a'){
            cin >> val;
            
            total = total + val;
            S->push(val);
        }
        if (command == 's'){
            cin >> val;
            
            total = total - val;
            S->push(val);
        }
        
        if (command == 'z'){
            if (S->isEmpty()){
                cout << "Nothing to undo..." << endl;
            }
            else {
                long rev = S->pop();
                total = total - rev;
            }
        }
        
        cout << "Total: " << total << endl;
        
        cin >> command;
    }
}
#endif
