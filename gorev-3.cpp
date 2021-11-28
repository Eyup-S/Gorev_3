#include <iostream>
#include <vector>

template <class Mx>
std::vector<std::vector<Mx> > create_matrix(Mx x, int r, int c){	
	std::vector<std::vector<Mx> > matris;
	
	for(int i= 0; i<r; i++){
		std::vector<Mx> row;
		
		for(int j = 0; j<c;j++){
			
			row.push_back(x);
		}
		
	
		matris.push_back(row);
	}
	return matris;
	
}  

int main(){
		

}
