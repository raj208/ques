#include<iostream>
#include<string>
using namespace std;

class football
{
    string PlayerId[100];
    string player_country;
    string player_club;
    string player_name;
    // int a;
    // int b;
    // int c;
    int player_rating[100];
    int counter;
public:
    void initCounter(void) {counter = 0;}
    void set_player(void);
    void display_player(void);
};
void football::set_player(void)
{
    cout<<"Enter the jersey no. of your player "<< counter +1 <<endl;
    cin>>PlayerId[counter];
    cout<<"Enter the player name"<<endl;
    cin>>player_name;
    // a=player_name.length();
    cout<<"Enter players country"<<endl;
    cin>>player_country;
    // b=player_country.length();
    cout<<"enter players club"<<endl;
    cin>>player_club;
    // c=player_club.length();
    cout<<"Enter player rating" <<endl;
    cin>>player_rating[counter];
    counter++;
}
 void football::display_player(void)
 {
    for (int i = 0; i < counter; i++)
    {
        // cout<<"The price of item with Id" <<itemId[i] <<"is" << itemPrice[i] <<endl;
        cout<<"The player with jersey number " <<PlayerId[i] <<" name is  " <<player_name<<endl;
        cout<<player_name <<" is from " <<player_country<<endl;
        cout<<"he plays from club " <<player_club<<endl;
        cout<<player_name<<" rating is "<<player_rating[i]<<endl;
    }
    
 }

int main()
{
    football player;
    player.initCounter();
    player.set_player();
    // player.set_player();
    // player.set_player();
    // player.set_player();
    // player.set_player();
    player.display_player();
    return 0;
}