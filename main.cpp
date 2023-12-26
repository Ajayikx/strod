#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

char useranswer;
int score =0;



struct Question1
{
    string text;
    string answer[4]; // Array to store multiple answer options
};
struct Question2
{
    string text;
    string answer[4];
};
struct Question3
{
    string text;
    string answer[4];
};
struct Question4
{
    string text;
    string answer[4];
};
struct Question5
{
    string text;
    string answer[4];
};

void askquestions(Question1 question1)
{
    cout<< "\n\n welcome to jaytech quiz \n\n "<< question1.text<<"\n"<< question1.answer[0]<< " "<< question1.answer[1]<< " "<< question1.answer[2]<< " "<< question1.answer[3]<< endl;
    cout <<  "enter your answer: ";
    cin>>useranswer;
    if (useranswer == 'a' ){
        cout << "\ncorrect!" << endl;
        score = score +10;
    }
    else {
        cout << "the answer you enter is incorrect. the right answer is  "<< question1.answer[0];
    }



};

void askquestions(Question2 question2)
{
    cout<< "\n\n"<<question2.text<<"\n"<< question2.answer[0]<< " "<< question2.answer[1]<< " "<< question2.answer[2]<< " "<< question2.answer[3]<< endl;
    cout <<  "enter your answer: ";
    cin>>useranswer;
    if (useranswer == 'b' ){
        cout << "\ncorrect!" << endl;
        score = score +10;
    }
    else {
        cout << "the answer you enter is incorrect. the right answer is  "<< question2.answer[1];
    }



};

void askquestions(Question3 question3)
{
    cout<< "\n\n"<< question3.text<<"\n"<< question3.answer[0]<< " "<< question3.answer[1]<< " "<< question3.answer[2]<< " "<< question3.answer[3]<< endl;
    cout <<  "enter your answer: ";
    cin>>useranswer;
    if (useranswer == 'b' )
     {

     cout << "\ncorrect!" << endl;
        score = score +10;
     }
    else {
        cout << "the answer you enter is incorrect. the right answer is  "<< question3.answer[1];
    }



};

void askquestions(Question4 question4)
{
    cout<< "\n\n"<< question4.text<<"\n"<< question4.answer[0]<< " "<< question4.answer[1]<< " "<< question4.answer[2]<< " "<< question4.answer[3]<< endl;
    cout <<  "enter your answer: ";
    cin>>useranswer;
    if (useranswer == 'a' )
      {

      cout << "\ncorrect!" << endl;
        score = score +10;
      }
    else {
        cout << "the answer you enter is incorrect. the right answer is  "<< question4.answer[0];
    }



};

void askquestions(Question5 question5)
{
    cout<<"\n\n"<<  question5.text<<"\n"<< question5.answer[0]<< " "<< question5.answer[1]<< " "<< question5.answer[2]<< " "<< question5.answer[3]<< endl;
    cout <<  "enter your answer: ";
    cin>>useranswer;
    if (useranswer == 'd' )
        {
            cout << "\ncorrect!" << endl;
        score = score +10;
        }
    else {
        cout << "the answer you enter is incorrect. the right answer is  "<< question5.answer[3];
    }



};



int main()
{
     Question1 question1;
    question1.text = "Which of these numbers is a prime number? ";
    question1.answer[0] = "(a) 1";
    question1.answer[1] = "(b) 6";
    question1.answer[2] = "(c) 9";
    question1.answer[3] = "(d) 10";


    Question2 question2;
    question2.text = "When did nigeria gain independent? ";
    question2.answer[0] = "(a) 1990";
    question2.answer[1] = "(b) 1960";
    question2.answer[2] = "(c) 1980";
    question2.answer[3] = "(d) 1940";

     Question3 question3;
    question3.text = "which one is better? ";
    question3.answer[0] = "(a) apple";
    question3.answer[1] = "(b) samsung";
    question3.answer[2] = "(c) huawei";
    question3.answer[3] = "(d) google";

     Question4 question4;
    question4.text = "which one is better? ";
    question4.answer[0] = "(a) macbook";
    question4.answer[1] = "(b) hp";
    question4.answer[2] = "(c) samsung";
    question4.answer[3] = "(d) dell";

     Question5 question5;
    question5.text = "which one is powerful? ";
    question5.answer[0] = "(a) matlab";
    question5.answer[1] = "(b) solidwork";
    question5.answer[2] = "(c) codeblocks";
    question5.answer[3] = "(d) abode premier pro";

    askquestions(question1);
    askquestions(question2);
    askquestions(question3);
    askquestions(question4);
    askquestions(question5);

    cout<< "your score is : "<< score << endl;








    return 0;
}
