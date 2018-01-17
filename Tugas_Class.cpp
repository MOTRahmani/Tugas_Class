#include <iostream>
using namespace std;

class musim{
	public:
		void perbedaannya(string cuaca);
		int  lama_musim;
		string pertanda;
		
};

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

cout << "Musim dingin / Musim hujan"<<endl;
cout << (musim_hujan.pertanda)<<endl;
musim_hujan.perbedaannya("Sering hujan dan bisa mengakibatkan terjadi banjir");
cout <<endl;

cout << "Musim gugur"<<endl;
cout << (musim_gugur.pertanda)<<endl;
musim_gugur.perbedaannya("Temperatur suhu agak dingin");
cout <<endl;

cout << "Musim Salju"<<endl;
cout << (musim_salju.pertanda)<<endl;
musim_salju.perbedaannya("Dimana terlihat salju menumpuk yang memikat untuk dimainkan");
}

void musim::perbedaannya(string cuaca){
	cout << "Perbedaannya "<< pertanda<<" !!"<<endl;
	cout << "Informasinya "<< cuaca <<" !!"<<endl;
	cout << "Lama Musimnya "<< lama_musim <<" Bulan !!"<<endl;
	
}
