#include <bits/stdc++.h>
#include "goal.h"
using namespace std;

Goal::Goal() : Block(){
    symbol = {
                {   
                    {'$', ' ', '$'}, 
                    {' ', '$', ' '}, 
                    {'$', ' ', '$'} 
                }
            };
    type = tGoal;
}

void Goal::player_touched() {
    cout << "Goal!!!!!";
    //write by yourself
}