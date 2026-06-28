#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int randomnumber, guess;
    srand(time(0));

    randomnumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    cout<<"== Guess the Number Game ==="<<endl;
    cout<<"I have chossen a number between 1 and 100."<<endl;

    do{
        cout<<"Enter your guess: ";
        cin>>guess;

        if(guess > randomnumber){
            cout<<"Too high! Try Again."<<endl;
        }
        else if(guess<randomnumber){
            cout<<"Too low! Try Again."<<endl;
        }
        else{
            cout<<"Congratulation! You guessed the number." << endl;
        }
}while (guess != randomnumber);

return 0;
}

