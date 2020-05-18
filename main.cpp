#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>
#include <regex>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
using namespace std;
 
int main(int argc, char** argv) {
 
string wyszukaj;
cout<<"wpisz co chcesz wyszukac : ";
cin>>wyszukaj;
string input;
 regex regularne(wyszukaj); //tworzymy zmiennš z wyrażeniem
    ofstream plik1;
   ifstream plik;  //deklaracja zmiennej pliku tekstowego
   
   plik.open("a.txt");  //otwarcie pliku
   
   if(plik.good())  //sprawdzenie czy plik istnieje
            while(!plik.eof())  //petla wykonuje sie az program dojedzie do konca pliku
        {
           
              plik>>input;
              cout<<endl;
             if(!cin) break;
                if(input=="koniec") //koniec pętli
                        break;
                if(regex_match(input,regularne)) //sprawdzamy, czy wprowadzony napis pasuje do wyrażenia
                {
                	cout<<<<"["<<"{"<<input<<"}"<<"]"<< "\n";;
                        
                        
                    }

               
                     
        }
               
             
                   plik.close();  //zamkniecie pliku tekstowego
 
cout<<endl;
 
       
 return 0;
}

