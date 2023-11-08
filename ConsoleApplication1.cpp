#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int playerWin = 0;
    int pcWin = 0;
    const int countWins = 3; // кол-во побед
    /*const int coutAttempts = 5;*/
    const int minRange = 1; // мин число на кубике
    const int maxRange = 6; //  макс число на кубике
    int pcSum, plSum; // сумма выпавших чисел на кубиках
    int pcNum, plNum, pcNum2, plNum2; // числа на кубиках

    while (playerWin<= countWins && pcWin <= countWins) {
        system("cls");
        
        pcNum = minRange + rand() % (maxRange + 1 - minRange);
        pcNum2 = minRange + rand() % (maxRange + 1 - minRange);
        plNum = minRange + rand() % (maxRange + 1 - minRange);
        plNum2 = minRange + rand() % (maxRange + 1 - minRange);
        if (plNum = plNum2) {
            plNum += plNum;
            plNum2 += plNum2;
        }
        else if (pcNum = pcNum2) {
            pcNum += pcNum;
            pcNum2 += pcNum2;
        }
        plSum = plNum + plNum2;
        pcSum = pcNum + pcNum2;
        bool flag = false; //флаг для определения угадано число или нет
        /*for (int i = 0; i < countWins; i++) {*/

            cout << "общий счет: игрок - " << playerWin << " : пк - " << pcWin << endl;
            cout << " пользователю выпало: " << plSum << endl;
            cout << " компьютеру выпало: " << pcSum << endl;
            if (plSum < pcSum) {
                pcWin++;
                cout << "вы проиграли в этом раунде." << endl;
                /*cout << "общий счет: игрок - " << playerWin << " : пк - " << pcWin << endl;*/
            }
            else if (plSum > pcSum) {
                playerWin++;
                cout << "вы выиграли в этом раунде." << endl;
                /*cout << "общий счет: игрок - " << playerWin << " : пк -" << pcWin << endl;*/
            }
            if (playerWin >= countWins) {
                cout << "победил игрок со счетом - " << playerWin << " : " << pcWin << endl;
                break;
            }
            else if (pcWin >= countWins) {
                cout << "победил компьютер со счетом - " << playerWin << " : " << pcWin << endl;
                break;
            
           


            
        }
            
        system("pause");
        
    }
    
    }



