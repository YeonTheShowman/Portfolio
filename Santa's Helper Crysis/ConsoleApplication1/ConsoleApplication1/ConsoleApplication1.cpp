#include <fstream> //files
#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void whiteText() {  //dialogs color
    HANDLE hout;
    hout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hout, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
};

void redText() {  //Deadpool dialog color
    HANDLE hout;
    hout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hout, FOREGROUND_RED | FOREGROUND_INTENSITY);
};

void greenText() {  //Santa dialog color
    HANDLE hout;
    hout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hout, FOREGROUND_GREEN);
};

void blueText() {  //Wolverine dialog color
    HANDLE hout;
    hout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hout, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
};

void blue2Text() {  //Wolverine dialog color
    HANDLE hout;
    hout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hout, FOREGROUND_BLUE);
};

void violetText() {  //Player dialog color
    HANDLE hout;
    hout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hout, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
};

void violet2Text() {  //THE CREATOR dialog color
    HANDLE hout;
    hout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hout, FOREGROUND_RED | FOREGROUND_BLUE);
};


void deadpoolL() {  //Deadpool's dialog line
    redText();
    cout << "Deadpool: ";
    whiteText();
};

void santaL() {  //Santa's dialog line
    greenText();
    cout << "Santa: ";
    whiteText();
};

void wolverineL() {  //Wolverine's dialog line
    blueText();
    cout << "Wolverine: ";
    whiteText();
};

void creatorL() {  //THE CREATOR's dialog line
    violet2Text();
    cout << "THE CREATOR: ";
    whiteText();
};


void title() {  //it's a title of the game OBVIOUSLY
    redText();
    cout << "\n\tSanta's \"Helper\" Crisis\n" << endl;
};

string PlayersName; //variable that stores name

void playerL() {  //Player's dialog line
    violetText();
    cout << PlayersName << ": ";
    whiteText();
};

int playerScore; //variable that stores score

void playerNameEP() {
    deadpoolL();
    cout << "To start this marvelous adventure, enter your name, Sweetheart"; 
    redText();
    cout << ";) "; 
    whiteText();
    cout << ": \n";
    violetText();
    cin >> PlayersName;
    whiteText();
    if (PlayersName == "Mr.Nowak") {
        deadpoolL();
        cout << "Welcome Sir! How may i assist you?\n";
        deadpoolL();
        cout << "Well, Mr.Nowak, to expirience the story fully, today you're gonna be an Elf Junior.\n\n";
    }
    else if (PlayersName == "Erika") {
        deadpoolL();
        cout << "Lookie who it is - the creator of my trobles & adventures!\n";
        deadpoolL();
        cout << "Have you brought me some more powder? Say yes! Please?\n\n";
    }
    else if (PlayersName == "Vanessa") {
        deadpoolL();
        cout << "Vanessa, baby! How did you ended up here!?\n";
        deadpoolL();
        cout << "Are you ganna be a nice elf for me, right?\n\n";
    }
    else
    {
        deadpoolL();
        cout << "Welcome to the multiversal debachery! A quick reminder: you agreed to this yourself.\n";
        deadpoolL();
        cout << "Well, nice name but you still gonna be Elf Junior.\n";
    }
    whiteText();
    system("Pause");
};

void introEP() {
    redText();
    cout << "\n\n\tIntro: Waking Up in Chaos\n\n";
    Sleep(1500);

    whiteText();
    cout << PlayersName << "  wakes up in a cozy and warm house. The interior looks like Santa's workshop but... ruined. Elves are sprawled across the floor in various states of drunkenness and debauchery. Empty bottles, suspicious \"sugar powder\", broken tables and chairs are scattered everywhere.\n\n";
    Sleep(1200);
    playerL();
    cout << "(Gravel voice) Ugh... Where am I ? What the hell happened here ?\n\n";
    Sleep(1200);
    cout << "A loud crash comes from behind as " << PlayersName << " turns it's head to see ... Deadpool in a Santa hat, holding a suspiciously large red sack.\n\n";
    Sleep(1200);
    deadpoolL();
    cout << "Oh, hey! Sleeping beauty is awake. Welcome to \"Sobering Santa's Nightmare!\" \n";
    Sleep(1200);
    playerL();
    cout << "What the... Deadpool? What are you doing here?\n";
    Sleep(1200);
    deadpoolL();
    cout << "Short story: I was supposed to replace these elves for today's festivities. Long story? Some nosy \"elves\" sniffed out my gift stash-you know, a little holiday cheer, a little powdery surprise-and decided to go all in. Now, they're sedated enough to kill a reindeer.\n";
    Sleep(1200);
    playerL();
    cout << "You brought a supply of drugs to Santa's workshop?\n";
    Sleep(1200);
    deadpoolL();
    cout << "Hey, blame the multiversal Santa! I asked for \"a clean slate\" this Christmas, and this is what I got. Anyway, now you get to help me fix this crapstorm before the big guy notices. You're welcome.\n\n\n";

};

