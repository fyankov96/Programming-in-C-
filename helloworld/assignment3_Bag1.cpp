// We first import some useful libraries
#include <set>
#include <iostream>
#include <math.h>

using namespace std;

void printSet(set<int> myset)
{

    // Get the iterator
    set<int>::iterator it;
 
    // printing all the elements of the set
    for (it = myset.begin(); it != myset.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
}

int main (){
        

        set <int> c = {};

            string rule;

            string out;

            while(true){
    
                cin >> rule;

                int addNumber = 0;

                int delNumber = 0;

                int checkNumber = 0;


                if (rule == "add"){

                    cin >> addNumber;

                    c.insert(addNumber);


                } else if(rule == "del"){

                    cin >> delNumber;
                       
                    c.erase(delNumber);

                  

                } else if(rule == "qry"){
    
                    cin >> checkNumber;
                    
                    set<int>::iterator it = c.find(checkNumber);

                    if (it != c.end()) {

                   // cout << "Element is present in the set" << endl; 

                    out.append("T");

                    }

                    else {

                    // cout << "Element not found" << endl;

                    out.append("F");

                    }
        
                     
                } else if(rule == "quit"){
                    cout << out;
                    return 0;
                }

                // printSet(c);

            }

        }