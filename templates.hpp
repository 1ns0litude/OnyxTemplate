#pragma once
#include <iostream>
#include <fstream>
#include <filesystem>


/* 


*   --- Different Modes ---
*   CTF Mode 
*   Wild Wild West Mode(Real Life Engagements)
*
*
*/


// --- CTF MODE --- 
std::string red = "\033[31m";
std::string green = "\033[32m";
std::string reset = "\033[0m";
std::string purple = "\033[35m";




int dir_ctf(){

    std::string target;
    std::cout << red << "target: " << reset;
    std::cin >> target;
    if (std::filesystem::create_directories(target)){
        std::cout << green << "Directory created successfully!" << reset << std::endl;
    }
    else{
        std::cout << "File Already Exists!\n";
    }

    std::string base_path = target + "/";
    

    //create enumeration file
    std::ofstream enumeration_file("enumeration.md");

    if (!enumeration_file.is_open()){
        std::cerr << "Error Creating File: " << errno;
    }
    enumeration_file << "<h1><font color='red'> Content Discovery </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> Technologies </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> WPScan </font></h1>\n";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> Functionalities </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> Priv-Esc Enumeration  </font></h1>";
    enumeration_file.close();


    //create privilege escalation file
    std::ofstream privesc("privilege-escalation.md");
    if (!privesc.is_open()){
        std::cerr << "Error Creating File: " << errno;
    }

    privesc.close();
    
    //create checklist file
    std::ofstream checklist("checklist.md");
    if (!checklist.is_open()){
        std::cerr << "Error Creating File: " << errno;
    }

    checklist.close();


    std::ofstream writeup("writeup.md");

    if (!writeup.is_open()){
        std::cerr << "Error Creating File: " << errno;
    }

    writeup.close();

    //check if file exists
    if(!std::filesystem::exists("recon.md")){
        std::ofstream recon_file("recon.md");
        if(recon_file.is_open()){
        recon_file << "<h1><b><font color='red'> nmap scan </h1></b></font>";
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << "<i><font color=violet> initial </i></font>";
        recon_file << std::endl;
        recon_file << "<i><font color=violet> all ports </i></font>";
        recon_file << std::endl;
        recon_file << "<i><font color=violet> udp scan </i></font>";
        recon_file << std::endl;
        recon_file << "<i><font color=violet> script vuln scan </i></font>";
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << "<h1><b><font color='red'> Subdomains </h1></b></font>";

        recon_file.close();
        } else{
            std::cerr << "Error Creating File: " << errno;
        }
    }



//check if file exists
    if(!std::filesystem::exists("creds.md")){
        //create the file
        std::ofstream creds_file("creds.md");

        if(creds_file.is_open()){
            creds_file.close();
        }else{
            std::cerr << "Error Creating File: " << errno;
        }
    }








    





    // moving all created files from current directory to target directory
    
    std::filesystem::path old_enumeration = "enumeration.md";
    std::filesystem::path new_enumeration = target + "/enumeration.md";

    std::filesystem::rename(old_enumeration, new_enumeration);

    std::filesystem::path old_checklist = "checklist.md";
    std::filesystem::path new_checklist = target + "/checklist.md";

    std::filesystem::rename(old_checklist, new_checklist);

    std::filesystem::path old_writeup = "writeup.md";
    std::filesystem::path new_writeup = target + "/writeup.md";

    std::filesystem::rename(old_writeup, new_writeup);

    

    return 0;
}




// --- WWW MODE ---

