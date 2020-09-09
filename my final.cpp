#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<iomanip>
#include<string>
void maindoor();
void corridor();
void master_room();
void bathroom();
void kitchen();
void drawing_room();
void guest_room();
void exit();
using namespace std;



   
   int main(){
   	
   string pass ="";
   char ch;
   cout << "please Enter your password\n";
   ch = _getch();
   while(ch !=13){
      pass.push_back(ch);
      cout << '*';
      ch= _getch();
   }
   if(pass == "13"){
   
      cout << "\nAccess granted...\nwelcome home\n";
      Beep(523,900);     
    cin.get();
	 
    }else{
      cout << "\nAccess aborted...\n";
     Beep(89299,1922);
     cin.get();
  
}

                
                

                string authentication_code[3]={"1234","12345","123456"};
   	  string authentication_input="";
               
                cout<<"\t \t \t ///PLEASE ENTER YOUR AUTHENTICATION CODES"<<endl;
                cin>>authentication_input;
                if(authentication_input==authentication_code[1])
                    cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
                else if(authentication_input==authentication_code[2])
                    cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
                else if(authentication_input==authentication_code[3])
                    cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
                else{
                    cout<<"\t \t \t /////Access Denied\\\\\ "<<endl;
                    cout<<"\t \t \t //////Try Again\\\\\\"<<endl;
                }
                
    
    



    
    cout<<"\t \t WELCOME BACK TO HOME ! JARVIS IS GLAD THAT YOU MADE IT SAFELY HOME FROM YOUR TRIP "<<endl;
    cout<<"\t \t \t /////GOOD DAY SIR \\\\\\t \t "<<endl;
    string user_says="";
    cin>>user_says;
    if(user_says=="home")
    {
        cout<< " \t THE HOUSE IS FULLY AIR CONDITIONED SIR"<<endl;
        cout<< " \t THE BACKDOOR LIGHT NEEDS A FIX "<<endl;
        cout<< " \t THE TV IS CURRENTLY TURNED OFF SIR"<<endl;
        cout<< " \t the music is not playing "<<endl;
        if(user_says=="coffee")
        {
                cout<<"\t MAKING COFFEE \t"<<endl;
        }
        else if(user_says=="inbox")
        {
                cout<< " \t YOU HAD A VISITOR NAMED AHSAN AROUND 11 AM "<<endl;
                cout<< " \t you have no new voice mails or telegrams "<<endl;
        }
        else if(user_says=="weather")
        {
                cout<<"\t the sky is clear today however rain is expected tomorrow, dont forget to take an umbrella sir \t"<<endl;
        }
        else if(user_says=="time")
        {
                cout<<"\t its you time sir, you should relax and meditate.  \t"<<endl;
        }
        else if(user_says=="reminders")
        {
                cout<<"\t its your friends kamran birthday in 3 days sir  \t"<<endl;
                cout<<"\t you have an appointment with the dentist tomorrow \t"<<endl;
        }
        else if(user_says=="music")
        {
                cout<<"\t \t TURNING ON MUSIC; PLAYING PIANO "<<endl;
        }
    }
    else if(user_says=="going to")
    {
        cout<<"____";
        cin>>choice;
        if(user_says=="kitchen")
            kitchen();
        else if(user_says=="lounge" || user_says=="drawing room")
            drawing_room();
        else if(user_says=="my room"|| user_says=="master room" )
            master_room();
        else if(user_says=="guest room")
            guest_room();
        else if(user_says=="going out")
            exit();
    }
}
void master_room()
{
    char choice;
    string user_says="";
    cout<<" (light turns on at intensity level 2/6) " <<endl;
    cin>>user_says;
    if(user_says=="home")
    {
        cout<< " \t THE HOUSE IS FULLY AIR CONDITIONED SIR"<<endl;
        cout<< " \t THE BACKDOOR LIGHT NEEDS A FIX "<<endl;
        cout<< " \t THE TV IS CURRENTLY TURNED OFF SIR"<<endl;
        cout<< " \t the music is not playing "<<endl;
        if(user_says=="inbox")
        {
              cout<< " \t YOU HAD A VISITOR NAMED AHSAN AROUND 11 AM "<<endl;
              cout<< " \t you have no new voice mails or telegrams "<<endl;
        }
        else if(user_says=="weather")
        {
              cout<<"\t the sky is clear today however rain is expected tomorrow, dont forget to take an umbrella sir \t"<<endl;
        }
        else if(user_says=="time")
        {
              cout<<"\t its you time sir, you should relax and meditate.  \t"<<endl;
        }
        else if(user_says=="reminders")
        {
              cout<<"\t its your friends kamran birthday in 3 days sir  \t"<<endl;
              cout<<"\t you have an appointment with the dentist tomorrow \t"<<endl;
        }
        else if(user_says=="music on")
        {
              cout<<"\t \t TURNING ON MUSIC; PLAYING PIANO "<<endl;
        }
        else if(user_says=="music off")
        {
              cout<<"\t \t TURNING OFF MUSIC; "<<endl;
        }
        else if(user_says=="turn on the TV")
        {
              cout<<"\t \t turning on the TV "<<endl;
        }
        else if(user_says=="curtains up")
        {
              cout<<"\t \t TURNING CURTAINS UP "<<endl;
              cout<<"\t \t GOOD MORNING SIR "<<endl;
        }
        else if(user_says=="curtains down")
        {
        cout<<"\t \t TURNING CURTAINS DOWN "<<endl;
        cout<<"\t \t GOOD EVENING SIR "<<endl;
        }
        else if(user_says=="coffee")
        {
        cout<<"\t MAKING COFFEE \t"<<endl;
        }
    }
    else if(user_says=="going to")
    {
        cout<<"____";
        cin>>choice;
        if(user_says=="kitchen")
            kitchen();
        else if(user_says=="lounge" || user_says=="drawing room")
            drawing_room();
        else if(user_says=="corridor")
            corridor();
        else if(user_says=="guest room")
            guest_room();
        else if(user_says=="going out")
            exit();
    }
}
void kitchen()
{
    char choice;
    cout<<" (light turns on at intensity level 2/6) " <<endl;
    string user_says="";
    cin>>user_says;
     if(user_says== "coffee")
     {
        cout<<" \t making coffee "<<endl;
        cout<<" \t coffee ready sir "<<endl;
        if (user_says == "lights out ")
        {
             cout<< " \t (turning lights off; )"<<endl;
        }
        else if(user_says == "lights on ")
        {
             cout<< " \t (turning lights on; )"<<endl;
        }
        else if(user_says == "set the oven for 10 mins ")
        {
             cout<< " \t setting the oven for ten minutes"<<endl;
             cout<< " \t meal ready sir"<<endl;
        }
        else if(user_says == " wash the dishes ")
        {
             cout<< " \t dish washer turned on "<<endl;
        }
        else if(user_says == " wash the dishes ")
        {
             cout<< " \t dish washer turned on "<<endl;
        }
    }
    else if(user_says=="going to")
    {
        cout<<"____";
        cin>>choice;
        if(user_says=="my room"|| user_says=="master room" )
            master_room();
        else if(user_says=="lounge" || user_says=="drawing room")
            drawing_room();
        else if(user_says=="corridor")
            corridor();
        else if(user_says=="guest room")
            guest_room();
        else if(user_says=="going out")
            exit();
    }
}
void drawing_room()
{
    char choice;
    cout<<" (light turns on at intensity level 2/6) " <<endl;
    string user_says="";
    cin>>user_says;
    if(user_says=="music on")
    {
        cout<<"\t \t TURNING ON MUSIC; PLAYING PIANO "<<endl;
        if(user_says=="music off")
        {
             cout<<"\t \t TURNING OFF MUSIC; "<<endl;
        }
        else if(user_says=="turn on the TV")
        {
             cout<<"\t \t turning on the TV "<<endl;
        }
        else if(user_says=="weather")
        {
              cout<<"\t the sky is clear today however rain is expected tomorrow, dont forget to take an umbrella sir \t"<<endl;
        }
        else if(user_says=="time")
        {
              cout<<"\t its you time sir, you should relax and meditate.  \t"<<endl;
        }
        else if(user_says == "brightness up ")
        {
              cout<< " \t (lights on @ intensity level 6)"<<endl;
        }
        else if(user_says == "brightness down ")
        {
             cout<< " \t (lights on @ intensity level 2)"<<endl;
        }
        else if(user_says == "lights out ")
        {
            cout<< " \t (turning lights off; night lamps on)"<<endl;
        }
        else if(user_says == "curtains down ")
        {
            cout<< " \t ( curtains down )"<<endl;
        }
        else if(user_says == "curtains up ")
        {
                      cout<< " \t ( curtains up )"<<endl;
        }
    }
    else if(user_says=="going to")
    {
        cout<<"____";
        cin>>choice;
        if(user_says=="my room"|| user_says=="master room" )
            master_room();
        else if(user_says=="kitchen")
            kitchen();
        else if(user_says=="corridor")
            corridor();
        else if(user_says=="guest room")
            guest_room();
        else if(user_says=="going out")
            exit();
    }
}
void guest_room()
{
    char choice;
    cout<<" (light turns on at intensity level 2/6) " <<endl;
    string user_says="";
    cin>>user_says;
    if (user_says == "jarvis" )
    {
         cout<<"\t \t  HOW MAY I HELP YOU SIR"<<endl;
         cin>>user_says;
         if (user_says == "weather")
        {
             cout<<" \t \t its a rainy day tomorrow sir; don't forget to take an umbrella "<<endl;
        }
        else if(user_says == "time")
        {
             cout<<" \t \t it's 9 PM sir "<<endl;
        }
        else if(user_says == "brightness up ")
        {
             cout<< " \t (lights on @ intensity level 6)"<<endl;
        }
        else if(user_says == "brightness down ")
        {
             cout<< " \t (lights on @ intensity level 2)"<<endl;
        }
        else if(user_says == "lights out ")
        {
             cout<< " \t (turning lights off; night lamps on)"<<endl;
        }
        else if(user_says == "curtains down ")
        {
             cout<< " \t ( curtains down )"<<endl;
        }
        else if(user_says == "curtains up ")
        {
             cout<< " \t ( curtains up )"<<endl;
        }
    }
    else if(user_says=="going to")
    {
        cout<<"____";
        cin>>choice;
        if(user_says=="my room"|| user_says=="master room" )
            master_room();
        else if(user_says=="kitchen")
            kitchen();
        else if(user_says=="corridor")
            corridor();
        else if(user_says=="lounge" || user_says=="drawing room")
            drawing_room();
        else if(user_says=="going out")
            exit();
    }
}
void bathroom()
{
    cout<<" light turned on" <<endl;
    string user_says="";
    cin>>user_says;
    if(user_says== "set bathroom temperature to normal")
    {
        cout<<" \t (done sir)  "<<endl;
    }
    else if(user_says == "change mirror gudget")
    {
        cout<< " \t (another gudget selected)"<<endl;
    }
    else if(user_says == "open shower")
    {
        cout<< " \t opened shower "<<endl;

    }
    else if(user_says == "open water recycler")
    {
        cout<< " \t( water recycle)"<<endl;
    }
     else if(user_says == "lights off ")
    {
        cout<< " \t (turning lights off; )"<<endl;
    }
}
void exit()
{
    cout<<" (lights turned off) " <<endl;
    cout<<" (all rooms locked) " <<endl;
    cout<<" SAFE JOURNEY SIR " <<endl;
    exit(0);
}
