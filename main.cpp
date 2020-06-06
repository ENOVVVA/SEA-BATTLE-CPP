#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
char decision;
bool quit=0;
int nDot = 0; long long iterration = 0;
int Playerfield, Enemyfield;
int ships;

void Initialization(){
    cout << "\n\n\n";
}


void clearScreen(long long _length = 99){
    printf ("\n\n\n\n\n\n\n\n");
}

bool timer(bool _return = 0){
 for(long long temp1;temp1<=999999999999;temp1++){
     for(long long temp2;temp2<=999999999999;temp2++)
     if (temp1 == 9999999999990) cout << "Error";
 }
    if (_return == 1);
     return 1;
}

short Menu(){
if (iterration > 0) iterration = 0;
clearScreen();
cout << "          //\\\\           ||‾‾‾‾\\\\               //\\\\             __________     __________    ||                  //#########\n";
cout << "         //  \\\\          ||     \\\\             //  \\\\            ‾‾‾‾‾‾||‾‾‾‾‾‾     ‾‾‾‾‾‾||‾‾‾‾‾‾    ||                 ||‾‾‾‾‾‾‾‾‾‾\n";
cout << "        //    \\\\         ||     ||            //    \\\\                 ||                 ||          ||                 ||          \n";
cout << "       //      \\\\        ||     ||           //      \\\\                ||                 ||          ||                 ||__________\n";
cout << "      //        \\\\       ||____//           //        \\\\               ||                 ||          ||                 ||##########\n";
cout << "      \\\\        //       ||     \\\\         //__________\\\\              ||                 ||          ||                 ||‾‾‾‾‾‾‾‾‾‾\n";
cout << "       \\\\      //        ||      \\\\       //‾‾‾‾‾‾‾‾‾‾‾‾\\\\             ||                 ||          ||                 ||          \n";
cout << "        \\\\    //         ||      ||      //              \\\\            ||                 ||          ||                 ||          \n";
cout << "         \\\\  //          ||      //     //                \\\\           ||                 ||          ||_____________    ||__________\n";
cout << "          \\\\//           ||_____//     //                  \\\\          ||                 ||           \\\\############     \\\\#########\n";
cout << "\n\n\tWELCOME TO THE SEA BATTLE\t\t THE RULE SIMPLE IF YOUR'S ALL SHIPS WILL BE DROWNED, YOU LOSE";
cout << "\n\n\tControls - C\n\tOptions - O\n\tDetails of rules - R\n\tPlay - P\n\tQuit - Q\n\tYour decision : ";
cin >> decision;
if (decision == 'C' | decision == 'c'){

} else if (decision == 'O' | decision == 'o'){

} else if (decision == 'R' | decision == 'r'){

} else if (decision == 'P' | decision == 'p'){
    
} else if (decision == 'Q' | decision == 'q'){
  clearScreen();
  cout << "\n\n\n\n\t\tARE YOU SURE?\n\n\t\tY or N\n\n\tYour decision ? || ";
  cin >> decision;
  if (decision == 'Y' | decision == 'y'){
      cout << "\n\n\tOk, wait a minute";
      cout << timer() << '.' << timer << '.' << timer << '.';
      
      }

  }
  else if (decision == 'N' | decision == 'n') Menu();
 else {
    clearScreen();
    cout << "\n\n\t\tPLEASE TYPE CORRECT SYMBOL. YOUR SYMBOL WAS : " << decision;
     
    }
}

void paintfield(int choose)
{ 
    /* Если выбрана установка кораблей, выводим поле игрока и количество его кораблей */
    if (choose == 1)
    {
    cout << "n  0 1 2 3 4 5 6 7 8 9n";
    for (int count = 0; count < 10; count++) // Выводим 10 столбцов
    { 
        cout << count << " "; // Координаты сбоку поля
        for (int count2 = 0; count2 < 10; count2++)
        {
            
            cout << Playerfield[count][count2] << " "; // Выводим по 10 символов в ряду
            
        }
        cout << endl; // Переходим на следующую строку
    }
        cout << endl;
        
        cout << "Ваши корабли: " << ships[0] << ", " << ships[1] << ", " << ships[2] << ", " << ships[3] << "; n"; // Оставшиеся у игрока корабли
    }
    
    else if(choose == 2) // Если выбрана игра, рисуем два поля
    {
        cout << "n  0 1 2 3 4 5 6 7 8 9t   0 1 2 3 4 5 6 7 8 9n";
        for (int count = 0; count < 10; count++)
        {
            cout << count << " ";
            for (int count2 = 0; count2 < 10; count2++)
            {
                cout << Playerfield[count][count2] << " "; // Поле игрока
            }
            
            cout << "   "; // Растояние между полями 4 пробела
            cout << count << " "; // Координаты сбоку поля
            for (int count2 = 0; count2 < 10; count2++)
            {
                cout << Enemyfield[count][count2] << " ";  // Поле компьютера
            }
            
            cout << endl;
        }
          cout << endl;
    }

int main(){
    Initialization();
    Menu();

}
