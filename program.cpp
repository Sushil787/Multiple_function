#include<iostream>
float interest(int ,int,float);
int sum(int , int);
int multiply(int, int);
int power(int , int);
float division(int , int);


int main(){
	int p;
	int t;
	float r;
	int x,y;
	char ch;
	

	int choose;
	label:
	std::cout<<"input the cases you like: \n";
	std::cout<<" 1. interest \n 2. sum \n 3. multiply \n 4. power \n 5. division \n";
	std::cin>>choose;
	
	switch(choose){

	case 1:{

	std::cout<<"input the principle \n";
	std::cin>>p;
	std::cout<<"input the time \n";
	std::cin>>t;
	std::cout<<"input the rate of interest\n";
	std::cin>>r;
	std::cout<<"the the interest is :\n"<<interest(p,t,r);
	break;
	}
	case 2:
	{
	std::cout<<"input the no x \n";
	std::cin>>x;
	std::cout<<"input the no y \n";
	std::cin>>y;
	std::cout<<"the sum of"<<x<<"and "<<y<<"is :"<<sum(x,y);
	break;

	}
	case 3:{
    std::cout<<"input the no x \n";
	std::cin>>x;
	std::cout<<"input the no y \n";
	std::cin>>y;
	std::cout<<"the multiplication of"<<x<<"and "<<y<<" is :"<<multiply(x,y);
	break;

	}
	case 4:{
	std::cout<<"input the no x for base \n";
	std::cin>>x;
	std::cout<<"input the no y for power \n";
	std::cin>>y;
	std::cout<<"the power of "<<x<<"to the power "<<y<<" is :"<<power(x,y);
	break;

	}
	case 5:{
	std::cout<<"input the no x \n";
	std::cin>>x;
	std::cout<<"input the no y \n";
	std::cin>>y;
	std::cout<<"the division of"<<x<<"and "<<y<<" is :"<<division(x,y);
	break;
	}
	default:
	std::cout<<"error!! 'you mis-pressed!!' \n please press right no .do you want to exit'Y'/'N' \n";
	std::cin>>ch;
	if (ch == 'n'){
	goto label;
	}
	else{
		break;
	}
	}

}
float interest(int x, int y,float z){
	float i = (x*y*z)/100;
	return i;
}
int sum(int x, int y){
	int z  = x+y;
	return z;
}
int multiply(int x, int y){
	int z = x*y;
	return z;
}
float division(int x, int y){
	float z = x/y;
	return z;
}
int power(int x, int y){
	int results = 1;
	for (int i = 0; i<y ;i++){
		results = results * x;
		
	}
	return results;
}
