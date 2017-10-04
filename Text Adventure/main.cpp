//
//  main.cpp
//  Text Adventure
//
//  Created by Olivia Ave on 10/3/17.
//  Copyright © 2017 Olivia Ave. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
   
    string location;
    string open;
    string dig;
    string unlock;
    string spawn;
    string left;
    string approach;
    cout << "Hello,You have just entered a magical dungeon. There are beasts hiding around each corner. You must survive alone with nothing. You can find things on the floor or in chests that may help you. Beware the dangers that await you as you embark on your adventure through this dungeon.\n";
    cout << "\n You look to the left and you look to the right.\n To your left is a long narrow hallway.\n To your right is a large empty room except a small box that is lying in the center of the room.\n Do you choose to go right room or left hallway?\n";
    cin >> location;
    while (location == "right room") {
        cout << "Do you wish to open the chest?\n";
        cin >> open;
        if ( open == "no")
            cout << "Your insticts are sharp. would you like to go back to the first entrence?";
        cin >> spawn;
        if (spawn == "yes")
            cout << "Would you like to go left or right?";
        cin >> location;
        if (open == "yes")
            cout << "A hord of snakes slithers out, but you see something shining under them. Do you wish to dig through the snakes to get the shimmering object?";
        cin >> dig;
        if (dig == "yes")
            cout << "You find the snakes are not deadly and you pull a key out of the chest. You see a stone on the wall with a key hole in it. Do you wish to unlock the invisible door?\n";
        cin >> unlock;
        if (dig == "no")
            cout << "You head back to the main room and you see the room you were just in to your right and a long narrow hallway to your left. Do you wish to go right or left?";
        cin >> location; <#statements#>
    }
    
    while (location == "left hallway")
        cout << "A large figure lerks in the dark do you wish to apporach it?\n";
        cin >> approach;
        if (approach == "yes")
            cout << "You see and injured beast wimpering for help. Do you wish to help it?\n";
    return 0;
}
