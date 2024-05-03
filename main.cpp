// Unit 4 assignment 
// Anushreya Sitoula 
// 4.23.24

#include <iostream>
#include <string> 

using namespace std;

//Team class decleration 
class Team
{
  private:
    string name;
    string coachName;    
    string homeCity;
    bool homeStatus;
    int score;
    int timeoutCount;

  public: //default constructor 
    Team(string name, string coachName, string homeCity, bool homeStatus)
        : name(name), coachName(coachName), homeCity(homeCity), homeStatus(homeStatus), score(0), timeoutCount(3) {}

    //setter and getter functions 
    string getName() const {return name; }
    void setName(const string& newName) { name = newName; }

    string getCoachName() const { return coachName; }  
    void setCoachName(const string& newCoachName) { coachName = newCoachName; }

    string getHomeCity() const { return homeCity; }
    void setHomeCity(const string& newHomeCity) { homeCity = newHomeCity; }

    bool getHomeStatus() const { return homeStatus; }
    void setHomeStatus(bool newHomeStatus) { homeStatus = newHomeStatus; }

    int getScore() const { return score; }
    void setScore(int newScore) { score = newScore; }

    int getTimeoutCount() const { return timeoutCount; }
    void setTimeoutCount(int newTimeoutCount) { timeoutCount = newTimeoutCount; }
};

//Scoreboard class decleration
class Scoreboard
{
  private:
    Team homeTeam;
    Team visitorTeam;

  public: //default construct 
    Scoreboard(const Team& home, const Team& visitor) : homeTeam(home), visitorTeam(visitor) {}
    //getter functions for teams 
    Team getHomeTeam() const { return homeTeam; }
    Team getVisitorTeam() const { return visitorTeam; }

    void display () {
      cout << "Home Team: " << homeTeam.getName() << "\tCity: " << homeTeam.getHomeCity() << "\tScore: " << homeTeam.getScore() << endl;
      cout << "Visitor Team: " << visitorTeam.getName() << "\tCity: " << visitorTeam.getHomeCity() << "\tScore: " << visitorTeam.getScore() << endl; 
    }
};

int main() { // Extra Challenge: Show the Team Name and City on your Scoreboard. I gave user input for that extra challenge. 
  
  cout << "Enter Home Team Name: ";
  string homeTeamName;  
  getline(cin, homeTeamName);

  cout << "Enter Home Team City: ";
  string homeTeamCity;
  getline(cin, homeTeamCity);

  cout << "Enter Visitor Team Name: ";
  string visitorTeamName;
  getline(cin, visitorTeamName);

  cout << "Enter Visitor Team City: ";
  string visitorTeamCity;
  getline(cin, visitorTeamCity);

  // instances of Team class 
  Team homeTeam(homeTeamName, "HomeCoachName", homeTeamCity, true);
  Team visitorTeam(visitorTeamName, "VisitorCoachName", visitorTeamCity, false);

  // instances of Scoreboard class
  Scoreboard scoreboard(homeTeam, visitorTeam);

  scoreboard.display(); 

  return 0;
}
