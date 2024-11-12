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
  

