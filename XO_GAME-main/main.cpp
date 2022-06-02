#include<random>
#include<time.h>
#include<map>
#include<list>
#include<vector>
#include<string>
#include <algorithm>
#include<iostream>
using namespace std;
string o ;
map<string, string> dictionar;
int random(int min, int max) //range : [min, max]
{
   static bool first = true;
   if (first)
   {
      srand( time(NULL) ); //seeding for the first time only!
      first = false;
   }
   return min + rand() % (( max + 1 ) - min);
}

bool firstWin(){
          if (dictionar["a1"] == "O" && dictionar["a2"] == "O"  && dictionar["a3"] == "-"){
            dictionar["a3"] = "O";
            return true;
          }
          else if (dictionar["a1"] == "O" && dictionar["a3"] == "O" && dictionar["a2"] == "-"){
            dictionar["a2"] = "O";
            return true;
          }
          else if (dictionar["a2"] == "O" && dictionar["a3"] == "O" && dictionar["a1"] == "-"){
            dictionar["a1"] = "O";
            return true;
          }
          else if (dictionar["b1"] == "O" && dictionar["b2"] == "O" && dictionar["b3"] == "-"){
            dictionar["b3"] = "O";
            return true;
          }
          else if (dictionar["b1"]== "O" && dictionar["b3"] == "O" && dictionar["b2"] == "-"){
            dictionar["b2"] = "O";
            return true;
          }
          else if (dictionar["b2"] == "O" && dictionar["b3"] == "O" && dictionar["b1"] == "-"){
            dictionar["b1"] = "O";
            return true;
          }
          else if (dictionar["c1"] == "O" && dictionar["c2"] == "O"  && dictionar["c3"] == "-"){
            dictionar["c3"] = "O";
            return true;
          }
          else if (dictionar["c1"] == "O"&& dictionar["c3"]== "O" && dictionar["c2"] == "-"){
            dictionar["c2"] = "O";
            return true;
          }
          else if (dictionar["c2"] == "O" && dictionar["c3"] == "O" && dictionar["c1"] == "-"){
            dictionar["c1"] = "O";
            return true;
          }
          else{
            return false;
          }
}
bool secondWin(){
          if (dictionar["a1"] == "O" && dictionar["b1"] == "O" && dictionar["c1"] == "-"){
            dictionar["c1"] = "O";
            return true;
          }
          else if (dictionar["a1"] == "O" && dictionar["c1"] == "O" && dictionar["b1"] == "-"){
            dictionar["b1"] = "O";
            return true;
          }
          else if (dictionar["b1"] == "O" && dictionar["c1"] == "O" && dictionar["a1"] == "-"){
            dictionar["a1"] = "O";
            return true;
          }
          else if (dictionar["a2"] == "O" && dictionar["b2"] == "O" && dictionar["c2"] == "-"){
            dictionar["c2"] = "O";
            return true;
          }
          else if (dictionar["a2"] == "O" && dictionar["c2"] == "O" && dictionar["b2"] == "-"){
            dictionar["b2"] = "O";
            return true;
          }
          else if (dictionar["b2"]== "O" && dictionar["c2"] == "O" && dictionar["a2"] == "-"){
            dictionar["a2"] = "O";
            return true;
          }
          else if (dictionar["a3"] == "O" && dictionar["b3"] == "O" && dictionar["c3"] == "-"){
            dictionar["c3"] = "O";
            return true;
          }
          else if (dictionar["a3"] == "O" && dictionar["c3"] == "O" && dictionar["b3"] == "-"){
            dictionar["b3"] = "O";
            return true;
          }
          else if (dictionar["b3"] == "O" && dictionar["c3"] == "O" && dictionar["a3"] == "-"){
             dictionar["a3"] = "O";
             return true;
          }
          else{
            return false;
          }
}

