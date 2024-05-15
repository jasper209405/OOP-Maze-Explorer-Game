#include <bits/stdc++.h>
#include "maze.h"
#include "player.h"
using namespace std;

int main(int argc, char** argv){

    for (int level = 1; level <= LEVEL_NUM; level++) {
        SHOW_LEVEL(level);

        
        string input_filename("maze" + to_string(level) + ".txt");

        Maze* maze = new Maze(input_filename);
        Player* player = new Player(1, 1);
        
        
        //Write your own code to generate the keys, obstacle, and ...

        //maze->initializeGameElements();  // You should implement this method in the Maze class

        maze->printMaze(player);

        bool levelComplete = false;
        while (!levelComplete) {
            char direction = player->get_direction();  // Ensure this method captures user input
            cout << "Main -> direction: " << direction << endl;

            if (direction == 'Q' || direction == 'q') {  // Allow quitting the game
                levelComplete = true;
                continue;
            }

            // Player interacts with the current block
            player->move(direction, maze);

            maze->printMaze(player);
            
            // Check for level completion
            //levelComplete = playertouched();  // Implement this logic in Maze class
        }

        delete maze;
        delete player;
    }

    ALL_PASS();
    system("clear");
    return 0;
}
