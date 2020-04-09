//
//  main.cpp
//  Chapter 3 Game
//
//  Created by Sangha Yoon on 6/27/18.
//  Copyright © 2018 Sangha Yoon. All rights reserved.
//
//Hangman Adventure inside the zoo.
//Started from 10:00pm (6/17/18)
//Finished at 2:45pm (6/18/18)

//Starting a new, improved version.
//Started from 7:00am (6/18/18)
//Finished at 8:00pm (6/18/18)

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
const int HORIZONTAL_UNITS = 9;
const int VERTICAL_UNITS = 12;
int main(int argc, const char * argv[]) {

    //Initial variables
    char hangmanCurseDoll[VERTICAL_UNITS][HORIZONTAL_UNITS];
    string modeOn;
    
    cout << "Welcome to the \"Hangman Adventure inside the zoo\".\n";
    cout << "In your own adventure, you must guess all four letters of a mysterious animal.\n";
    cout << "You must be careful. If you made seven curses, GAME OVER.\n";
    cout << "Number of curse increases by one if you made an incorrect letter.\n";
    cout << "Do you want to start your hangman adventure?\n";
    cin >> modeOn;
    while(modeOn == "yes" || modeOn == "y")
    {
        //Always change the animal if a user want to play again.
        string animals[10] = {"bear", "duck", "hare", "wolf", "mole", "toad", "duck", "goat", "crab", "lion"};
        srand(static_cast<unsigned int>(time(0)));
        int choice = (rand() % 10);
        string mysteryAnimal = animals[choice];
        string checkMysteryAnimal;
        char inputLetter; //Input variable
        int numberOfMistakes = 0;
        //Initial part
        for(int j = 0; j < VERTICAL_UNITS; j++)
        {
            for(int i = 0; i < HORIZONTAL_UNITS; i++)
            {
                hangmanCurseDoll[j][i] = 'O';
            }
        }
        
        //This while loop is a safeguard for the main function of this game.
        while((mysteryAnimal != checkMysteryAnimal))
        {
            for(int j = 0; j < VERTICAL_UNITS; j++)
            {
                for(int i = 0; i < HORIZONTAL_UNITS; i++)
                {
                    cout << hangmanCurseDoll[j][i] << "  ";
                }
                cout << endl;
                cout << endl;
            }
            cout << endl;
            
            cout << "First letter: " << checkMysteryAnimal[0] << endl;
            cout << "Second letter: " << checkMysteryAnimal[1] << endl;
            cout << "Third letter: " << checkMysteryAnimal[2] << endl;
            cout << "Fourth letter: " << checkMysteryAnimal[3] << endl;
            cout << "\n\n";
            cout << numberOfMistakes<< " curses\n\n";
            cout << "Input: ";
            cin >> inputLetter;
            
            //Check make sure the input letter is correct or not.
            for(int y = 0; y < mysteryAnimal.size(); y++)
            {
                //Correct letter
                if(inputLetter == mysteryAnimal[y])
                {
                    checkMysteryAnimal[y] = mysteryAnimal[y];
                }
            }
            
            //Increase the curse number if the input letter is not correct
            if(mysteryAnimal[0] == checkMysteryAnimal[0] && mysteryAnimal[1] == checkMysteryAnimal[1] && mysteryAnimal[2] == checkMysteryAnimal[2] && mysteryAnimal[3] == checkMysteryAnimal[3]){
                
                cout << "First letter: " << checkMysteryAnimal[0] << endl;
                cout << "Second letter: " << checkMysteryAnimal[1] << endl;
                cout << "Third letter: " << checkMysteryAnimal[2] << endl;
                cout << "Fourth letter: " << checkMysteryAnimal[3] << endl;
                cout << "\n";
                cout << "Congratulation. You have survived from curses.\n";
                cout << "Mysterious animal: ";
                for(int i = 0; i < 4; i++){
                    cout << checkMysteryAnimal[i];
                }
                cout << "\n";
                break;
            }
            
            //Increase the curse number if the input letter is not correct
            if(mysteryAnimal[0] != inputLetter && mysteryAnimal[1] != inputLetter && mysteryAnimal[2] != inputLetter && mysteryAnimal[3] != inputLetter){
                numberOfMistakes++;
            }
            
            if (numberOfMistakes == 1)
            {
                for(int j = 0; j < 3; j++)
                {
                    for(int i = 3; i < 6; i++)
                    {
                        hangmanCurseDoll[j][i] = 'X';
                    }
                }
            }
            else if(numberOfMistakes == 2)
            {
                for(int j = 0; j < 8; j++)
                {
                    hangmanCurseDoll[j][4] = 'X';
                }
            }
            else if(numberOfMistakes == 3)
            {
                for(int i = 0; i < 4; i++)
                {
                    hangmanCurseDoll[4][i] = 'X';
                }
            }
            else if(numberOfMistakes == 4)
            {
                hangmanCurseDoll[8][3] = 'X';
                hangmanCurseDoll[9][2] = 'X';
                hangmanCurseDoll[10][1] = 'X';
                hangmanCurseDoll[11][0] = 'X';
            }
            else if(numberOfMistakes == 5)
            {
                for(int i = 5; i < HORIZONTAL_UNITS; i++)
                {
                    hangmanCurseDoll[4][i] = 'X';
                }
            }
            else if(numberOfMistakes == 6)
            {
                hangmanCurseDoll[8][5] = 'X';
                hangmanCurseDoll[9][6] = 'X';
                hangmanCurseDoll[10][7] = 'X';
                hangmanCurseDoll[11][8] = 'X';
            }
            else if (numberOfMistakes == 7)
            {
                cout << numberOfMistakes << " curses\n";
                cout << "The answer is: " << mysteryAnimal << endl;
                cout << "Game over!!!!!" << endl;
                break;
            }
        }
        cout << "Do you want to try your adventure again?\n";
        cin >> modeOn;
    }
    cout << "See you in next adventure.\n";
    return 0;
}
