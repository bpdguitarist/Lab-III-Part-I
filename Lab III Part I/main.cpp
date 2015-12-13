
//  Lab III Part I
//
//  Created by Edgar Esparza on 6/10/15.
//

#include <iostream>
using namespace std;

int main()
{
    int value;
    int count = 0;
    int total;
    
    cout << "Enter one integer or the Sentinel 9999):";
    cin >> value;
    total = count++;
    
    while (value<9999)
    
    {
       total+=value;
        
        count++;
        cout << "Enter the next integer or the Sentinel 9999):";
        cin >> value;
        
        
    }
    
    if (value==9999)
        cout << "The average is: "  <<total/count<< endl;
    else
        cout << "No values were entered." << endl;
    
    return 0; 
}