void tutorialEP() {
    redText();
    cout << "\tTutorial: Knife Sharpening for Beginners\n\n";
    Sleep(1500);

    whiteText();
    cout << "Deadpool leads " << PlayersName << " to a cluttered workbench filled with gift wrapping supplies and a bunch of letters.\n\n";
    Sleep(1200);
    deadpoolL();
    cout << "Okay, Elf Junior, here's the deal. Your job is to pack presents. But not just any presents-specific ones, based on those whiny, overly specific letters kids send to Santa.\n\n";
    Sleep(1200);
    cout << "Deadpool dramatically pulls out a letter addressed \"from\" Wolverine.\n\n";
    Sleep(1200);
    deadpoolL();
    cout << "Like this one. \"Dear Santa, this year I've been the best at what I do, and all I want is something to keep my claws extra stabby. Love, Logan.\"\n\n";
    Sleep(1200);
    cout << "He pulls out a knife-sharpening kit and waves it around.\n\n";
    Sleep(1200);
    deadpoolL();
    cout << "Now, you've gotta figure out if this is the right gift for the person. Easy, right? But screw it up, and you'll end up on Santa's naughty list. Or worse - mine.\n";
    Sleep(1200);
    playerL();
    cout << "What happens if I screw it up?\n";
    Sleep(1200);
    deadpoolL();
    cout << "Ever heard Wolverine sing \"Jingle Bells\" after he was dared? Trust me, no one survives that. Literaly.\n\n";
    Sleep(1200);
    cout << "Player wraps the knife-sharpening kit and presents it to Wolverine. Wolverine's reaction is... complicated.\n\n";
    Sleep(1200);
    wolverineL();
    cout << "(Holding up the gift) Huh.\"Not bad\". Wade Wilson, I'm coming for you.\n\n";
    Sleep(1200);
    cout << "Deadpool, as a true drama queen, makes a shoked face with his hands covering his mouth.\n\n";
    Sleep(1200);
    deadpoolL();
    cout << "Congratulations! You survived the tutorial. Now, let's get this assembly line going before Santa shows up with his \"Ho Ho Ho, where's my hooch\" routine.\n\n\n";
};

void letter1() {
    cout << "\nLetter 1: \n\"Dear Santa, I've been dreaming of a something nice, warm and soft to wear while binge - watching my favorite crime show on Netflix.\nLove,";
    redText(); 
    cout << " Dexter\n\n"; //
    int letter1;
    whiteText();
    cout << "Choose the gift: \n";
    cout << "1. Pair of syntetic pink socks;\n"; //(incorrect)
    cout << "2. Kigurumi with a suit pattern;\n";  //(okay choice)
    cout << "3. Sweater with a sensored knife pattern;\n\n";  //(correct)
    cin >> letter1;
    if (letter1 == 2) {
        playerScore + 1;
        cout << "Dexter: ";
        whiteText();
        cout << "Nice one dude. Thanks!\n\n";
    }
    else if (letter1 == 3) {
        playerScore + 2;
        redText();
        cout << "Dexter: ";
        whiteText();
        cout << "This is exatly what i needed! Thanks Santa!\n\n";
    }
    else if (letter1 == 1) {
        cout << "Dexter: ";
        whiteText();
        cout << "WTF?!";
    }
    else{
        deadpoolL();
        cout << "Choose a valid option, dipshit.\n\n";
        cin >> letter1;
    }
};

void letter2() {
    cout << "\nLetter 2: \n\"Dear Santa, I've been a good boy this year. All I want is something to help me relax after a long day of saving the multiverse. Bonus points if it has a massage function.\nYours heroically, "; 
    blueText();
    cout << "Doctor Strange\n\n";
    int letter2;
    whiteText();
    cout << "Choose the gift: \n";
    cout << "1. Deluxe massage chair;\n";  //(correct)
    cout << "2. Scented candle set;\n";  //(okay choice)
    cout << "3. Wizard spell books;\n\n"; //(incorrect)
    cin >> letter2;
    if (letter2 == 1) {
        playerScore + 2;
        blueText();
        cout << "Doctor Strange: ";
        whiteText();
        cout << "Thank you very much! Now relaxation will be much better...)\n\n";
    }
    else if (letter2 == 2) {
        playerScore + 1;
        blueText();
        cout << "Doctor Strange: ";
        whiteText();
        cout << "Aroma therapy & meditation are good stress relievers. Not as good as a massage but... Thanks.\n\n";
    }
    else if (letter2 == 3) {
        blueText();
        cout << "Doctor Strange: ";
        whiteText();
        cout << "... Seriosly?\n\n";
    }
    else
    {
        deadpoolL();
        cout << "Choose a valid option, dipshit.\n\n";
        cin >> letter2;
    }
};

