#ifndef ROBOTS_H
#define ROBOTS_H
#include <string>

class robot {
	//std::string rnumber; // robot number
	double rnumber;
	double tnumber; // team number
	double x; //robot x position
	double y; //robot y position
	double travel = 0; // distance robot has travelled
	
public:
	robot(const double& rnumber, const double& tnumber, double x, double y);
	/*
	robot(const int rnumber, const int tnumber, int x, int& y);
	*/
	const double& name() const { return rnumber; }
	const double& team() const { return tnumber; }
	const double& position() const { return (x, y); }
	const double& travelled() const { return travel; }

};
#endif // !ROBOTS_H

//robot(const std::string& rnumber, const std::string& tnumber, std::string& x, std::string& y);
//const std::string name() const { return rnumber; }