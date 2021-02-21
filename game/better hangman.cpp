#include <iostream>
#include <string>
using namespace std;
string word,underscore,letter;
int wrong=0;
int main (){
string copy = word;

cout<<"Whats the word?"<<endl;

cin >> word;


for (int x=0; x<30; x++){
cout << endl;
}


while (underscore.size() != word.size()){
underscore.push_back('_');}

cout << underscore << endl;

while(wrong<12){
cin >> letter;


if(letter.size() > 1){
if(letter==word){
cout << "Thats the right word." << endl;
break;
}
else{
cout << underscore << endl;

wrong ++;
}

    }





if(underscore == word){
  cout << "You win!" << endl;
  break;
}



if(wrong==1){
cout << "I" << endl;
}
else if(wrong==2){
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==3){
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==4){
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==5){
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==6){
cout << "I===" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==7){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==8){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I  |" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==9){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==10){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|-" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==11){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|-" << endl;
cout << "I /"  << endl;
cout << "I" << endl;
}
else if(wrong==12){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|-" << endl;
cout << "I / /"<< endl;
cout << "I YOU ARE DEAD" << endl;

cout << "Game over bro! The word was: " << word <<endl;
break;
}
}
}
