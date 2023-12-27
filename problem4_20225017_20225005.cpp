#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>  
using namespace std;

// Define constants for locations and dirt status (global)
const int A = 0, B = 1,CLEAN = 0,DIRTY = 1;

// Function to randomly generate the location and dirt status
void Percept(int &location, int &status) {
    location = rand() % 2;  // 0 for A, 1 for B
    status = rand() % 2;    // 0 for clean, 1 for dirty
}

// Function to perform the  action based on the percept
void Action(int location, int status, string &history) {
    if (location == 0 && status == 0 )
        {
            history += " A ";
             cout << "( A , Clean )  Move to Right ."<<endl ;
         }
    else if (location == 0 && status == 1)
    {
        history += " A ";
        cout << "( A , Dirty )   Suck the dirt ." << endl;
    }
    else if (location == 1 && status == 0)
    {
        history += " B ";
         cout << "( B , Clean )  Move to Left ." << endl; 
    }
    else if (location == 1 && status == 1)
    {
         history += " B ";
         cout << "( B , Dirty )  Suck the dirt ." << endl ;
    }
   }

int main() {
    srand(time(0));  // seed random number generator 
    int location, status;
    string history = " ";
    // Perform 3 iterations for history 
    for (int i = 0; i < 3; i++) {
        Percept(location, status);
        cout << "Iteration " << i+1 << ": ";
        cout << "Location = " << location << ", Status = " << status << endl;
        Action(location, status,history);
        cout << endl;
    }
    cout<< history;
    return 0;
}


