#include<iostream>
#include "Input_Validation_Extended.h"
#include<string>
#include<iomanip>
using namespace std;

void calcMenu();
void equations(string);
void velocity(double, double, string, string);
void acceleration(double, double, string, string);
void motion(string);
void newton(double, double, string, string);
void weight(double, double, string, string);
void momentum(double, double, string, string);


void calcMenu()
{
  cout << "\nPhysics Calculator" << endl;
  cout << "1: Velocity" << endl;
  cout << "2: Acceleration" << endl;
  cout << "3: Motion" << endl;
  cout << "4: Newton's 2nd Law" << endl;
  cout << "5: Weight" << endl;
  cout << "6: Momentum" << endl;
  cout << "E: Exit Calculator" << endl;
  cout << "X: Clear Screen" << endl;
}

void equations(string userInput)
{
  double ds, dt, dv, m, a, w, v, g;
  string dsUnit, dtUnit, dvUnit, mUnit, aUnit, vUnit, gUnit, mInput;


  if (userInput == "1")
  {
    cout << "\nVelocity = Speed/Time" << endl;
    cout << "Please enter the unit of measure for the speed: ";
    dsUnit = validateString(dsUnit);
    cout << "\nPlease enter the unit of measure for the time: ";
    dtUnit = validateString(dtUnit);
    cout << "\nNow enter the value for speed: ";
    ds = validateDouble(ds);
    cout << "\nFinally enter the value for time: ";
    dt = validateDouble(dt);
    velocity(ds, dt, dsUnit, dtUnit);
  }
    
   else if (userInput == "2")
  {
    cout << "\nAcceleration = Velocity/Time" << endl;
    cout << "Please enter the unit of measure for the velocity: ";
    dsUnit = validateString(dvUnit);
    cout << "\nPlease enter the unit of measure for the time: ";
    dtUnit = validateString(dtUnit);
    cout << "\nNow enter the value for velocity: ";
    ds = validateDouble(dv);
    cout << "\nFinally enter the value for time: ";
    dt = validateDouble(dt);
    acceleration(dv, dt, dvUnit, dtUnit);
  }

   else if (userInput == "3")
  {
      do
   {
      cout << "\nMotion" << endl;
      cout << "1. V = Vo + AT" << endl;
      cout << "2. S = So + VoT + 1/2AT^2" << endl;
      cout << "3. V^2 = Vo^2 + 2A(S-So)" << endl;
      cout << "4. V_bar = 1/2(V+Vo)" << endl;
      cout << "\nPlease choose the equation for motion: "; 
      mInput = validateString(mInput);
      if(mInput != "1" && mInput != "2" && mInput != "3" && mInput != "4")
      {  
        cout << "\nInvalid Input: Please choose between 1-4." << endl;
      }
     motion(mInput);
   }while(mInput != "1" && mInput != "2" && mInput != "3" && mInput != "4");
    
  }
     
  else if (userInput == "4")
  {
    cout << "\nNewton's 2nd Law = Mass * Acceleration" << endl;
    cout << "Please enter the unit of measure for the mass: ";
    dsUnit = validateString(mUnit);
    cout << "\nPlease enter the unit of measure for the acceleration: ";
    dtUnit = validateString(aUnit);
    cout << "\nNow enter the value for mass: ";
    ds = validateDouble(m);
    cout << "\nFinally enter the value for acceleration: ";
    dt = validateDouble(a);
    newton(m, a, mUnit, aUnit);
  } 

  else if (userInput == "5")
  {
    cout << "\nWeight = Mass * Gravity" << endl;
    cout << "Please enter the unit of measure for the mass: ";
    dsUnit = validateString(mUnit);
    cout << "\nPlease enter the unit of measure for the gravity: ";
    dtUnit = validateString(gUnit);
    cout << "\nNow enter the value for mass: ";
    ds = validateDouble(m);
    cout << "\nFinally enter the value for gravity: ";
    dt = validateDouble(g);
    weight(m, g, mUnit, gUnit);
  } 

  else if (userInput == "6")
  {
    cout << "\nMomentum = Mass * Velocity" << endl;
    cout << "Please enter the unit of measure for the mass: ";
    dsUnit = validateString(mUnit);
    cout << "\nPlease enter the unit of measure for the velocity: ";
    dtUnit = validateString(vUnit);
    cout << "\nNow enter the value for mass: ";
    ds = validateDouble(m);
    cout << "\nFinally enter the value for velocity: ";
    dt = validateDouble(v);
    momentum(m, v, mUnit, vUnit);
  } 
  
  else if (userInput == "x" || userInput == "X")
  {
    system("clear");
  }
    
  else if (userInput == "e" || userInput == "E")
  {
    string color = "\x1b[" + to_string(42) + ";1m";
    cout << color;
  }

  else
  {
    cout << "\nInvalid input: Try again." << endl;
  }

}

