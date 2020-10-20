#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cmath>
using namespace std;

// This code is designed to approximate the square root of 2.
// Remember that the square root of 2 is simply the number that square to 2.
//Switched the int to double so the output can be a decimal and not a intiger.
double square(double x){
  //took cout out because it has no need and replaced it with the var y to do X*X
  double y = x*x;
  //returned y so it can be used and not 0 beacause that goes at the end of the code 
  return y;
  //  cout << x*x;
  //  return 0;
}
double lowApprox = 1;
double highApprox = 2;
double middle;

int main() {

// The algorithm is fine. It's worthwhile to look it over and decipher it's inner-workings.    
if (square(lowApprox)<2 && square(highApprox)>2){
    while (abs(lowApprox-highApprox)>.0000001){
        middle = (lowApprox+highApprox)/2;
        if (square(middle)<2){
            lowApprox = middle;
        }
        if (square(middle)>2){
            highApprox = middle;
        }
	 if (square(middle)==2){
	    break;
	}        
    }
}
cout << " The square root of 2 is approximately " << middle;
	return 0;
}