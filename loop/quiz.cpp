#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype>

using namespace std;

// helper: read an answer token and return its lowercase first character (or '\0' if empty)
char readAnswerChar() {
    string s;
    cin >> s;
    if (s.size() == 0) return '\0';
    return static_cast<char>(tolower(s[0]));
}

// Convert whole string to lowercase
string toLowerCase(const string &s) {
    string out = s;
    transform(out.begin(), out.end(), out.begin(), ::tolower);
    return out;
}

// Ask 10 questions for the chosen category. Returns score (could be negative).
int askQuestions(const string &categoryInput) {
    string cat = toLowerCase(categoryInput);
    int score = 0;
    int q = 0;
    char ans;

    if (cat == "sports") {
        cout << "Q" << ++q << ": Who won the 2022 FIFA World Cup?\nA) France  B) Brazil  C) Argentina  D) Germany\n";
        ans = readAnswerChar();
        if (ans == 'c') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: C) Argentina\n"; }

        cout << "Q" << ++q << ": Which country is known for cricket as the most popular sport?\nA) Australia  B) India  C) England  D) South Africa\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) India\n"; }

        cout << "Q" << ++q << ": In which city were the 2010 Commonwealth Games held?\nA) Mumbai  B) Delhi  C) Chennai  D) Kolkata\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Delhi\n"; }

        cout << "Q" << ++q << ": Who is known as 'The Wall' of Indian cricket?\nA) Sachin Tendulkar  B) Rahul Dravid  C) VVS Laxman  D) Virender Sehwag\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Rahul Dravid\n"; }

        cout << "Q" << ++q << ": Which sport does P. V. Sindhu play?\nA) Tennis  B) Badminton  C) Table Tennis  D) Squash\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Badminton\n"; }

        cout << "Q" << ++q << ": Who won the ICC Cricket World Cup in 2011?\nA) Sri Lanka  B) India  C) Australia  D) England\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) India\n"; }

        cout << "Q" << ++q << ": Which sport uses a shuttlecock?\nA) Tennis  B) Badminton  C) Squash  D) Table Tennis\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Badminton\n"; }

        cout << "Q" << ++q << ": Neeraj Chopra won Olympic gold in which event?\nA) Javelin Throw  B) Discus  C) Shot Put  D) Long Jump\n";
        ans = readAnswerChar();
        if (ans == 'a') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: A) Javelin Throw\n"; }

        cout << "Q" << ++q << ": How many players are there in a standard football (soccer) team on the field?\nA) 9  B) 10  C) 11  D) 12\n";
        ans = readAnswerChar();
        if (ans == 'c') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: C) 11\n"; }

        cout << "Q" << ++q << ": Which country hosted the 2016 Summer Olympics?\nA) Japan  B) Brazil  C) UK  D) China\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Brazil (Rio de Janeiro)\n"; }
    }

    else if (cat == "movies") {
        cout << "Q" << ++q << ": Who directed 'Titanic'?\nA) James Cameron  B) Steven Spielberg  C) Christopher Nolan  D) Ridley Scott\n";
        ans = readAnswerChar();
        if (ans == 'a') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: A) James Cameron\n"; }

        cout << "Q" << ++q << ": Which Indian film had the Oscar-winning song 'Naatu Naatu'?\nA) Dangal  B) RRR  C) Lagaan  D) Baahubali\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) RRR\n"; }

        cout << "Q" << ++q << ": Which movie stars Aamir Khan and revolves around a village cricket match against the British?\nA) Swades  B) Lagaan  C) PK  D) Dangal\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Lagaan\n"; }

        cout << "Q" << ++q << ": Who played Jack Dawson in 'Titanic'?\nA) Brad Pitt  B) Leonardo DiCaprio  C) Matt Damon  D) Tom Cruise\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Leonardo DiCaprio\n"; }

        cout << "Q" << ++q << ": Which Indian actor is called 'Big B'?\nA) Shah Rukh Khan  B) Salman Khan  C) Amitabh Bachchan  D) Aamir Khan\n";
        ans = readAnswerChar();
        if (ans == 'c') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: C) Amitabh Bachchan\n"; }

        cout << "Q" << ++q << ": 'The Dark Knight' features which superhero?\nA) Superman  B) Batman  C) Spiderman  D) Iron Man\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Batman\n"; }

        cout << "Q" << ++q << ": Which director made 'Baahubali'?\nA) Anurag Kashyap  B) SS Rajamouli  C) Karan Johar  D) Mani Ratnam\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) SS Rajamouli\n"; }

        cout << "Q" << ++q << ": Which city is the center of Bollywood film industry?\nA) Chennai  B) Kolkata  C) Mumbai  D) Hyderabad\n";
        ans = readAnswerChar();
        if (ans == 'c') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: C) Mumbai\n"; }

        cout << "Q" << ++q << ": Which 1995 film is considered one of the biggest cult hits in India with the character 'Gabbar'? \nA) Deewar  B) Sholay  C) Zanjeer  D) Guide\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Sholay\n"; }

        cout << "Q" << ++q << ": Which movie contains the famous line 'I'll be back'?\nA) Rocky  B) Terminator  C) The Matrix  D) Avatar\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Terminator\n"; }
    }

    else if (cat == "songs") {
        cout << "Q" << ++q << ": Who is called the 'Nightingale of India'?\nA) Asha Bhosle  B) Lata Mangeshkar  C) Shreya Ghoshal  D) Alka Yagnik\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Lata Mangeshkar\n"; }

        cout << "Q" << ++q << ": Who composed 'Jana Gana Mana' (tune)?\nA) Bankim Chandra Chatterjee  B) Rabindranath Tagore  C) A.R. Rahman  D) Manna Dey\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Rabindranath Tagore\n"; }

        cout << "Q" << ++q << ": Which Indian composer won Oscars for 'Slumdog Millionaire'?\nA) A.R. Rahman  B) Ilaiyaraaja  C) Anu Malik  D) Shankar Mahadevan\n";
        ans = readAnswerChar();
        if (ans == 'a') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: A) A.R. Rahman\n"; }

        cout << "Q" << ++q << ": 'Tum Hi Ho' was sung by?\nA) Sonu Nigam  B) Arijit Singh  C) Atif Aslam  D) KK\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Arijit Singh\n"; }

        cout << "Q" << ++q << ": Which song from RRR won an Oscar in 2023?\nA) Dosti  B) Naatu Naatu  C) Janani  D) Komuram Bheemudo\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Naatu Naatu\n"; }

        cout << "Q" << ++q << ": Who sang 'Shape of You'?\nA) Shawn Mendes  B) Justin Bieber  C) Ed Sheeran  D) Bruno Mars\n";
        ans = readAnswerChar();
        if (ans == 'c') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: C) Ed Sheeran\n"; }

        cout << "Q" << ++q << ": Which band sang 'Bohemian Rhapsody'?\nA) Beatles  B) Queen  C) Coldplay  D) Pink Floyd\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Queen\n"; }

        cout << "Q" << ++q << ": Which Indian singer is known for 'Jai Ho'?\nA) AR Rahman  B) Sonu Nigam  C) Shreya Ghoshal  D) Rahat Fateh Ali Khan\n";
        ans = readAnswerChar();
        if (ans == 'a') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: A) A.R. Rahman\n"; }

        cout << "Q" << ++q << ": Who sang 'Hello' (global hit)?\nA) Adele  B) Taylor Swift  C) Rihanna  D) Beyonce\n";
        ans = readAnswerChar();
        if (ans == 'a') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: A) Adele\n"; }

        cout << "Q" << ++q << ": Which instrument is Zakir Hussain famous for?\nA) Sitar  B) Flute  C) Tabla  D) Violin\n";
        ans = readAnswerChar();
        if (ans == 'c') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: C) Tabla\n"; }
    }

    else if (cat == "hobbies") {
        cout << "Q" << ++q << ": Which hobby involves growing plants?\nA) Gardening  B) Painting  C) Dancing  D) Singing\n";
        ans = readAnswerChar();
        if (ans == 'a') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: A) Gardening\n"; }

        cout << "Q" << ++q << ": What is the hobby of collecting stamps called?\nA) Numismatics  B) Philately  C) Calligraphy  D) Origami\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Philately\n"; }

        cout << "Q" << ++q << ": Which hobby uses a camera?\nA) Painting  B) Photography  C) Gardening  D) Knitting\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Photography\n"; }

        cout << "Q" << ++q << ": Origami is the art of folding paper from which country?\nA) India  B) China  C) Japan  D) Korea\n";
        ans = readAnswerChar();
        if (ans == 'c') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: C) Japan\n"; }

        cout << "Q" << ++q << ": Which hobby helps fitness the most?\nA) Reading  B) Dancing  C) Knitting  D) Stamp collecting\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Dancing\n"; }

        cout << "Q" << ++q << ": Which hobby is associated with pottery and clay work?\nA) Origami  B) Pottery  C) Gardening  D) Chess\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Pottery\n"; }

        cout << "Q" << ++q << ": Which hobby is called 'numismatics'?\nA) Stamp collecting  B) Coin collecting  C) Painting  D) Philately\n";
        ans = readAnswerChar();
        if (ans == 'b') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: B) Coin collecting (Numismatics)\n"; }

        cout << "Q" << ++q << ": Which Indian festival is famous for kite flying hobby?\nA) Diwali  B) Holi  C) Makar Sankranti  D) Eid\n";
        ans = readAnswerChar();
        if (ans == 'c') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: C) Makar Sankranti\n"; }

        cout << "Q" << ++q << ": Which hobby is usually indoor and strategic (played on board)?\nA) Chess  B) Cricket  C) Swimming  D) Cycling\n";
        ans = readAnswerChar();
        if (ans == 'a') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: A) Chess\n"; }

        cout << "Q" << ++q << ": Which hobby involves decorative floor art made during festivals in India?\nA) Rangoli  B) Origami  C) Knitting  D) Calligraphy\n";
        ans = readAnswerChar();
        if (ans == 'a') { score++; cout << "Correct!\n"; } else { score--; cout << "Incorrect! Correct: A) Rangoli\n"; }
    }

    else {
        cout << "Unknown category received in askQuestions(): " << categoryInput << "\n";
    }

    return score;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    // Press S to start (repeat until user presses S/s)
    char startChar;
    while (true) {
        cout << "Press 'S' to start the game: ";
        cin >> startChar;
        startChar = static_cast<char>(tolower(startChar));
        if (startChar == 's') break;
        cout << "You must press 'S' to start the game!\n";
    }

    bool playAgainFlag = true;
    while (playAgainFlag) {
        // Choose category
        cout << "\nWelcome to the Quiz Game! Choose a category:\n";
        cout << "A) Sports\nB) Movies\nC) Songs\nD) Hobbies\n";
        string categoryInput;
        cin >> categoryInput;
        char c = tolower(categoryInput[0]);
        string categoryName;
        if (c == 'a') categoryName = "sports";
        else if (c == 'b') categoryName = "movies";
        else if (c == 'c') categoryName = "songs";
        else if (c == 'd') categoryName = "hobbies";
        else {
            // allow full-word input as fallback
            string low = toLowerCase(categoryInput);
            if (low == "sports" || low == "movies" || low == "songs" || low == "hobbies") categoryName = low;
            else {
                cout << "Invalid category selected. Exiting.\n";
                return 0;
            }
        }

        // Ask questions and compute score
        int score = askQuestions(categoryName);

        // Show result
        cout << "\nYou scored " << score << " out of 10!\n";
        if (score >= 6) cout << "Congratulations! You passed!\n";
        else cout << "Better luck next time!\n";

        // Play again?
        cout << "\nDo you want to play again?\nA) Yes\nB) No\n";
        string againInput;
        cin >> againInput;
        char ag = tolower(againInput[0]);
        if (ag == 'a' || toLowerCase(againInput) == "yes") {
            playAgainFlag = true;
            // NOTE: we do NOT ask for 'S' again per your requirement — game continues
        } else {
            playAgainFlag = false;
            cout << "Thanks for playing! Goodbye.\n";
        }
    }

    return 0;
}
