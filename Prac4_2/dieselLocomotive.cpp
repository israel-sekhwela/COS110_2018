#include "dieselLocomotive.h"

dieselLocomotive :: dieselLocomotive() : vehicle(){

}

dieselLocomotive :: ~dieselLocomotive(){
	operator--();
	cout << "diesel locomotive removed\n";
}

void	dieselLocomotive :: setPassengerLimit(int s){
	passengerLimit = s;
}
int	dieselLocomotive :: getPassengerLimit(){
	return (passengerLimit);
}

void	dieselLocomotive :: determineRouteStatistics(){
	int	p_carried = 0;
	int	distance = 0;
	int	originCoordinates[] = {-1, -1};
	int	x_coordinate, y_coordinate;
	int	exitCoordinates[2];
	string	status;

	for(int i = 0; i < getSize(); i++){
		for(int j = 0; j < getSize(); j++){	
			if(getMapAt(i,j) == 'O'){
				originCoordinates[0] = i;
				originCoordinates[1] = j;
				break;
			}
		}
		if(originCoordinates[0] >= 0 && originCoordinates[1] >= 0){
			break;		
		}
	}

	x_coordinate = originCoordinates[0];
	y_coordinate = originCoordinates[1];
	for(int i= originCoordinates[0]; i < getSize(); i++){
		 for(int j = originCoordinates[1]; j < getSize(); j++){	
			if(getMapAt(i,j) == '#' || getMapAt(i,j) == 'M' || getMapAt(i,j) == 'N' || getMapAt(i,j) == 'P'){	
				if(getMapAt(i,j) == 'M'){
					p_carried += 50;
				}
				else
				if(getMapAt(i,j) == 'N'){
					p_carried += 25;
				}
				else 
				if(getMapAt(i,j) == 'P'){
					p_carried += 10;
				}
				distance++;
			}	
			else 
			if(getMapAt(i,j) == 'E'){
				exitCoordinates[0] = i;
				exitCoordinates[1] = j;
				originCoordinates[1] = -1;
				break;
			}	
		}
		if(originCoordinates[1] == -1){
			break;
		}
		originCoordinates[1] = 0;	
	}
	
	if(p_carried > passengerLimit){	
		status = "Not Viable";
	}
	else{
		status = "Viable";		
	}
	cout << "Name: "<< getName() << endl;
	cout << "Origin Coordinates: " << x_coordinate << "," << y_coordinate << endl;
	cout << "Exit Coordinates: " << exitCoordinates[0] << "," << exitCoordinates[1] << endl;
	cout << "Distance: " << distance << endl;
	cout << "Passengers Carried: " << p_carried << endl;
	cout << "Status: " << status << endl;
}
