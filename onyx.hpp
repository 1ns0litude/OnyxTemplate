#pragma once
#include <iostream>
#include <fstream>
#include "templates.hpp"
#include <string>
//menu for Onyx

int help(){

    std::cout << purple;
    std::cout << "Commands:\n";
    std::cout << "exit - [exits the program]\n";
    std::cout << "clear - [clears the screen]\n";
    std::cout << "target - [target you will be taking notes on || Ex: target google.com]\n";
    std::cout << "pwd - [prints your present working directory]\n";
    std::cout << "help - [help menu]\n";
    std::cout << "basic linux commands such as: ls / ls -la, whoami, rm, pwd, etc\n";
    std::cout << reset;
    return 0;
}

int menu(){
    std::string red = "\033[31m";
    std::string green = "\033[32m";
    std::string reset = "\033[0m";
    std::string purple = "\033[35m";
    std::cout << "Modes:\n";
    std::cout << green << "1. CTF - " << red << "Capture the Flag Mode [Note Taking Template for CTF Challenges]\n";
    std::cout << green << "2. WWW - " << red << "Wild Wild West Mode[Note Taking Template for Real World Engagements]\n";
    //take input and ask which mode
    std::string mode;
    std::cout << green << "Which Mode: " << reset;
    std::cin >> mode;

    if (mode == "CTF" || mode == "1"){
        while (true){
            start:
            std::string commands;
            std::cout << green << "Welcome to the Onyx Shell! [CTF MODE]" << reset << std::endl;
            std::cout << red << "^-^ ";
            std::cin >> commands;
            if (commands == "exit"){
                exit(1);
            }
            else if (commands == "clear"){
                system("clear");
                goto start;
            }
            else if (commands == "target"){
                dir_ctf();
                goto start;

            }
            else if (commands == "pwd"){
                system("pwd");
                goto start;
            }
            else if (commands == "help"){
                help();
                goto start;
            }
             else if(commands == "ls"){
                system("ls");
                goto start;
            }
            else if(commands == "ls -la"){
                system("ls -la");
                goto start;
            }

            else if(commands == "whoami"){
                system("whoami");
                goto start;
            }

            else if(commands == "rm"){
                std::string fdelete;
                std::cout << "What file or folder: ";
                std::cin >> fdelete;

                if (std::filesystem::remove_all(fdelete)){
                    std::cout << green << "File or Folder Successfully Removed!" << reset << std::endl;
                    goto start;
                }
                
                goto start;
            }

            else{
                std::cout << "Not a valid option!\n";
            }
        }
    }




    else if (mode == "WWW" || mode == "2"){
        while (true){
            start2:
            std::string commands;
            std::cout << green << "Welcome to the Onyx Shell! [WWW MODE]" << reset << std::endl;
            std::cout << red << "^-^ ";
            std::cin >> commands;
            if (commands == "exit"){
                exit(1);
            }
            else if (commands == "clear"){
                system("clear");
                goto start2;
            }
            else if (commands == "target"){
                dir_www();
                //std::cout << "not implemented yet\n";

            }
            else if (commands == "pwd"){
                system("pwd");
            }

            else if (commands == "help"){
                help();
                goto start2;
            }

            else if(commands == "ls"){
                system("ls");
                goto start2;
            }
            else if(commands == "ls -la"){
                system("ls -la");
                goto start2;
            }

            else if(commands == "whoami"){
                system("whoami");
                goto start2;
            }

            else if(commands == "rm"){
                std::string fdelete2;
                std::cout << "What file or folder: ";
                std::cin >> fdelete2;

                if (std::filesystem::remove_all(fdelete2)){
                    std::cout << green << "File or Folder Successfully Removed!" << reset << std::endl;
                    goto start2;
                }
                
                goto start2;
            }

            else{
                std::cout << "Not a valid option!\n";
            }
        }
    }

    else{
        std::cout << "This is not an option!\n";
        return 1;
    }

    

    return 0;
}