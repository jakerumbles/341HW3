#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

#define NUM_PEEPS 10

//Function that the threads must execute inside
void Club()
{
    //Only -c threads should be running at once.
    //all others need to be blocked.
    cout << "I got in...and having a me party" << endl;
    sleep(rand()%5 + 5);
    cout << "Done.  I am leaving now" << endl;
    
}

int main(int argc, char **argv) 
{
    srand(time(NULL));
    
    //Have each person go into the club and party hard
    for(int i = 0; i < NUM_PEEPS; i++)
        Club();
    
    return 0;
}