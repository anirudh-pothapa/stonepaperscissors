#include<iostream>
#include<ctime>

char getuserchoice()
{
char player;
 std::cout<<"******************************\n";
std::cout<<"ROCK -PAPER -SCISSORS -GAME \n";
std::cout<<"******************************\n";

do
{
    std::cout<<"Choose one of the following\n";
     std::cout<<"******************************\n";
 std::cout<<"r for rock\n";  
std::cout<<"p for paper\n";
std::cout<<"s for scissors\n";
std::cin>>player;
} while (player!='r' && player!='s' && player!='p');


return player;
}


void showchoice(char choice)
{
    switch(choice)
    {
        case 'r': std::cout<<"ROCK\n";
        break;
        case 'p': std::cout<<"paper\n";
        break;
        case 's': std::cout<<"scissors\n";
        break;
    }
}

char computerchoice()
{
     srand(time(0));
     int num=rand()%3+1;
     switch(num)
     {
        case 1: return 'r';
        break;

        case 2:return 'p';
        break;

        case 3:return 's';
        break;
     }
     }


void showwinner(char player,char computer)
{

switch (player)
{
    case 'r': 
    if(computer=='r')
    {
    std::cout<<"its a tie \n";
    break;
}
else if(computer=='p')
{
    std::cout<<"you lose \n";
    break;
}

else{
    std::cout<<"you win \n";
    break;
}

case 'p': if(computer=='p')
    {
    std::cout<<"its a tie \n";
    break;
}
else if(computer=='s')
{
    std::cout<<"you lose \n";
    break;
}

else{
    std::cout<<"you win \n";
    break;
}

case 's': if(computer=='s')
    {
    std::cout<<"its a tie \n";
    break;
}
else if(computer=='r')
{
    std::cout<<"you lose \n";
    break;
}

else{
    std::cout<<"you win \n";
    break;
}

}

}

int main()
{
     char player;
    char computer;

   player=getuserchoice();
    std::cout<<"YOUR CHOICE IS :" <<player<<"\n";
    showchoice(player);

    computer=computerchoice();
    std::cout<<"COMPUTERS CHOICE "<<computer<<"\n";
    showchoice(computer);

    showwinner(player,computer);

    return 0;
}