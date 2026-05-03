#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    
    int matricnum;
    char a1, a2 ,a3, a4, a5;
    
    cout <<"Welcome to 2nd Semester test " <<endl ;
    cout <<"Enter your name. " <<endl ;
    cin >> name;
    int year;
    cout <<"Enter your Year. " <<endl ;
    cin >> year;
  cin.ignore()
    cout <<"Enter your martric number. " <<endl ;
    cin >> matricnum;
  cin.ignore()
    cout << "Your test has began" <<endl;
    cout << "1.What is the name of own planet" << endl;
    cout << "A. Earth" << endl;
    cout << "B. Venus" << endl;
    cout << "C. Uranas" << endl;
    cout << "D. Viltrum" << endl;
    cin >> a1;
    cout << "2.Who is the president of Nigeria" << endl;
    cout << "A. Tinubu" << endl;
    cout << "B. BAT (Bola Ahemd Tinubu)" << endl;
    cout << "C. Buahri" << endl;
    cout << "D. Good luck" << endl;
    cin >> a2;
    cout << "3.All of this but one is a state of matter" << endl;
    cout << "A. Solid" << endl;
    cout << "B. Liquid" << endl;
    cout << "C. Gas" << endl;
    cout << "D. Imajination" << endl;
    cin >> a3;
    cout << "4.Who is the richest man in the world" << endl;
    cout << "A. Tinubu" << endl;
    cout << "B. Donald trump" << endl;
    cout << "C. Dangote" << endl;
    cout << "D. Elon Musk" << endl;
    cin >> a4;
    cout << "5.What is the best to breathing in" << endl;
    cout << "A. Oxygen" << endl;
    cout << "B. Amonia" << endl;
    cout << "C. Chlorine gas" << endl;
    cout << "D. Hydrogen gas" << endl;
    cin >> a5;
  int score =0;
     if (a1=='A') score++;
     if (a2=='A') score++;
     if (a3=='D') score++;
     if (a4=='D') score++;
     if (a5=='A') score++;
  cout << "Your score is "<< score"/5 "<< endl;
   
    
     
     


    system("pause>0");
}