void letter3() {
    cout << "\nLetter 3: \"Santa Baby, I've been positively angelic. Maybe a little naughty-but we won't talk about that. What I need is something glamorous for my next big gala.\nXOXO, "; 
    blue2Text();
    cout << "Mystique\n\n";
    int letter3;
    whiteText();
    cout << "Choose the gift: \n";
    cout << "1. Silver tiara;\n";  //(okay choice)
    cout << "2. Dazzling blue dress;\n";  //(correct)
    cout << "3. Disguise kit for shapeshifters;\n\n"; //(incorrect)
    cin >> letter3;
    if (letter3 == 1) {
        playerScore + 1;
        blue2Text();
        cout << "Mystique: ";
        whiteText();
        cout << "An intricate acsessory... but with which dress i should wear it...\n\n";
    }
    else if (letter3 == 2) {
        playerScore + 2;
        blue2Text();
        cout << "Mystique: ";
        whiteText();
        cout << "My goodness! It's perfect! Such a good Santa:)\n\n";
    }
    else if (letter3 == 3) {
        blue2Text();
        cout << "Mystique: ";
        whiteText();
        cout << "Another man unwilling to understand me. Such a shame.\n\n";
    }
    else
    {
        deadpoolL();
        cout << "Choose a valid option, dipshit\n\n";
        cin >> letter3;
    }
};

void letterX() {
    cout << "\nLetter X: \"Dear Big Red Bro, I'm in the middle of a gaming marathon, and I need something to keep me fueled for a long night. No salad this time, or you will face THE punishment.\nLater from,"; 
    violet2Text();
    cout << " the Story writer, the Programmer, THE CREATOR\n\n";
    int letterX;
    whiteText();
    cout << "Choose the gift: \n";
    cout << "1. Bag of chips;\n";  //(okay choice) THE CREATOR: “ok. still a good one”
    cout << "2. Gourmet cheese plate;\n";  //(correct) THE CREATOR: “Lucky huh?”
    cout << "3. Giant bowl of chicken wings & jagerbomb;\n";  //(correct) (easter egg) THE CREATOR: “Sharp eye, or a telepathy perhaps”
    cout << "4. Caesars salad;\n\n"; //(incorrect) THE CREATOR: “WHAT THE FUCK! I SAID NO SALAD! YOU BROUGHT THE PUNISHMENT UPON YOURSELF! GET THE FUCK OUT OF HERE!” game ends immediately.
    cin >> letterX;
    if (letterX == 1) {
        creatorL();
        cout << "ok. still a good one\n\n";
        playerScore + 1;
    }
    else if (letterX == 2) {
        creatorL();
        cout << "lucky huh ?\n\n";
        playerScore + 2;
    }
    else if (letterX == 3) {
        creatorL();
        cout << "sharp eye, or a telepathy perhaps\n\n";
        playerScore + 5;
    }
    else if (letterX == 4) {
        creatorL();
        cout << "WHAT THE FUCK! I SAID NO SALAD! YOU BROUGHT THE PUNISHMENT UPON YOURSELF! GET THE FUCK OUT OF HERE YOU INSOLENT TWAT!\n\n";
        deadpoolL();
        cout << "GAME OVER...THAT WAS STUPID, EVEN FOR YOU\n\n";
        whiteText();
        playerScore == 0;
        system("exit");
    }
    else
    {
        deadpoolL();
        cout << "Choose a valid option, dipshit\n\n";
        cin >> letterX;
    }
};

void mainEP() {
    letter1();
    system("Pause");
    system("cls");
    letter2();
    system("Pause");
    system("cls");
    letter3();
    system("Pause");
    system("cls");
    letterX();
    system("Pause");
    system("cls");
};

void outroEP() {
    redText();
    cout << "\tOutro: Santa's Arrival\n\n";
    Sleep(1500);

    whiteText();
    cout << "As the " << PlayersName << " finishes packing, Santa bursts into the workshop. He looks... exhausted.\n\n";
    Sleep(1200);
    santaL();
    cout << "Ho Ho Ho, what in Rudolph's red nose is going on here?\n\n";
    Sleep(1200);
    cout << "Deadpool steps forward, handing Santa a mug of hot cocoa.\n\n";
    Sleep(1200);
    deadpoolL();
    cout << "Relax, Big Red. Crisis averted. The presents are packed, the elves are out cold, and I didn't even burn the place down. You're welcome.\n\n";
    Sleep(1200);
    cout << "Santa glares, then spots Wolverine sharpening his claws in the corner.\n\n";
    Sleep(1200);
    santaL();
    cout << "Why is Logan here?\n";
    Sleep(1200);
    wolverineL();
    cout << "Don't ask.\n\n";
    Sleep(1200);
    cout << "Then Wolverine sends a death glare to a Deadpool.\n\n";
    Sleep(1200);
    system("Pause");
    system("cls");

    redText();
    cout << "\tMerry Christmas!!!\n\n\n";
    system("Pause");
    system("cls");
    cout << "\tTHE END\n\n\n";
    system("Pause");
    system("cls");
    cout << "\tWait... Not yet...\n\n\n";
    system("Pause");
    system("cls");
};

