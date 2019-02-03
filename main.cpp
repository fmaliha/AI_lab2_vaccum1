#include<iostream>

using namespace std;

string location;
 string status;

string reflex_vaccum_agent()
{
   cout<<"enter room: ";
   cin>>location;

   cout<<"enter status:";
   cin>>status;

    if (status == "dirty")

        {
            return"suck";


        }


    else if (location =="A")
    {

        return "right";
    }

    else if (location=="B")
    {
        return "left";
    }


}
int main()
{

 reflex_vaccum_agent();

    return 0;
}
