#include <iostream>

using namespace std;

int main () {
	double bayam,ketumbar,garam,gula,kol,tolbel;
	
	cout<<"=============================================================================================================="<<endl;
	cout<<"=                                                                                                            ="<<endl;
	cout<<"=                                                   TOKO KELONTONG                                           ="<<endl;
	cout<<"=                                                  SAYUR BAYAM 5000                                          ="<<endl;
	cout<<"=                                                   KETUMBAR 1000                                            ="<<endl;
	cout<<"=                                                    GARAM 10000                                             ="<<endl;
	cout<<"=                                                     GULA 12500                                             ="<<endl;
	cout<<"=                                                      KOL 1000                                              ="<<endl;
	cout<<"=                                                                                                            ="<<endl;
	cout<<"=============================================================================================================="<<endl;
	
	cout<<" Masukan Jumlah Sayur Bayam Yang Ingin Dibeli = ";
	cin>>bayam;
	cout<<" Masukan Jumlah Ketumbar Yang Ingin Dibeli = ";
	cin>>ketumbar;
	cout<<" Masukan Jumlah Garam Yang Ingin Dibeli = ";
	cin>>garam;
	cout<<" Masukan Jumlah Gula Yang Ingin Dibeli = ";
	cin>>gula;
	cout<<" Masukan Jumlah Kol Yang Ingin DiBeli = ";
	cin>>kol;
	
	tolbel= bayam*5000 + ketumbar*1000 + garam*10000 + gula*12500 + kol*1000;
	
	cout<<endl;
	cout<<"Total Belanjaan Anda Adalah Rp. "<<tolbel;
	
	
	
	return 0;
}
