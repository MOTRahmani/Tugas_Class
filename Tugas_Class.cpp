#include <iostream>
using namespace std;

class musim{
	public:
		void perbedaannya(string cuaca);
		int  lama_musim;
		string pertanda;

int main(){
	musim musim_panas, musim_hujan, musim_gugur, musim_salju;
	
	musim_panas.pertanda="Setiap hari terik/panas";
	musim_hujan.pertanda="Akan sering turun hujan";
	musim_gugur.pertanda="dedaunan mulai berguguran";
	musim_salju.pertanda="turunnya butir-butir salju";
	
	musim_panas.lama_musim=5;
	musim_hujan.lama_musim=6;
	musim_gugur.lama_musim=1;
	musim_salju.lama_musim=1;
	
cout << "Musim kemarau / Musim panas"<<endl;	
cout << (musim_panas.pertanda)<<endl;
musim_panas.perbedaannya("Jarang ada nya hujan");
cout <<endl;
}
