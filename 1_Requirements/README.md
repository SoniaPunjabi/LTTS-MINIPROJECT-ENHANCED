# Introduction
Hangman is a fun word guessing game where 2 or more players have to guess a word letter by letter until all their chances are over. I have worked on a code for single player Hangman. There are 6 words in a 2 dimensional array. A random index number is generated and the word corresponding to that index number needs to be guessed. As the number of wrong guesses increases the number of lives/chances decreases and platform corresponding to the number of lives left is printed for every wrong guess.
# Defining our System
![image](https://user-images.githubusercontent.com/64728477/121272530-dc0e7b00-c8e3-11eb-950d-5f4c212f17a3.png)
- The system asks the player for a guess letter and the player enters it.
- The system checks if the letter is correct or not.
- The system reduces a life if the letters is incorrect.
# SWOT ANALYSIS
![image](https://user-images.githubusercontent.com/64728477/121274408-0c581880-c8e8-11eb-8f44-8b1bb7196592.png)

## STRENGTHS
1) Very user friendly, simple and readable.
2)  Very easy to understand and implement. 
3)  Very fun to play. 
4)  Very Entertaining
## WEAKNESSES
1) Single player. 
2) Has a defined set of 6 words only which can be guessed by the player.
3)  Not very complex. 
## OPORTUNITIES
1) The number of words can be increased if required.
2) The number of guessing chances can also be increased.
3)  Can also be extended to multiple players.
## THREATS
1) Limited number of words to choose from.
# 4W'S and 1H
## Who??
* Product owner : Client (Player)
* Developer : L&T Technology Services
* Tester: Sonia (256315)
* Lead / Manager / Architects: Sonia (256315)
## What?
Hangman is a fun word guessing game, can be singleplayer (using this code) and multiplayer. The player gets 10 lives after exhausting these lives he/she loses the game.
## Where?
Can be played on the players laptop or desktop. 
## When?
The dealine of this project is the 13th of June 2021, so it will be completed by then.
## How?
This project is written in C programming language based on Input and Output.
## High level Requirements
|      ID       | Requirement                | Implemented/Future|
| ------------- | -------------------------- | ------------------|
|    HLR01      | List of words              | Implemented       |
|    HLR02      | Life Tracking              | Implemented       |
|    HLR03      | Memory for guessed letters | Implemented       |
## Low level Requirements
|      ID       | Requirement                                              | HLR ID | Implemented/Future|
| ------------- | ---------------------------------------------------------|--------|-------------------|
|    LLR01      | Data for the word List                                   | HLR01  | Implemented       |
|    LLR02      | Function for choosing a word to guess from the word list | HLR01  | Implemented       |
|    LLR03      | Function to reduces the number of lives for a wrong guess| HLR02  | Implemented       |
|    LLR04      | Function for printing the platform for every wrong guess | HLR02  | Implemented       |
|    LLR05      | Entering the correct guessed letter in the string        | HLR03  | Implemented       |





