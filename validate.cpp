#include <iostream>
#include <string>
using namespace std;


bool isCharacter(const char );
bool isValidateEmail(const string);
void clear();


int main()
  {
    clear();

    string email;

    getline(cin,email);

  while(!0)
    {
  if(isValidateEmail(email))
        {
          cout<<"\n e-mail address:  "<<email <<endl <<endl;
          break; 
        }else
          cout<< "\n\n Invalid e-mail address!"<<endl<<endl;
          cout<<"Example:  isambga@gmail.com"<<endl<<endl;
         getline(cin,email);

         clear();
       }

    return 0;
  }

//Checks if a Character is a Valid a-z A-Z;
  bool isCharacter( const char character)
  {
    return((character >= 'a' && character <='z') || (character >= 'A' && character <= 'Z'));
  }


  bool isValidateEmail(const string email)
    {

      size_t arroba = email.find("@");
      size_t dot = email.find(".");

      // Guarantee if the first is character a-z or A-Z;
      if(!isCharacter(email[0]))
        {

          return 0;
        }
        //!sambga.@com
        if( arroba > dot)
          {

            return 0;
          }
          //!sambga@gmail.
          if((dot >= (email.length()-1)))
            {

              return 0;
            }
         //!sambga@.com
          if((arroba +1) == dot)
          {

            return 0;
          }



        return true; //  isambga@gmail.com
    }
void clear()
  {
    system("clear");
  }
