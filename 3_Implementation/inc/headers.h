/** 
* @file headers.h
* Hangman game code with 3 functions
*
*/
#ifndef __HEADERS_H__
#define __HEADERS_H__
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

/**
*  takes the numLives and returns the string to print the hanging man
* @param[in] numLives
* @return pointer to the correcponding string to print the hanging man
*/
char* draw_platform(int numLives);

/**
*  subtracts the numLives by one when the user enters a wrong guess letter
* @param[in] numLives
* @return reduced numLives
*/
int reduce_Life(int numLives);

/**
*  gets the word that the user has to guess from the predefined set of words 
* @param[in] randomIndex
* @return pointer to the word to be guessed
*/
char* getWord(int randomIndex);

#endif  /* #define __HEADERS_H__ */