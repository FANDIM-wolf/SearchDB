//02.11.20
//search machine
#include <iostream>
#include <string>
#include "bases.h"

using namespace std;

void search_in_db()
{
   bool stop_search = false ;
   int size_of_array_words;
   string search_word;
   string words[5]={"words" ,"home","friend"};
   size_of_array_words = sizeof(words)/2;
   cout<<"Enter word:"<<endl;
   cin>>search_word;
   for (int i = 0 ; i<=size_of_array_words ; i++)
   {
      if(search_word ==words[i] && stop_search==false )
      {
          cout<<"Word was found!"<<endl;
          stop_search = true; //stop search machine
      }
   }


}

//search in gotten bases
void search_in_bases()
{


    string gotten_word = "";

    bool stop_search_in_bases = false ;
    cout<<"Enter any word :";
    cin>>gotten_word;

    if (gotten_word[0] == 'A' )
    {
        cout<<"First letter is A"<<endl;
    }
    else {
        cout <<"Word was not found "<<endl;
    }

}
int main()
{
    initialization_data();
    search_in_bases();
    return 0;
}