int dir_www(){

    std::string target;
    std::cout << red << "target: " << reset;
    std::cin >> target;
    if (std::filesystem::create_directories(target)){
        std::cout << green << "Directory created successfully!" << reset << std::endl;
    }
    else{
        std::cout << "File Already Exists!\n";
    }

    std::string base_path = target + "/";
    

    //create enumeration file
    std::ofstream enumeration_file("enumeration.md");

    if (!enumeration_file.is_open()){
        std::cerr << "Error Creating File: " << errno;
    }
    enumeration_file << "<h1><font color='red'> Content Discovery </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> Technologies </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> WPScan </font></h1>\n";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> nuclei </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> Functionalities </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> Crawled Sites </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> Manual Parameter/Endpoint Fuzzing  </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> Interesting Caido/Burpsuite Findings  </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> Priv-Esc Enumeration   </font></h1>";
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << std::endl;
    enumeration_file << "<h1><font color='red'> Possible Attack Vectors to Look at </font></h1>";
    enumeration_file.close();

    //create checklist file
    std::ofstream checklist("checklist.md");
    if (!checklist.is_open()){
        std::cerr << "Error Creating File: " << errno;
    }
    
    checklist.close();


    std::ofstream writeup("writeup.md");

    if (!writeup.is_open()){
        std::cerr << "Error Creating File: " << errno;
    }

    writeup.close();

    

    if (!std::filesystem::exists("hosts.md")){
            
        std::ofstream recon_file("hosts.md");

        if(recon_file.is_open()){
        recon_file << "<h1><b><font color='red'> Domains </h1></b></font>";
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << "<h1><b><font color=violet> Subdomains </h1></b></font>";
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << "<h1><b><font color=violet> Hosts with Webservers </h1></b></font>";
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << "<h1><b><font color=violet> Hosts with WAFs </h1></b></font>";
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file << std::endl;
        recon_file.close();
    } else{
        std::cerr << "Error Opening File: " << errno;
    }


}
    
    
    
    if(!std::filesystem::exists("creds.md")){
        std::ofstream creds_file("creds.md");

        if(creds_file.is_open()){
            creds_file.close();

        } else{
            std::cerr << "Error Opening File: " << errno;
        }
    }







    std::ofstream priority_file("priority.md");

    if(!priority_file.is_open()){
        std::cerr << "Error Creating File: " << errno;
    }

    priority_file << "<h1><font color='red'> High Priority Vulns </font></h1>";
    priority_file << std::endl;
    priority_file << std::endl;
    priority_file << std::endl;
    priority_file << "<h1><font color='yellow'> Medium Priority Vulns </font></h1>";
    priority_file << std::endl;
    priority_file << std::endl;
    priority_file << std::endl;
    priority_file << "<h1><font color='green'> Low Priority Vulns </font></h1>";
    priority_file.close();


    std::ofstream nmap_file("nmap.md");

    if(!nmap_file.is_open()){
        std::cerr << "Error Creating File: " << errno;
    }

    nmap_file << "<b><i><font color='violet'> Initial Scan </b></i></font>";
    nmap_file << std::endl;
    nmap_file << std::endl;
    nmap_file << std::endl;
    nmap_file << "<b><i><font color='violet'> All Ports Scan </b></i></font>";
    nmap_file << std::endl;
    nmap_file << std::endl;
    nmap_file << std::endl;
    nmap_file << "<b><i><font color='violet'> UDP Scan </b></i></font>";
    nmap_file << std::endl;
    nmap_file << std::endl;
    nmap_file << std::endl;
    nmap_file << "<b><i><font color='violet'> Script Vuln Scan </b></i></font>";
    nmap_file << std::endl;
    nmap_file.close();






    





    // moving all created files from current directory to target directory
    
    std::filesystem::path old_enumeration = "enumeration.md";
    std::filesystem::path new_enumeration = target + "/enumeration.md";

    std::filesystem::rename(old_enumeration, new_enumeration);

    std::filesystem::path old_checklist = "checklist.md";
    std::filesystem::path new_checklist = target + "/checklist.md";

    std::filesystem::rename(old_checklist, new_checklist);

    std::filesystem::path old_writeup = "writeup.md";
    std::filesystem::path new_writeup = target + "/writeup.md";

    std::filesystem::rename(old_writeup, new_writeup);

    std::filesystem::path old_nmap = "nmap.md";
    std::filesystem::path new_nmap = target + "/nmap.md";

    std::filesystem::rename(old_nmap, new_nmap);

    std::filesystem::path old_priority = "priority.md";
    std::filesystem::path new_priority = target + "/priority.md";

    std::filesystem::rename(old_priority, new_priority);





    return 0;
}
