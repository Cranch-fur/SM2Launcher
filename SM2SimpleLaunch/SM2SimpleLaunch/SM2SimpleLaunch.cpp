#include <iostream>
#include <string>

using namespace std;








void Clear() {
    system("CLS");
}

int main()
{
    bool languageSelected = false;
    string language;
    while (languageSelected == false) {
        Clear();

        printf("SELECT LANGUAGE TO RUN GAME WITH:\n");
        printf("[0] English (United States)\n");
        printf("[1] Spanish\n");
        printf("[2] Spanish (Latin America)\n");
        printf("[3] Chinese (Simplified)\n");
        printf("[4] Chinese (Traditional)\n");
        printf("[5] Arabic\n");
        printf("[6] Portuguese\n");
        printf("[7] Portuguese (Brazil)\n");
        printf("[8] Russian\n");
        printf("[9] Japanese\n");
        printf("[10] German\n");
        printf("[11] French\n");
        printf("[12] French (Canada)\n");
        printf("[13] Korean\n");
        printf("[14] Italian\n");
        printf("[15] Dutch\n");
        printf("[16] Swedish\n");
        printf("[17] Polish\n");
        printf("[18] Norwegian\n");
        printf("[19] Danish\n");
        printf("[20] Finnish\n");
        printf("[21] Czech\n");
        printf("[22] Hungarian\n");
        printf("[23] Greek\n");
        printf("> ");

        string userInput;
        bool isInt = true;
        cin >> userInput;

        for (char c : userInput) {
            if (!isdigit(c)) {
                isInt = false;
            }
        }

        if (isInt == false) {
            continue;
        }

        int userInputINT = atoi(userInput.c_str());
        if (userInputINT < 0 || userInputINT > 23) {
            continue;
        }

        switch (userInputINT)
        {
            case 0:
                language = "us";
                break;

            case 1:
                language = "es";
                break;

            case 2:
                language = "la";
                break;

            case 3:
                language = "cs";
                break;

            case 4:
                language = "ct";
                break;

            case 5:
                language = "ar";
                break;

            case 6:
                language = "pt";
                break;

            case 7:
                language = "br";
                break;

            case 8:
                language = "ru";
                break;

            case 9:
                language = "jp";
                break;

            case 10:
                language = "de";
                break;

            case 11:
                language = "fr";
                break;

            case 12:
                language = "fc";
                break;

            case 13:
                language = "kr";
                break;

            case 14:
                language = "it";
                break;

            case 15:
                language = "nl";
                break;

            case 16:
                language = "se";
                break;

            case 17:
                language = "pl";
                break;

            case 18:
                language = "no";
                break;

            case 19:
                language = "dk";
                break;

            case 20:
                language = "fi";
                break;

            case 21:
                language = "cz";
                break;

            case 22:
                language = "hu";
                break;

            case 23:
                language = "el";
                break;
        }

        languageSelected = true;
    }


    bool windowModeSelected = false;
    string windowMode;
    while (windowModeSelected == false) {
        Clear();

        printf("SELECT WINDOW MODE TO RUN GAME WITH:\n");
        printf("[0] Windowed\n");
        printf("[1] Borderless Window\n");
        printf("> ");

        string userInput;
        bool isInt = true;
        cin >> userInput;

        for (char c : userInput) {
            if (!isdigit(c)) {
                isInt = false;
            }
        }

        if (isInt == false) {
            continue;
        }

        int userInputINT = atoi(userInput.c_str());
        if (userInputINT < 0 || userInputINT > 1) {
            continue;
        }

        switch (userInputINT)
        {
            case 0:
                windowMode = "";
                break;

            case 1:
                windowMode = " -borderlesswindow";
                break;
        }

        windowModeSelected = true;
    }


    string commandLine = "\"Marvel's Spider-Man 2.exe\" -language " + language + windowMode + " -legal -lobby -fps_unlock_base -rumble -controllerspeaker -nodbgmsg -noconsole -no_debug_spam -no_tty -noprotomsg -no_error_actors -turn_off_all_script_msgs -nopadremoved";
    system(commandLine.c_str());


    exit(0);
}