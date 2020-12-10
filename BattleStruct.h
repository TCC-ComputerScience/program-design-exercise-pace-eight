using namespace std;

#include <ctime> //Access time function
#include <cstdlib>//Access srand function
#include <iostream>//Access cout and cin
struct Ship{
    string name;
    int length;
    bool *down;
    bool floating;
    //Functions

    //Pre:
    //Post: Ship struct made
    createShip(int size)
    {
        //creates dynamic array from down of size SIZE
        //length =size;
        //floating=true;
    }
    //Pre: ship struct initialized
    //Post: returns true or false if a ship has sunk
    isSunk()
    {
        for(int i=0;i<length;i++)
        {
            //if down[i] is not true, return true to sunk
        }
        //return false
    }
};

struct Grid{
    bool position[8][8];
    char grid[8][8];
    //Pre: ship initialized, Grid initalized
    //Post: ship is set to grid, checks to make sure that there are no collisions. All other grid pieces are set to false except for parts with a ship set
    setShip(Ship s)
    {
        srand(time(0)); //access a truly random table of numbers
    }
    //Pre: ships are set to grid,cout function
    //Post: based on user input, if the x any y coordinates hit a ship or not. Says whether or not it hits the targets. Also marks grid with a . or a H
    shootTarget()
    {
        int x, y;

    }
    //Pre: initialized grid
    //Post: prints out board
    printGrid()
    {

    }

};