void velocity(double s, double t, string sUnit, string tUnit)
{
  double v = s / t;
  string color = "\x1b[" + to_string(42) + ";1m";
  string reset = "\x1b[0m";
  cout << "Your velocity is " << setprecision(4);
  cout << color;
  cout << v << " " << sUnit << " / " << tUnit << endl;
  cout << reset;
}

void acceleration(double v, double t, string vUnit, string tUnit)
{
  double a = v / t;
  string color = "\x1b[" + to_string(42) + ";1m";
  string reset = "\x1b[0m";
  cout << "Your acceleration is " << setprecision(4);
  cout << color;
  cout << a << " " << vUnit << " / " << tUnit << endl;
  cout << reset;
}
void newton(double m, double a, string mUnit, string aUnit)
{
  double n = m * a;
  string color = "\x1b[" + to_string(42) + ";1m";
  string reset = "\x1b[0m";
  cout << "According to Newton's 2nd Law " << setprecision(4);
  cout << color;
  cout << n << " " << mUnit << " * " << aUnit << endl;
  cout << reset;
}
void weight(double m, double g, string mUnit, string gUnit)
{
  double w = m * g;
  string color = "\x1b[" + to_string(42) + ";1m";
  string reset = "\x1b[0m";
  cout << "The weight is " << setprecision(4);
  cout << color;
  cout << w << " " << mUnit << " * " << gUnit << endl;
  cout << reset;
}
void momentum(double m, double v, string mUnit, string vUnit)
{
  double mm = m * v;
  string color = "\x1b[" + to_string(42) + ";1m";
  string reset = "\x1b[0m";
  cout << "The momentum is " << setprecision(4);
  cout << color;
  cout << mm << " " << mUnit << " * " << vUnit << endl;
  cout << reset;
}
void motion(string mInput)
{
  double v, Vo, a, t, s, So;
  string color = "\x1b[" + to_string(42) + ";1m";
  string reset = "\x1b[0m";
  
  if (mInput == "1")
  {
    cout << "\nV = Vo + AT" << endl;
    cout << "Please enter the value for Vo: ";
    Vo = validateDouble(Vo);
    cout << "Please enter the value for A: ";
    a = validateDouble(a);
    cout << "Please enter the value for T: ";
    t = validateDouble(t);

    double mV = Vo + (a * t);
    
    
    cout << "\nThe value for final velocity is " << setprecision(4);
    cout << color;
    cout << mV << endl;
    cout << reset;
  }
  if (mInput == "2")
  {
    cout << "\nS = So + V0T + 1/2AT^2" << endl;
    cout << "Please enter the value for So: ";
    So = validateDouble(So);
    cout << "Please enter the value for Vo: ";
    Vo = validateDouble(Vo);
    cout << "Please enter the value for A: ";
    a = validateDouble(a);
    cout << "Please enter the value for T: ";
    t = validateDouble(t);

    double mS = So + (Vo *t) + (1/2) * a * (t * t);
    
    cout << "\nThe value for final position is " << setprecision(4);
    cout << color;
    cout << mS << endl;
    cout << reset;
  }
  if (mInput == "3")
  {
    cout << "\nV^2 = Vo^2 + 2A(S-So)" << endl;
    cout << "Please enter the value for Vo: ";
    Vo = validateDouble(Vo);
    cout << "Please enter the value for A: ";
    a = validateDouble(a);
    cout << "Please enter the value for S: ";
    s = validateDouble(s);
    cout << "Please enter the value for So: ";
    So = validateDouble(So);

    double mV = (Vo * Vo) + 2 * a * (s - So);
    
    cout << "\nThe value for final velocity squared is " << setprecision(4);
    cout << color;
    cout << mV << endl;
    cout << reset;
  }
  if (mInput == "4")
  {
    cout << "\nV_bar = 1/2(V + Vo)" << endl;
    cout << "Please enter the value for V: ";
    v = validateDouble(v);
    cout << "Please enter the value for Vo: ";
    Vo = validateDouble(Vo);

    double mVv = (v + Vo) * (1/2);
   
    cout << "\nThe value for average velocity is " << setprecision(4);
    cout << color;
    cout << mVv << endl;
    cout << reset;
  }
}





 