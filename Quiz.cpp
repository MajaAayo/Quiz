#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
// using namespace std::this_thread;
// using namespace std::chrono;

void displayQuestions(int category) {
    char ans;
    int count=0;
    switch (category) {
        case 1:
            cout << "Please wait for a few seconds..." << endl;
            // sleep_for(seconds(3)); 
            cout<<"Your questions are now available!"<<endl;

            cout<<"1. Who won FIFA World Cup 2018?"<<endl;
            cout<<"A) Brazil  B) Germany  C) France  D) Spain"<<endl;
            cout<<"Ans: ";
            cin>>ans;
            if(ans== 'C' || ans== 'c'){
                count++;
            }
            else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cout<<"Ans: ";
                cin>>ans;
            }
            cout<<"2. How many players are there in a volleyball team on the court at a time?"<<endl;
            cout<<"A) 5  B) 6  C) 7  D) 4"<<endl;
                cout<<"Ans: ";
            cin>>ans;
            if(ans== 'C' || ans== 'c'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                 cout<<"Ans: ";
                cin>>ans;
            }
            cout<<"3. How many maps are typically played in a PUBG Esports match in Nepal?"<<endl;
            cout<<"A) 2  B) 3  C) 4  D) 1"<<endl;
             cout<<"Ans: ";
            cin>>ans;
            if(ans== 'B' || ans== 'b'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
            cout<<"4. What sport is considered the most popular in the world?"<<endl;
            cout<<"A) Rugby  B) Tennis  C) Football  D) Cricket"<<endl;
             cout<<"Ans: ";
            cin>>ans;
            if(ans== 'C' || ans== 'c'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
            cout<<"5. What distance do marathon participants run?"<<endl;
             cout<<"Ans: ";
            cout<< "A) 10 KM  B) 21 KM  C) 42.195 KM  D) 100 KM"<<endl;
            cin>>ans;
            if(ans== 'C' || ans== 'c'){
                count++;
            }
            cout<<"6. What kind of sport is connected with the term “ring”?"<<endl;
            cout<< "A) Figure skating  B) Boxing  C) Water polo  D) Struggle"<<endl;
             cout<<"Ans: ";
             cin>>ans;
            if(ans== 'B' || ans== 'b'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
            cout<<"7. What ball is used in table tennis?"<<endl;
            cout<<"A) Football  B) Basketball  C) Tennis  D) Ping-pong"<<endl;
             cout<<"Ans: ";
            cin>>ans;
            if(ans== 'D' || ans== 'd'){
                count++;
            }
            cout<<"8. What game is called the “sport of kings?"<<endl;
            cout<<"A) Chess  B) Carrom  C) Snooker  D) Tennis"<<endl;
             cout<<"Ans: ";
            cin>>ans;
            if(ans== 'A' || ans== 'a'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
            cout<<"9. What game is considered the national sport of Japan?"<<endl;
            cout<<"A) Tennis  B) Golf  C) Baseball  D) Sumo"<<endl;
             cout<<"Ans: ";
            cin>>ans;
            if(ans== 'D' || ans== 'd'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
            cout<<"10. In which year was the All Nepal Football Association (ANFA) founded?"<<endl;
            cout<<"A) 1955  B) 1951  C) 1963  D) 1945"<<endl;
             cout<<"Ans: ";
            cin>>ans;
            if(ans== 'B' || ans== 'b'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
            cout<<"11. Which cricketer has the record of highest individual score in ODIs?"<<endl;
            cout<<"A) Rohit Sharma  B) Martin Guptill  C) Chris Gayle  D) Virender Sehwag"<<endl;
             cout<<"Ans: ";
            cin>>ans;
            if(ans== 'A' || ans== 'a'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
            cout<<"12. The word Gambit is related to which of the following sports?"<<endl;
            cout<<"A) Chess  B) Table Tennis  C) Polo  D) Carrom"<<endl;
              cout<<"Ans: ";
            cin>>ans;
            if(ans== 'A' || ans== 'a'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
            cout<<"13. Which country is famous for its cricket team known as the “Men in Blue?"<<endl;
            cout<<"A) Australia  B) India  C) England  D) South Africa"<<endl;
            cout<<"Ans: ";
            cin>>ans;
            if(ans== 'A' || ans== 'a'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
            cout<<"14. Which sport is played with a shuttlecock?"<<endl;
            cout<<"A) Badminton  B) Tennis  C) Table tennis  D) Squash"<<endl;
            cout<<"Ans: ";
            cin>>ans;
            if(ans== 'A' || ans== 'a'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
            cout<<"15. What is the maximum number of players on the field at the same time in a volleyball team?"<<endl;
            cout<<"A) 4  B) 5  c) 6 d) 7"<<endl;
             cout<<"Ans: ";
            cin>>ans;
            if(ans== 'A' || ans== 'a'){
                count++;
            }
              else if(ans== 'E' || ans== 'e'){
                exit;
            }
            else{
                cout<<"Options is not available!!\nChoose the valid option: "<<endl;
                cin>>ans;
            }
break;
        // Add cases for other categories here

        default:
            cout << "Invalid category" << endl;
    }
}

int main() {
    char choice;
    cout << "\n\n\t\t\tWelcome to the Quiz Game!!!" << endl;
    cout << "\nAre you excited to play the game?" << endl;
    cout << "\n\t\t-> Press Y/y to start\n\t\t-> Press N/n to cancel" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        cout << "\nLet's Begin!!" << endl;
        cout << "Categories:" << endl;
        cout << "1. Sports\n"
             << "2. Entertainment\n"
             << "3. History\n"
             << "4. Politics\n"
             << "5. Geography\n"
             << "6. Movies\n"
             << "7. Science and Technology\n"
             << "8. Literature\n"
             << "9. IQ\n"
             << "10. Mythology" << endl;

        int category;
        cout << "Enter the category number: ";
        cin >> category;
        displayQuestions(category);
    } else if (choice == 'N' || choice == 'n') {
        cout << "\nThank you for visiting our software!!!" << endl;
    } else {
        cout << "\n\t\tInvalid Choice" << endl;
    }

    return 0;
}