bool thirdWin(){
          if (dictionar["a1"] == "O" && dictionar["b2"] == "O" && dictionar["c3"] == "-"){
            dictionar["c3"] = "O";
            return true;
          }
          else if (dictionar["a1"] == "O" && dictionar["c3"] == "O" && dictionar["b2"] == "-"){
            dictionar["b2"] = "O";
            return true;
          }
          else if (dictionar["c1"] == "O" && dictionar["b2"] == "O" && dictionar["a1"] == "-"){
            dictionar["a1"] = "O";
            return true;
          }
          else if (dictionar["a3"] == "O" && dictionar["b2"] == "O" && dictionar["c1"] == "-"){
            dictionar["c1"] = "O";
            return true;
          }
          else if (dictionar["a3"] == "O" && dictionar["c1"] == "O" && dictionar["b2"] == "-"){
            dictionar["b2"] = "O";
            return true;
          }
          else if (dictionar["c1"] == "O" && dictionar["b2"] == "O" && dictionar["a3"] == "-"){
            dictionar["a3"] = "O";
            return true;
          }
          else{
            return false;
          }
}
bool first(){
          if (dictionar["a1"] == "X" && dictionar["a2"] == "X"  && dictionar["a3"] == "-"){
            dictionar["a3"] = "O";
            return true;
          }
          else if (dictionar["a1"] == "X" && dictionar["a3"] == "X" && dictionar["a2"] == "-"){
            dictionar["a2"] = "O";
            return true;
          }
          else if (dictionar["a2"] == "X" && dictionar["a3"] == "X" && dictionar["a1"] == "-"){
            dictionar["a1"] = "O";
            return true;
          }
          else if (dictionar["b1"] == "X" && dictionar["b2"] == "X" && dictionar["b3"] == "-"){
            dictionar["b3"] = "O";
            return true;
          }
          else if (dictionar["b1"]== "X" && dictionar["b3"] == "X" && dictionar["b2"] == "-"){
            dictionar["b2"] = "O";
            return true;
          }
          else if (dictionar["b2"] == "X" && dictionar["b3"] == "X" && dictionar["b1"] == "-"){
            dictionar["b1"] = "O";
            return true;
          }
          else if (dictionar["c1"] == "X" && dictionar["c2"] == "X"  && dictionar["c3"] == "-"){
            dictionar["c3"] = "O";
            return true;
          }
          else if (dictionar["c1"] == "X"&& dictionar["c3"]== "X" && dictionar["c2"] == "-"){
            dictionar["c2"] = "O";
            return true;
          }
          else if (dictionar["c2"] == "X" && dictionar["c3"] == "X" && dictionar["c1"] == "-"){
            dictionar["c1"] = "O";
            return true;
          }
          else{
            return false;
          }
}

bool second(){
          if (dictionar["a1"] == "X" && dictionar["b1"] == "X" && dictionar["c1"] == "-"){
            dictionar["c1"] = "O";
            return true;
          }
          else if (dictionar["a1"] == "X" && dictionar["c1"] == "X" && dictionar["b1"] == "-"){
            dictionar["b1"] = "O";
            return true;
          }
          else if (dictionar["b1"] == "X" && dictionar["c1"] == "X" && dictionar["a1"] == "-"){
            dictionar["a1"] = "O";
            return true;
          }
          else if (dictionar["a2"] == "X" && dictionar["b2"] == "X" && dictionar["c2"] == "-"){
            dictionar["c2"] = "O";
            return true;
          }

          else if (dictionar["a2"] == "X" && dictionar["c2"] == "X" && dictionar["b2"] == "-"){
            dictionar["b2"] = "O";
            return true;
          }

          else if (dictionar["b2"]== "X" && dictionar["c2"] == "X" && dictionar["a2"] == "-"){
            dictionar["a2"] = "O";
            return true;
          }

          //Test a3 b3 c3
          else if (dictionar["a3"] == "X" && dictionar["b3"] == "X" && dictionar["c3"] == "-"){
            dictionar["c3"] = "O";
            return true;
          }

          else if (dictionar["a3"] == "X" && dictionar["c3"] == "X" && dictionar["b3"] == "-"){
            dictionar["b3"] = "O";
            return true;
          }

          else if (dictionar["b3"] == "X" && dictionar["c3"] == "X" && dictionar["a3"] == "-"){
             dictionar["a3"] = "O";
             return true;
          }
          else{
            return false;
          }


}

bool third(){
          if (dictionar["a1"] == "X" && dictionar["b2"] == "X" && dictionar["c3"] == "-"){
            dictionar["c3"] = "O";
            return true;
          }
          else if (dictionar["a1"] == "X" && dictionar["c3"] == "X" && dictionar["b2"] == "-"){
            dictionar["b2"] = "O";
            return true;
          }
          else if (dictionar["c3"] == "X" && dictionar["b2"] == "X" && dictionar["a1"] == "-"){
            dictionar["a1"] = "O";
            return true;
          }
          else if (dictionar["a3"] == "X" && dictionar["b2"] == "X" && dictionar["c1"] == "-"){
            dictionar["c1"] = "O";
            return true;
          }
          else if (dictionar["a3"] == "X" && dictionar["c1"] == "X" && dictionar["b2"] == "-"){
            dictionar["b2"] = "O";
            return true;
          }
          else if (dictionar["c1"] == "X" && dictionar["b2"] == "X" && dictionar["a3"] == "-"){
            dictionar["a3"] = "O";
            return true;
          }
          else{
            return false;
          }
}

template<typename T>
bool contains(list<T> & listOfElements, const T & element)
{
    auto it = find(listOfElements.begin(), listOfElements.end(), element);
    return it != listOfElements.end();
}

