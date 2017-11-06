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
    string spawn;
    string left;
    string choice;
    string forward;
    string right;
    string stone = "no";
    string key = "no";
    
cout << "You have just entered a magical dungeon. There are beasts hiding around each corner. You must survive alone with nothing. You can find things on the floor or in chests that may help you. Beware the dangers that await you as you embark on your adventure through this dungeon.\n\n";
cout << "You look to the left and you look to the right.\nTo your left is a long narrow hallway.\nTo your right is a large empty room except a small box that is lying in the center of the room.\nDo you choose to go right or left?\n";
   
    // You should probably start the player in spawn, or just rename spawn.
    // instructions would be cool to have as well
    
while (choice != "Quit"){
    
    cin >> choice;
    
    if (choice == "right") // Left and right should probably be choices in that could be chosen at a location
    {
        location = right;
    }
    else if (choice == "left")
    {
        location = "left";
    }
    
        if (location == right)
        {
            cout << "You see a chest in the middle of the room. Do You wish to 'open' the chest or 'leave' the room?\n";
            cin >> choice;
                
            if ( choice == "leave")
            {
                cout << "Your insticts are sharp. You can go back to spawn if you like.\n";
                cin >> choice;
                
                if (choice == "spawn")
                {
                    location = spawn;
                }
                
                else if ( choice == "no")
                {
                    cout << "Sorry you tripped a trap and you were shot by a poison dart. Better luck next time!\n";
                    return 0;
                }
            }
        
        if (location == "spawn")
            {
                cout << "Would you like to go left, right, or down the steps?\n"; // I changed this line, giving the player the option to go down the stairs
                cin >> choice;
                if (choice == "down")
                {
                    location = "downstairs";
                }
            }
            
        else if (location == "downstairs")
        {
            cout << "You went downstairs. It is very wet and damp. You hear something in the distance. Would you like to investigate it? \n";
            cin >> choice;
            if (choice == "yes")
            {
                cout << "You come across a large monster. Would you like to run or attack? \n";
                cin >> choice;
                if (choice == "run")
                {
                    cout << "you ran away \n";
                    location = "spawn";
                }
                else if (choice == "attack") // They are killed everytime if they choose to attack the monster. You could change any of this if you want.
                {
                    cout << "You were killed. \n";
                    return 0;
                }
                else if (choice == "look")
                {
                    cout << "You have found nothing. Due to your slow actions, the bear attacked and killed you. \n";
                    return 0;
                }
            }
            else if (choice == "no")
            {
                location = "spawn";
            }
        }
            
            if (choice == "open" && key == "yes")
            {
                cout << "You can 'look' around or go back to 'spawn'\n";
                cin >> choice;
                
                if ( choice == "look")
                {
                    cout << "You see a stone on the wall with a key hole in it. Do you wish to 'unlock' the invisible door or go back to 'spawn'?\n";
                    cin >> choice;
                }
                
                else if (choice == "spawn")
                {
                    location = spawn;
                }
            }
            else if (choice == "open" && key == "no")
            {   cout << "A hord of snakes slithers out, but you see something shining under them. Do you wish to 'dig' through the snakes to get the shimmering object or to 'leaveRoom'?\n";
                cin >> choice;
            
                if (choice == "leaveRoom")
                {
                    cout << "You head back to the main room and you see the room you were just in to your right and a long narrow hallway to your left. Do you wish to go right or left?\n";
                    cin >> choice;
                }
                
                else if (choice == "dig")
                {   cout << "You find the snakes are not deadly and you pull a key out of the chest. You can 'look' around or go back to 'spawn'.\n";
                    key= "yes";
                    cin >> choice;
                }
                
                if ( choice == "look")
                {
                    cout << "You see a stone on the wall with a key hole in it. Do you wish to 'unlock' the invisible door or go back to 'spawn'?\n";
                    cin >> choice;
                }
                
                else if (choice == "spawn")
                {
                    location = spawn;
                }
                
                    if (key == "no" && choice == "unlock")
                    {
                        cout << "You must find the key.\n";
                        cin >> choice;
                    }
                
                    else if (key == "yes" && choice == "unlock")
                    {
                        cout << "The door creeks open and the room infront of you is pitch black. Do you wish to 'enter'?\n";
                        cin >> choice;
                    }
            
            
                         if (choice == "no")
                            {
                                cout << "Well then where do you want to go. You don't want to go into the secret room and you don't want to explore. Fine here's a staircase good bye!\n";
                                return 0;
                            }
            }
                     
                        if (choice == "enter")
                        {
                         cout << "The room is dark, but you feel a torch. You light the torch and a wich offers to 'trade' with you. She asks for a special stone that has unique markings on it.\n";
                            cin >> choice;
                            
                            if (stone == "yes" && choice == "trade" )
                            {
                                cout << "You Win! Thank you for playing! Bye!\n";
                                return 0;
                            }
                            
                            else
                            {
                                cout << "There's something wrong. You are missing something or you chose wrong please try something else.\n";
                                cin >> choice;
                            }
                        
            
                        }
        
        }



    
    
            else if (location == "left")
            {
                cout << "A large figure lurks in the dark do you wish to 'approach' it or 'goBack'?\n";
                cin >> choice;
    
                if (choice== "approach")
                {
                    cout << "You see an injured beast wimpering for help. Do you wish to 'help' or 'dontHelp'?\n";
                    cin >> choice;
            
            
                    if (choice == "dontHelp")
                    {
                        cout << "You were to selfish for your own good. The best gets scared and attacks you. After eating your head he licks his lips and rips a throne from his paw. Better luck next time. Good bye.\n";
                        return 0;
                    }
                    
                    else if (choice== "help")
                    {
                        cout << "The beast turns toawrds you and you see a throne stuck in its paw. After pulling the throne out He thanks you and hand you a gem with a symble engraved on it as a gift.\n Do you wish to go 'forward' or move back to 'spawn'?\n";
                        stone = "yes";
                        cin >> choice;
                
                            if (choice == "forward")
                            {
                                location = forward;
                            }
                            else if (choice == "spawn")
                            {
                                location = "spawn";
                            }
            
                        if (location == forward)
                        {
                            cout << "The giant thorne you pulled from the moster's paw was from a bush. That gaint throne bush is behind the beast.\n You are impaled by a giant thorne and die.\n Thank you for playing!\n";
                            return 0;
                        }
            
                        else if (location == "spawn")
                        {
                            cout << "Do you wish to go to you right or to your left?\n";
                            cin >> location;
                        }
                    }
                }
                
                    else if (choice == "leave")
                    {
                        cout << "You frighten the beast and it turns around to attack you. Since you have nothing to fend it off you are struck down and your hp drops to 0. Good bye you selfish monster.\n";
                        return 0;
                    }
                }
            }
            if (choice == "goBack")
            {
                cout << "The beast is in the way and you can't go around it without disturbing it. Do you wish to go back to the spawn?\n";
                cin >> choice;
            
    
                if (choice == "no")
                {
                    cout << "Your poor desicions have showed you your doom. Since you have no where to run the beast runs after you and eats your head. Good Bye and thanks for playing!\n";
                }
                else if (choice == "spawn")
                {
                    location = "spawn";
                }
            }
    

    return 0;
}
