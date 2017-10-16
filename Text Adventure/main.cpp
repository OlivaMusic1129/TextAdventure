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
    string help;
    string enter;
    string choice;
    cout << "Hello,You have just entered a magical dungeon. There are beasts hiding around each corner. You must survive alone with nothing. You can find things on the floor or in chests that may help you. Beware the dangers that await you as you embark on your adventure through this dungeon.\n";
    cout << "\n You look to the left and you look to the right.\n To your left is a long narrow hallway.\n To your right is a large empty room except a small box that is lying in the center of the room.\n Do you choose to go right or left?\n";
   
while (choice != "Quit"){
    
    cin >> choice;
    
    if (choice == "right")
    {
        location = "right";
        
    
    
        if (location == "right")
        {
                cout << "Do you wish to open the chest?\n";
                cin >> open;
                
            if ( open == "no")
            {
                cout << "Your insticts are sharp. would you like to go back to the first entrence?\n";
                cin >> spawn;
                
            
            
                if (spawn == "yes")
                {   cout << "Would you like to go left or right?\n";
                    cin >> location;
                }
            }
        
            if (open == "yes")
            {   cout << "A hord of snakes slithers out, but you see something shining under them. Do you wish to dig through the snakes to get the shimmering object?\n";
                cin >> dig;
            
                if (dig == "no")
                {
                    cout << "You head back to the main room and you see the room you were just in to your right and a long narrow hallway to your left. Do you wish to go right or left?\n";
                    cin >> location;
                }
                
                else if (dig == "yes")
                {   cout << "You find the snakes are not deadly and you pull a key out of the chest. You see a stone on the wall with a key hole in it. Do you wish to unlock the invisible door?\n";
                    cin >> unlock;
                    
                }
       
            
                    if (unlock == "no")
                    {
            
                        cout << "Would you like to return to spawn?\n";
                        cin >> spawn;
                    }
                        if (spawn == "no")
                        {
                            cout << "Your desicions were slow and the trap triggered when entering the room activates. A poison dart shoots you in the neck. You feel hazy and you fall to the ground. Your hp drops to 0. Move faster next time!\n";
                            return 0;
                        }
                        else if (spawn == "yes")
                        {
                            cout << "There is a hallway to your left and a room to your right do you wich to go left or right?\n";
                            cin >> location;
                        }
            }
                    else if (unlock == "yes")
                    {
                        cout << "The door creeks open and the room infront of you is pitch black. Do you wish to enter?\n";
                        cin >> enter;
                    
                        if (enter == "no")
                        {
                            cout << "Do you wish to go back to spawn?\n";
                            cin >> spawn;
                        
                            if (spawn == "yes")
                            {
                                cout << "There is a hallway to your left. Do you wish to go left or right?\n";
                                cin >> location;
                            }
            
                            else if (spawn == "no")
                            {cout << "Well then where do you want to go. You don't want to go into the secret room and you don't want to explore. Fine here's a staircase good bye!\n";
                                return 0;
                            }
                        }
                     
                        if (enter == "yes")
                        {
                         cout << "The room is dark, but you feel a torch. You light the torch and a wich offers to trade with you. She asks for a special stone that has unique markings on it. Do you wish to trade her the stone for imortality and the exit to the dungeon?";
                        }
                    }
            }
     }

    
        else if (choice == "left")
        {
            location = "left";
    
            if (location == "left"){{
            {
                cout << "A large figure lurks in the dark do you wish to apporach it?\n";
                cin >> approach;
    
                if (approach == "yes")
                {
                    cout << "You see an injured beast wimpering for help. Do you wish to help it?\n";
                    cin >> help;
            
            
                    if (help == "yes")
                    {
                        cout << "The beast turn toawrds you and u see a throne stuck in its paw. After pulling the throne out He thanks you and hand you a gem with a symble engraved on it as a gift.\n Do you wish to go forward or move back to spawn?\n";
                        cin >> choice;
                
                            if (choice == "forward")
                            {
                                location = "forward";
                            }
                        
                            else if (choice == "spawn")
                            {
                                location = "spawn";
                            }
            
                        if (location == "forward")
                        {
                            cout << "The giant thorne you pulled from the moster's paw was from a bush. That gaint throne bush is behind the beast.\n You are impaled by a giant thorne and die.\n Thank you for playing!\n";
                            return 0;
                        }
            
                        else if (location == "spawn")
                        {
                            cout << "Do you wish to go to you right or to your left?";
                            cin >> location;
                        }
                    }
                }
                
                    else if (help == "no")
                    {
                        cout << "You frighten the beast and it turns around to attack you. Since you have nothing to fend it off you are struck down and your hp drops to 0. Good bye you selfish monster.\n";
                        return 0;
                    }
                }
            }
            if (approach == "no")
            {
                cout << "The beast is in the way and you can't go around it without disturbing it. Do you wish to go back to the spawn?\n";
                cin >> spawn;
            
    
                if (spawn == "no")
                {
                    cout << "Your poor desicions have showed you your doom. Since you have no where to run the beast runs after you and eats your head. Good Bye and thanks for playing!\n";
                }
                else if (spawn == "yes")
                {
                    cout << "Do you wish to go to the room to your right or the hallway to your left that you just came from?\n";
                    cin >> choice;
                }
            }
        }
    }
}

    return 0;
}
