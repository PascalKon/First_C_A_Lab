#include <stdio.h> 
 
int main() 
{ 
    
    int arr[20][20]; 
    for(int i=0;i<20;++i){
  	for (int j=0; j<20; j++){
		arr[i][j]=2*(j+(i/2));
  	}
  	
    }
    
    return 0; 
} 
