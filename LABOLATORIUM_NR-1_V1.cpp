//
//  main.cpp
//  GABOREK_LABOLATORIUM_NR-1
//
//  Created by Paweł Gaborek on 11/03/2019.
//  Copyright © 2019 Paweł Gaborek. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

int main()
{
    //jezli by nie bylo "using namespace std;" to bym musial zapisac std::string numberWithLetter;
    using namespace std;
    //ponizej okreslam typy zmiennych
    string numberWithLetter;
    string number;
    string temp;
    string change (".");
    char choice;
    int exit=0;
    int i=0;
    int j=0;
    int dot;
    int numberOfdelete=0;
    char continuation;
    
    //rozpoczynam pierwsza petle z menu kontekstowego, zakonczeniem tej petli bedzie
    //
    while(exit == 0)
    {
        //uzywam komende using namespace std;
        //opisuje instrukcje ktore uzytkownik musi wykonac
        cout << "\nWlasnie uruchomiles program nr 1/labolatoirum nr 1\n";
        cout << "Program w zaleznosci od wyboru / w pisania liczby plus znaku\n";
        cout << "Przeksztalci skrocona liczbe zapisana w formie liczb i liter\n";
        cout << "na jej liczbowy odpowiednik\n";
        cout << "Pamietaj ze dla ponizszych liter zostana przeprowadzone odpowiednie przeksztalcenia\n";
        cout << "\nM     przekszalcenie na Milion\n";
        cout << "B     przekszalcenie na Bilion\n";
        cout << "T     przekszalcenie na Trillion\n";
        cout << "Q     przekszalcenie na Quadrillion\n";
        cout << "q     przekszalcenie na Quintilion\n";
        cout << "S     przekszalcenie na sextilion\n";
        cout << "s     przekszalcenie na septilion\n";
        cout << "O     przekszalcenie na Octilion\n";
        cout << "\nPamietaj ! Wielkosc liter ma znaczenie !\n";
        cout << "\nPodaj liczbe i litere:\n";
        cout << "\Pamietaj ze przy podawaniu liczb po przecinku uzywaj wylacznie kropki:\n";
        
        //pobieram tekst za pomoca komendy getline(). Enter namieniony na /0
        // aby zliczyc ile w stringu numberWithLetter jest znakow
        
        getline (std::cin,numberWithLetter);
        cout << "\nPodana przez Ciebie liczba to: \t" << numberWithLetter << "\n";
        //ponizej petla zlicza liczbe znakow w stringu
        number = numberWithLetter;
        
        while (number[i] != '\0')
        {
            cout << number[i] << "\n";
            choice = number[i];
            i++;
        }
        cout << "\nLiczba znakow w liczbie to: \t" << i << "\n";
        
        
        //ponizej sprawdzam czy ostatni znak stringa jest litera tak by moc dokonac wyboru
        if (isalpha(choice))
        {
            cout << "\nLiczba zostanie przeksztalcona przez wartosc symbolu: \t" << choice << "\n";
            switch (choice)
            {
                case 'M':
                {
                    //funkcja insert wstawiam za liczbe ciag zer
                    number.insert( i-1, " 000 000" );
                    //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                    number.erase( number.size() -1 );
                    //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                    //usuwam kropke i zamieniam ja spacja
                    std::size_t found = number.rfind(change);
                    if (found!=std::string::npos)
                        number.replace (found,change.length()," ");
                    cout << "\nTwoja liczba po przeksztalceniu to: \n" << number;
                    cout << "\nSuper ! Wlasnie przeksztalciles podana przez Ciebie liczbe. Gratulacje !";
                    break;
                }
                case 'B':
                {
                    //funkcja insert wstawiam za liczbe ciag zer
                    number.insert( i-1, " 000 000 000" );
                    //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                    number.erase( number.size() -1 );
                    //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                    //usuwam kropke i zamieniam ja spacja
                    std::size_t found = number.rfind(change);
                    if (found!=std::string::npos)
                        number.replace (found,change.length()," ");
                    cout << "\nTwoja liczba po przeksztalceniu to: \n" << number;
                    cout << "\nSuper ! Wlasnie przeksztalciles podana przez Ciebie liczbe. Gratulacje !";
                    break;
                }
                case 'T':
                {
                    //funkcja insert wstawiam za liczbe ciag zer
                    number.insert( i-1, " 000 000 000 000" );
                    //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                    number.erase( number.size() -1 );
                    //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                    //usuwam kropke i zamieniam ja spacja
                    std::size_t found = number.rfind(change);
                    if (found!=std::string::npos)
                        number.replace (found,change.length()," ");
                    cout << "\nTwoja liczba po przeksztalceniu to: \n" << number;
                    cout << "\nSuper ! Wlasnie przeksztalciles podana przez Ciebie liczbe. Gratulacje !";
                    break;
                }
                case 'Q':
                {
                    //funkcja insert wstawiam za liczbe ciag zer
                    number.insert( i-1, " 000 000 000 000 000" );
                    //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                    number.erase( number.size() -1 );
                    //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                    //usuwam kropke i zamieniam ja spacja
                    std::size_t found = number.rfind(change);
                    if (found!=std::string::npos)
                        number.replace (found,change.length()," ");
                    cout << "\nTwoja liczba po przeksztalceniu to: \n" << number;
                    cout << "\nSuper ! Wlasnie przeksztalciles podana przez Ciebie liczbe. Gratulacje !";
                    break;
                }
                case 'q':
                {
                    //funkcja insert wstawiam za liczbe ciag zer
                    number.insert( i-1, " 000 000 000 000 000 000" );
                    //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                    number.erase( number.size() -1 );
                    //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                    //usuwam kropke i zamieniam ja spacja
                    std::size_t found = number.rfind(change);
                    if (found!=std::string::npos)
                        number.replace (found,change.length()," ");
                    cout << "\nTwoja liczba po przeksztalceniu to: \n" << number;
                    cout << "\nSuper ! Wlasnie przeksztalciles podana przez Ciebie liczbe. Gratulacje !";
                    break;
                }
                case 'S':
                {
                    //funkcja insert wstawiam za liczbe ciag zer
                    number.insert( i-1, " 000 000 000 000 000 000 000" );
                    //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                    number.erase( number.size() -1 );
                    //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                    //usuwam kropke i zamieniam ja spacja
                    std::size_t found = number.rfind(change);
                    if (found!=std::string::npos)
                        number.replace (found,change.length()," ");
                    cout << "\nTwoja liczba po przeksztalceniu to: \n" << number;
                    cout << "\nSuper ! Wlasnie przeksztalciles podana przez Ciebie liczbe. Gratulacje !";
                    break;
                }
                case 's':
                {
                    //funkcja insert wstawiam za liczbe ciag zer
                    number.insert( i-1, " 000 000 000 000 000 000 000 000" );
                    //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                    number.erase( number.size() -1 );
                    //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                    //usuwam kropke i zamieniam ja spacja
                    std::size_t found = number.rfind(change);
                    if (found!=std::string::npos)
                        number.replace (found,change.length()," ");
                    cout << "\nTwoja liczba po przeksztalceniu to: \n" << number;
                    cout << "\nSuper ! Wlasnie przeksztalciles podana przez Ciebie liczbe. Gratulacje !";
                    break;
                }
                case 'O':
                {
                    //funkcja insert wstawiam za liczbe ciag zer
                    number.insert( i-1, " 000 000 000 000 000 000 000 000 000" );
                    //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                    number.erase( number.size() -1 );
                    //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                    //usuwam kropke i zamieniam ja spacja
                    std::size_t found = number.rfind(change);
                    if (found!=std::string::npos)
                        number.replace (found,change.length()," ");
                    cout << "\nTwoja liczba po przeksztalceniu to: \n" << number;
                    cout << "\nSuper ! Wlasnie przeksztalciles podana przez Ciebie liczbe. Gratulacje !";
                    break;
                }
                default:
                {
                    cout << "Niestety podales nieprawidlowa litere";
                    cout << "Przejdz do kolejnego wyboru. Mozesz uruchomic program jeszcze raz";
                }
                    
            }
        }
        else
        {
            cout << "\nTwoja liczba nie ulega przeksztalceniu i wynosi:\t" << number;
        }
        while(1)
        {
            cout << "\nCzy chcesz ponownie uruchomic program\n";
            cout << "Dla tak wpisz ''t'', dla nie wpisz ''n'': \n";
            //uzywam polecenia getchar() aby pobrac od uzytkownika znak do deklaracji dalszych krokow
            continuation=getchar();
            
            if(continuation == 't')
            {
                break;
            }
            else if(continuation == 'n')
            {
                exit= 1;
                break;
            }
            else
            {
                cout << "Podales  bledna litere!\n";
            }
        }
        cout << "\nSzkoda ze nie chcesz ponownie uruchomic programu labolatorium nr 1\n";
        cout << "\nMoze nastepnym razem. Powodzenia !!!\n";
    }
    return 0;
}
