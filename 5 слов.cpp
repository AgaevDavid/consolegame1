#include <iostream>
#include <windows.h>
#include <string.h>
#include <random>
//#include <boost / locale.hpp>
#include <cstring>
#include <cwchar>
#include <ctime>   // Для генерации случайного seed



void printCenteredMessage(const std::string& message) 
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    int len = static_cast<int>(message.length());
    int pos = (columns - len) / 2;

    for (int i = 0; i < pos; i++) 
    {
        std::cout << " ";
    }

    std::cout << message << std::endl;
}

void game_English()
{
    for (int i = 0; i < 5; i++) {
        std::cout << std::endl;
    }
    printCenteredMessage("Hi, do you want to play 5 words?");

    std::cout << std::endl;
    std::cout << "Rules are simple. You have 5 attempts to     guess the word. If the word you entered is   valid and in the correct position, the       letters will be displayed in the table." << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << std::endl;
    }

    std::string words[] = { "grass", "glass", "mouth", "honor", "medal", "santa", "cover", "train", "world", "plate", "thief", "dress", "fruit", "river", "wheel", "zebra", "manor", "grave", "stock", "dough", "slice", "order", "tonne", "phone", "globe", "virus", "humus", "sugar", "board", "crown", "brear", "music"};

    int i = 0;

    std::string placeholderArray[] = { "*", "*", "*", "*", "*" };

    std::string word; 
  

    std::cout << std::endl;

    int arraySize = sizeof(words) / sizeof(words[0]);

    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> distribution(1, 32);

    int random_number = distribution(gen);

    int u = 0;

    std::cout << std::endl;

    for (int i = 0; i < 6; i++)
    {
        std::cout << "Enter the word: ";
        std::cin >> word;

        std::locale loc;
        
        for (int i = 0; i < std::size(word); i++)
        {
            word[i] = std::tolower(word[i], loc);
        }

        std::string random_word = words[random_number];

        if (word == random_word)
        {
            std::cout << std::endl;
            printCenteredMessage("Congratulation! You win!");
            std::cout << std::endl;
            i = 6;
            system("pause");            
        }
        else if (int wordLength = word.length() > 5)
        {
            std::cout << "Your word is too long" << std::endl;
        }
        else if (int wordLength = word.length() < 5)
        {
            std::cout << "Your word is too short" << std::endl;
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                if (word[i] == random_word[i])
                {
                    placeholderArray[i] = word[i];
                }
            }

            std::cout << std::endl;
            std::cout << "Answer: " << std::endl;
            for (int i = 0; i < std::size(placeholderArray); i++)
            {
                std::cout << placeholderArray[i] << " ";

            }
        }

        std::cout << std::endl;

        if (i == 5)
        {
            std::cout << std::endl;
            printCenteredMessage("You lose!");
        }
    } 
}

//void game_Russian()
//{
//    /*std::locale::global(boost::locale::generator().generate(""));*/
//
//    for (int i = 0; i < 5; i++) {
//        std::cout << std::endl;
//    }
//    printCenteredMessage("Привет, давай сыграем в 5 слов?");
//    
//
//    std::cout << std::endl;
//    std::cout << "Правила просты. Тебе дается 5 попыток на то, что б угадать загаданное слово. Если в       введеннном тобою слове верна одна или        несколько букв на верной позиции, то они     отобразятся в таблице." << std::endl;
//    for (int i = 0; i < 5; i++) {
//        std::cout << std::endl;
//    }
//
//    std::string words[] = { "трава", "сумка", "брюки", "покой", "новый", "драка", "цветы", "дверь", "кухня", "плата", "никто", "блуза", "слива", "ведро", "щетка", "зебра", "манеж", "горох", "рынок", "пирог", "кусок", "заказ", "тонна", "корка", "горка", "вирус", "хумус", "уксус", "забор", "алмаз", "топаз", "круиз" };
//   
//
//    int i = 0;
//
//    std::string placeholderArray[] = { "*", "*", "*", "*", "*" };
//
//    std::string word;
//
//
//    std::cout << std::endl;
//
//    int arraySize = sizeof(words) / sizeof(words[0]);
//
//    std::random_device rd;
//    std::mt19937 gen(rd());
//
//    std::uniform_int_distribution<int> distribution(1, 32);
//
//    int random_number = distribution(gen);
//
//    int u = 0;
//
//    std::string Rword = words[random_number];
//
//    std::cout << std::endl;
//
//    for (int i = 0; i < 6; i++)
//    {
//        std::cout << "Введите слово: ";
//        std::cin >> word;
//        /*const char* charWord = word.c_str();*/
//
//        std::locale loc;
//
//        std::string random_word = words[random_number];
//
//        /*for (int i = 0; i < word.length(); i++)
//         {
//             charWord[i] = tolower(word[i]);
//         }*/
//         
//        /*const char* char_Random_Word = Rword.c_str();*/
//
//        /*int comparisonResult = strcmp(charWord, char_Random_Word);*/
//
//        if (word == random_word)
//        {
//            std::cout << std::endl;
//            printCenteredMessage("Поздравляю! Вы выиграли!");
//            std::cout << std::endl;
//            i = 6;
//            system("pause");
//        }
//        else if (int wordLength = word.length() > 5)
//        {
//            std::cout << "Слишком длинное слово" << std::endl;
//        }
//        else if (int wordLength = word.length() < 5)
//        {
//            std::cout << "Слишком короткое слово" << std::endl;
//        }
//        else
//        {
//            for (int i = 0; i < 5; i++)
//            {
//                if (word[i] == random_word[i])
//                {
//                    placeholderArray[i] = word[i];
//                }
//            }
//
//            std::cout << std::endl;
//            std::cout << "Загаданное слово: " << std::endl;
//            for (int i = 0; i < std::size(placeholderArray); i++)
//            {
//                std::cout << placeholderArray[i] << " ";
//
//            }
//        }
//
//            std::cout << std::endl;
//
//            if (i == 5)
//            {
//                std::cout << std::endl;
//                printCenteredMessage("К сожалению вы проиграли");
//            }
//    }
//}


int main()
{
    int choice1 = 0;

    HWND console = GetConsoleWindow();
    RECT rect;
    GetWindowRect(console, &rect);

    MoveWindow(console, rect.left, rect.top, 400, 700, TRUE);

    for (char c = 'Y'; c == 'Y';)
    {
        game_English();
        for (int i = 0; i < 5; i++) {
            std::cout << std::endl;
        }
        printCenteredMessage("More? Y/N");

        std::cin >> c;
        c = std::toupper(c);

        system("cls");
    }
}

    /*for (int i = 0; i < 5; i++) {
            std::cout << std::endl;
            }
    printCenteredMessage("Выберите язык");
    printCenteredMessage("1) Русский");
    printCenteredMessage("2) English");
    
    std::cin >> choice1;

    system("cls");


    switch (choice1) {
    case 1:
        for(char b = 'Д'; b == 'Д';) 
        {
            game_Russian();

            for (int i = 0; i < 5; i++) {
                std::cout << std::endl;
            }

            printCenteredMessage("Еще? Д/Н");

            std::cin >> b;
            b = std::toupper(b); 

            system("cls");
        }
        break;


    case 2:
        for (char c = 'Y'; c == 'Y';)
        {
            game_English();
            for (int i = 0; i < 5; i++) {
            std::cout << std::endl;
            }
            printCenteredMessage("More? Y/N");

            std::cin >> c;
            c = std::toupper(c);

            system("cls");
        }
        break;
    }*/

