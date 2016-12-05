/*Write a program that calculates the occupancy rate for a hotel. The program should start by asking the user
how many floors the hotel has. A loop should then iterate once for each floor. In each iteration, the loop 
should ask the user for the number of rooms on the floor and how many of them are occupied. After all the 
iterations, the program should display how many rooms the hotel has, how many of them are occupied, how many 
how many are unoccupied, and the percentage of rooms that are occupied. The percentage may be calculated by 
dividing the number of rooms occupied by the number of rooms. */


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    int floorCount, totalFloor, addRoom, addOcc, occNum = 0; 
    
    double occPercent, roomNum = 0;  
    
    cout << "       Welcome to the GLas Vegas hotels\n";
    cout << "=================================================\n";
    cout << "Home away from home and hospitality at its best.\n";
    cout << "We will treat you like never before.\n\n";
    cout << "Check out our rates.\n";
    cout << "-------------------------------------------------\n\n";
    cout << "Single room: $39 -- per night\n";
    cout << "Double room: $60 -- per night\n";
    cout << "Executive room: $120 -- per night\n\n";
    cout << "This program calculates the occupancy of this hotel.\n";
    cout << "-----------------------------------------------------\n";
    
    cout << "Please input the number of floors in the hotel. \n\n";
    
    cin >> totalFloor;
    while (totalFloor < 1 || totalFloor > 100) {
        cout << "That is not possible, please use a valid number of floors. \n";
        cin >> totalFloor;
    }
    
    for (floorCount = 1; floorCount <= totalFloor ; floorCount++) {
        if (floorCount == 13)
        {
            continue;
        }
        
        cout << "How many rooms are on floor " << floorCount << " ?\n";
        cin >> addRoom; 
        
        while (addRoom < 10){
            cout << "That is too low number of rooms, please use a number that is at least 10 .\n";
            cin >> addRoom;
        }
        
        roomNum += addRoom; 
        cout << "How many of the rooms on floor " << floorCount << " are occupied?\n";
        cin >> addOcc;
        
        while (addOcc < 0 || addOcc > addRoom){
            cout << "The number is either lower than 0 or larger than the number of rooms on this floor. Please enter a valid number.\n";
            cin >> addOcc;
        }

        occNum += addOcc; 
    }
    
    occPercent = (occNum / roomNum) * 100;
    
    cout << "\nGlas Vegas Hotels Occupancy Room Summary today\n"
    << "---------------------------------------\n"
    << "Total Rooms in Hotel: " << roomNum << "\n"
    << "Total Rooms Occupied: " << occNum << "\n"
    << "Total Rooms Available: " << (roomNum - occNum) << "\n"
    << "Hotel Occupancy Rate: " << setprecision(3) << occPercent << "% \n";
    
    return 0;
    
}

