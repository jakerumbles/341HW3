/*****************************************************************************
*Name:
*Class: CSC 341
*Date: 26 January 2017
*File Name: forkexample.cpp
*Description: This file is to demonstrate some basics in using the fork() system
*call to create spawned processes.  This will create 2 child processes and have
*all 3 run through a 15 iteration counting loop simultaneously
******************************************************************************/

class Semaphore {

private:
   int num;

public:
   Semaphore(int num) {
      this->num = num;
   }

   void printNum() {
      std::cout << num << std::endl;
   }

};
