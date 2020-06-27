#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[100];
   int vowel = 0, consonant = 0;
   cout << "Enter any string: ";
   cin.getline(str, 150);
   
   for(int i = 0; str[i]!='\0'; i++) {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
         str[i]=='o' || str[i]=='u' || str[i]=='A' ||
         str[i]=='E' || str[i]=='I' || str[i]=='O' ||
         str[i]=='U')
      {
         vowelCounter++;
      }
      else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
      {
         consonantCounter++;
      }
   }
   cout << "Vowels in String: " << vowelCounter << endl;
   cout << "Consonants in String: " << consonantCounter << endl;
   return 0;


}