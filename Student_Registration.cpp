//QUESTION2
#include <iostream>
#include<assert.h>

using namespace std;

double studentScore(double mathematics_score, double physical_Science_score , double  english_score);



int main(){
    double mathematics_score  , physical_Science_score ,  english_score;

cout<< "ENTER YOU MATHEMATICS SCORE:-" ;
cin >> mathematics_score;

cout<< "ENTER YOU PHYSICAL SCIENCE SCORE:-" ;
cin >> physical_Science_score;

cout<< "ENTER YOU ENGLISH SCORE:-" ;
cin >> english_score;

studentScore( mathematics_score,  physical_Science_score ,   english_score);



    return 0;
}


double studentScore(double mathematics_score, double physical_Science_score , double  english_score)
{
      assert(( mathematics_score >= 60)&& (physical_Science_score >= 60) && (english_score >= 60));
      assert(( mathematics_score <= 100) && (physical_Science_score <= 100) && (english_score <= 100));
    cout<<"CONGRATULATIONS!!! YOU QUALIFY TO REGISTER FOR THE COMPUTER SCIENCE DEGREE."<<endl;


   // assert(( mathematics_score > 100) || (physical_Science_score > 100) || (english_score > 100));
    //cout<<"MARKS CANT BE GREATER THAN 100%"<<endl;

}
