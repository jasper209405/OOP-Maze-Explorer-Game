#include <bits/stdc++.h>
#include "empty.h"
using namespace std;

Empty::Empty() : Block(){
    symbol = {
                {   
                    {' ', ' ', ' '}, 
                    {' ', ' ', ' '}, 
                    {' ', ' ', ' '} 
                }
            };
    type = tEmpty;
}

void Empty::player_touched() {
    //write by yourself
    cout << "Player moved to an empty space!!!";
}