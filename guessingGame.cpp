/*
Nick H
2/9/2025
A game where you guess numbers
 */

#include <iostream>

int main()
{
  //Set random seed
  srand(time(NULL));

  //Get target number
  int targetNum = rand() % 100 + 1;

  //Loop for answer
  int guess = -1;

  //Playing loop for replayability
  bool playing = true;

  //Guess counter
  int guesses = 0;
  
  while((guess != targetNum) &&  playing)
  {
    guesses++;
    std::cout << "What is your guess? ";
    std::cin >> guess;
    if(guess == targetNum)
    {
      std::cout << "You guessed correctly, you guessed " << guesses << " times. Would you like to play again? ";
      char playAgain = 'Z';
      std::cin >> playAgain;
      if(playAgain == 'Y')
      {
	playing = true;
	guess = -1;
	targetNum = rand() % 100 + 1;
	guesses = 0;
      } else if(playAgain == 'N')
      {
	playing = false;
      }
    } else if(guess < targetNum)
    {
	std::cout << "Too small\n";
    } else if(guess > targetNum)
    {
	std::cout << "Too big\n";
    }
  }
}  
      