void easterEggEP() {
    redText();
    cout << "\tEaster egg: Wolverine's Revenge \n\n";
    Sleep(1500);
    whiteText();
    cout << "Wolverine holding a poorly-wrapped gift with \"To Logan, From Deadpool\" written on it. \n\n";
    Sleep(1200);
    wolverineL();
    cout << "I'm gonna kill you. \n\n";
    Sleep(1200);
    cout << "Deadpool's voice from offscreen.\n\n";
    Sleep(1200);
    deadpoolL();
    cout << "You'll have to catch me first, Bub! \n\n";
    system("Pause");
    system("cls");
    redText();
    cout << "\tNow it's the END\n\n\n";
    system("Pause");
    system("cls");
};

void creditsEP() {
    redText();
    cout << "\tCredits:\n";
    blueText();
    cout << "\tThe Story Writer, The Programmer, THE CREATOR:\n";;
    whiteText();
    cout << "\tErika Aleksandrova\n\n";

    redText();
    cout << "\tSpecial thanks:\n";
    whiteText();
    cout << "\tMy Muse\n\tThat Rockhead driving Laguna\n\tBlueberry\n\tCrW\n\tRed Plane\n\tTHE shit trip\n\tWilliam Lawson's\n\tHelping Quintet: Alien, Dragon7, Dragon97, I.N, Tomato\n\tThat one pirated game that inspired this whole shit along with My Muse\n\tAnother pirated game I stuck with\n";
};

/*
void sClear() {
    int next = _getch();

    while (next == 13) {
        system("cls");
        next = _getch();
    };
};
*/


int main(){
    //redo the tutorial
    //add a file with a score
    //AT LAST ANIMATIONS

    title();
    playerNameEP();
    Sleep(3000);
    system("cls");

    //menu
    int menuOp;
    title();
    whiteText();
    cout << "\t       1. Start\n";
    //cout << "\t      2. Episode\n"; //episode launch
    //cout << "\t  3. Who's The Best?\n"; //scoreboard
    cout << "\t      2. Credits\n";
    cout << "\t       3. Exit\n\n";
    cin >> menuOp;

    switch (menuOp) {

    case 1:  //start
        system("cls");
        wolverineL();
        cout << "LET'S FUCKING GO!!!\n\n";
        system("Pause");

        system("cls");
        // try separated getch & syscls

        //Opening Scene: Waking Up in Chaos
        introEP();
        system("Pause");
        system("cls");

        //Tutorial: Knife Sharpening for Beginners
        tutorialEP();
        system("Pause");
        system("cls");

        //Main Story: Packing Presents
        mainEP();

        //add a gameplay //sorta' did

        //Ending Scene: Santa’s Arrival
        outroEP();

        //Post-Credits Scene: Wolverine's Revenge
        easterEggEP();
        system("Pause");
        system("cls");

        /*
        deadpoolL();
        cout << "\tYour Name: " << PlayersName << "\n";
        cout << "\tYour Score: " << playerScore << "\n";
        system("Pause");
        system("cls");
        */

        //credits
        creditsEP();
        system("Pause");
        system("cls");
        break;

    /*
    case 2:  //episode
        //build enother switch case, with a user choise;
        cout << "option 2 choosed";

        break;

    case 3:  //leader table
        // do a file
        cout << "option 3 choosed";

        break;
        */

    case 2:  //credits
        system("cls");
        creditsEP();
        break;

    case 3:
        system("Pause");
        break;

    default:  //error handle
        deadpoolL();
        cout << "Choose a valid option, dipshit";
        cin >> menuOp;
        break;

    };
    
    //Sleep(20000);
    //system("cls");

    /*
    violetText();
    cout << "\n\tTHE END... FINALLY IM GONNA SLEEP :)";
    */

    //Sleep(20000);
    //system("cls");
    whiteText();
    
    return 0;
}



/*
\b Backspace
\n Newline (linefeed)
\r Carriage return
\t Tab (horizontal)
\\ Backslash, \ sign
\' Apostrophe, ' sign
\" Quotations, " sign
\? Question mark, ? sign
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
