//
//  main.cpp
//  Chapter 2's video game
//
//  Created by Sangha Yoon on 6/20/18.
//  Copyright © 2018 Sangha Yoon. All rights reserved.
//Start from 8:30pm at 6/21/18
//Made in 12:34am at 6/22/18

#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string acceptOrDecline;
    
    //Variable for music program
    char pianoNotAnswer;
    
    //Variable for math program
    double mathAnswer;
    
    //Variablea for history program
    string historyAnswer1, historyAnswer2;
    
    //Variable for science program
    int symbolElement;
    
    //Variable for english program
    string synonymAnswer;
    
    //Variable for english program
    string foreignLanguage;
    
    //Variable for etiquette program.
    string etiquetteAnswer;
    
    cout << "Welcome to the test-practice game.\n";
    cout << "This game provides the practice problem on each program, which you struggle the most for tests.\n";
    cout << "Do you want to enter this game?\n";
    cout << "Type \"Yes\" if you agree.";
    getline(cin, acceptOrDecline);
    
    if(acceptOrDecline == "Yes" || acceptOrDecline == "yes")
    {
        int selectTheProgram;
        cout << "1 - Music Program\n" << endl;
        cout << "2 - Math Program\n" << endl;
        cout << "3 - History Program\n" << endl;
        cout << "4 - Science Program\n" << endl;
        cout << "5 - English Program\n" << endl;
        cout << "6 - Foreign Language Program\n" << endl;
        cout << "(Type anything) - I am already ready for the tests.\n" << endl;
        
        cout << "Please choose one of programs, which you struggle the most by typing its number.";
        cin >> selectTheProgram;
        switch(selectTheProgram)
        {
            case 1:
                cout << "Welcome to the music program.\n";
                cout << "What is the lowest note in Piano?\n";
                cin >> pianoNotAnswer;
                while(pianoNotAnswer != 'A'){
                    cout << "Incorrect. Try again.\n";
                    cin >> pianoNotAnswer;
                }
                cout << "Correct. You are such a music pro!\n";
                cout << "See you next time.\n";
                break;
                
                
            case 2:
                cout << "Welcome to the math program.\n";
                cout << "What is the solution to this problem?\n";
                cout << "5 * 6 + 12 / 4 - 1\n";
                cin >> mathAnswer;
                while(mathAnswer != 32){
                    cout << "Incorrect. Try again.\n";
                    cin >> mathAnswer;
                }
                cout << "Math awesome.\n";
                cout << "See you next time.\n";
                break;
             
                
            case 3:
                cout << "Welcome to the history program.\n";
                cout << "During World War II, Hitler decided to get rid of two races completely. Who are they?\n";
                cout << "Make sure all answers should be lower-case.\n";
                cout << "1. ";
                cin >> historyAnswer1;
                cout << "2. ";
                cin >> historyAnswer2;
                while((!(historyAnswer1 == "jews" && historyAnswer2 == "gipsy")) && (!(historyAnswer1 == "gipsy" && historyAnswer2 == "jews"))){
                    cout << "Incorrect. Try again.\n";
                    cout << "1. ";
                    cin >> historyAnswer1;
                    cout << "2. ";
                    cin >> historyAnswer2;
                }
                cout << "Rank: History master.\n";
                cout << "See you next time.\n";
                break;
              
                
            case 4:
                cout << "Welcome to the science program.\n";
                cout << "What is the symbol of copper?\n";
                cout << "Type the number.\n";
                cout << "1. Cr" << endl;
                cout << "2. Cp" << endl;
                cout << "3. Cu" << endl;
                cout << "4. Co" << endl;
                cin >> symbolElement;
                while(symbolElement != 3){
                    cout << "Incorrect. Try again.\n";
                    cin >> symbolElement;
                }
                cout << "Scientific Genius.\n";
                cout << "See you next time.\n";
                break;
                
                
            case 5:
                cout << "Welcome to English program.\n";
                cout << "What is the synonym of \"treacherous\"?" << endl;
                cin >> synonymAnswer;
                while(synonymAnswer != "deceitful" && synonymAnswer != "faithless" && synonymAnswer != "treasonous" && synonymAnswer!= "unfaithful")
                {
                    cout << "Incorrect. Try again.\n";
                    cin >> synonymAnswer;
                }
                cout << "Excellent English Skill.\n";
                cout << "See you next time.\n";
                break;
                
                
            case 6:
                cout << "Welcome to foreign language program.\n";
                cout << "What is the meaning of a japanese word, \"lie\" in English?\n";
                cin >> foreignLanguage;
                while(foreignLanguage != "no" && foreignLanguage != "No")
                {
                    cout << "Incorrect. Try again.\n";
                    cin >> foreignLanguage;
                }
                cout << "Nice job!\n";
                cout << "See you next time.\n";
                break;
                
            default:
                cout << "I am glad you are ready." << endl;
        }
    }
    else{
         cout << "Oh well, See you next time.\n";
    }
    return 0;
}