main(){ // main
list<string> lst = { "a1", "a2", "a3", "b1", "b2", "b3", "c1", "c2", "c3" };
cout<< " \n";
cout<< "=== raws are LETTERS == columns are NUMBERS ===\n";
cout<<"                GAME STARTED                    \n";
cout<<"  \n";
cout<<"  \n";
cout<<" 0   0   0 ==> a1- a2 - a3"<<endl;
cout<<" 0   0   0 ==> b1 - b2 - b3"<<endl;
cout<<" 0   0   0 ==> c1 - c2 - c3"<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
dictionar["a1"] = "-";
dictionar["a2"] = "-";
dictionar["a3"] = "-";
dictionar["b1"] = "-";
dictionar["b2"] = "-";
dictionar["b3"] = "-";
dictionar["c1"] = "-";
dictionar["c2"] = "-";
dictionar["c3"] = "-";
int counter =0;
while (counter < 9)
{
        string x;
        cout<<"Enter postion: ";
        cin>>x;				   //the user move
        bool result = contains(lst,string(x));
        for(auto word = dictionar.begin(); word != dictionar.end(); ++word){
                if(x == (*word).first)
                    dictionar[x] = "X";
                if( result == 1 )
                    lst.remove(x);
        }
        counter++;
        cout<<dictionar["a1"]<< dictionar["a2"]<<dictionar["a3"]<<endl;
        cout<<dictionar["b1"]<< dictionar["b2"]<<dictionar["b3"]<<endl;
        cout<<dictionar["c1"]<< dictionar["c2"]<<dictionar["c3"]<<endl;

             if(secondWin()== true){
                cout<< "I am second WIN\n";
             }
             else if(firstWin()== true){
                cout<<"I am first WIN\n";
             }
             else if(thirdWin() == true){
                cout<<"I am third WIN\n";
             }
             else if(second()== true){
                cout<< "I am second\n";
             }
             else if(first()== true){
                cout<<"I am first\n";
             }
             else if(third() == true){
                cout<<"I am third\n";
             }
             else{

                int randm = random(0,8);
                int i;
                map<string,string>:: iterator s;
             for( s = dictionar.begin(),i=0; s != dictionar.end(); ++s,i++){
                if( i==randm){
                        if((*s).second == "-"){
                            dictionar[(*s).first] = "O";
                        }
                        else{
                            randm = random(0,8);
                            s = dictionar.begin();
                            i=0;
                        }
                }

             }
            }
            counter++;
            cout<<"Computer move is:"<<o<<endl;
            cout<<dictionar["a1"]<< dictionar["a2"]<<dictionar["a3"]<<endl;
            cout<<dictionar["b1"]<< dictionar["b2"]<<dictionar["b3"]<<endl;
            cout<<dictionar["c1"]<< dictionar["c2"]<<dictionar["c3"]<<endl;
            //who won
            if (dictionar["a1"] == "X" && "X" == dictionar["a2"] && dictionar["a3"] == "X"){
                    cout <<"YOU WON!"<<endl;
                    break;
            }
            else if (dictionar["b1"] == "X" && dictionar["b2"]  == "X" && dictionar["b3"] == "X"){
                cout<< "YOU WON!";
                break;
            }

           else if (dictionar["c1"]  == "X" && dictionar["c2"]  == "X" && dictionar["c3"] == "X"){
                cout<< "YOU WON!";
                break;
           }

           else if (dictionar["a1"] == "X" && dictionar["b1"]  == "X" && dictionar["c1"] == "X")
           {
               cout<< "YOU WON!";
                break;
           }

           else if (dictionar["a2"]  == "X" && dictionar["b2"]  == "X" && dictionar["c2"] == "X"){
                cout << "YOU WON!";
                break;
           }

           else if (dictionar["a3"]  == "X" && dictionar["b3"]  == "X" && dictionar["c3"] == "X"){
                cout<< "YOU WON!";
                break;
           }

           else if (dictionar["c1"]  == "X" && dictionar["b2"]  == "X" && dictionar["a3"] == "X"){
                cout<< "YOU WON!";
                break;
           }

           else if (dictionar["a1"]  == "X" && dictionar["b2"]  == "X" && dictionar["c3"] == "X"){
                cout<< "YOU WON!";
                break;
           }

           else if (dictionar["a1"]  == "O" && dictionar["a2"]  == "O" && dictionar["a3"] == "O"){
                cout<< "COMPUTER WON!";
                break;
           }

           else if (dictionar["b1"]  == "O" && dictionar["b2"]  == "O" && dictionar["b3"] == "O"){
                cout<< "COMPUTER WON!";
                break;
           }

           else if (dictionar["c1"]  == "O" && dictionar["c2"]  == "O" && dictionar["c3"] == "O")
           {
              cout<< "COMPUTER WON!";
                break;
            }
           else if (dictionar["a1"] =="O" && dictionar["b1"] =="O" && dictionar["c1"] == "O")
           {
              cout<< "COMPUTER WON!";
                break;
            }
          else if (dictionar["a2"] =="O" && dictionar["b2"] =="O" && dictionar["c2"] == "O")
           {
              cout<< "COMPUTER WON!";
                break;
            }
           else if (dictionar["a3"] =="O" && dictionar["b3"] =="O" && dictionar["c3"] == "O")
           {
              cout<< "COMPUTER WON!";
                break;
            }
           else if (dictionar["c1"] =="O" && dictionar["b2"] =="O" && dictionar["a3"] == "O")
           {
              cout<< "COMPUTER WON!";
                break;
            }
           else if (dictionar["a1"] =="O" && dictionar["b2"] =="O" && dictionar["c3"] == "O")
            {
              cout<< "COMPUTER WON!";
                break;
            }
 } // while
} // main
