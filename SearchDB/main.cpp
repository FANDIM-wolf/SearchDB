#include <iostream>
#include <string>


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

int main()
{
    search_in_db();
    return 0;
}
