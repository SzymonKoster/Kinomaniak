#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Logowanie {
	private:
		string imie;
		string nazwisko;
		string login;
		string haslo;
		string mail;
	public:
		void setImie(string imie){
			this->imie=imie;
		}
		void setNazwisko(string nazwisko){
			this->nazwisko=nazwisko;
		}
		void setLogin(string login){
			this->login=login;
		}
		void setMail(string mail){
			this->mail = mail;
		}
		void setHaslo(string haslo){
			this->haslo=haslo;
		}
		
		string getImie(){
			return imie;
		}
			
		string getNazwisko(){
			return nazwisko;
		}
			
		string getLogin(){
			return login;
		}
			
		string getMail(){
			return mail;
		}
		string getHaslo(){
			return haslo;
		}


		void PrzypomnienieHasla(string imie, string nazwisko, string login, string mail) {
            cout<<"Wprowadz login: ";
            cin>> login;
            if(login!=0 /*Trzeba jakoś sprawdzić czy istnieje w bazie*/){
                cout<<"Wprowadz adres email: ";
                cin>>mail;
                if(mail!=0 /*Trzeba jakoś sprawdzić czy istnieje w bazie*/){
                    cout<<"Wprowadz imie: ";
                    cin>>imie;
                     if(imie!=0 /*Trzeba jakoś sprawdzić czy istnieje w bazie*/){
                        cout<<"Wprowadz nazwisko: ";
                        cin>>nazwisko;
                        if(nazwisko!=0/*Trzeba jakoś sprawdzić czy istnieje w bazie*/){
                            cout<<"Poprawne dane logowania, twoje haslo to: ";
                            cout<<haslo;
                        }else{
                            cout<<"Bledne Nazwisko\n";
                        }
                     }else{
                         cout<<"Bledne Imie\n";
                     }
                }else{
                    cout<<"Nie istnieje konto z takim mailem.\n";
                }

            }else{
                cout<<"Nie istnieje konto z takim loginem.\n";
            }
        }
        
		void UtworzenieKonta(string imie, string nazwisko, string login, string haslo, string mail) {
			setImie(imie);
			setNazwisko(nazwisko);
			setLogin(login); //czy nie ma go juz na portalu
			setHaslo(haslo); //jakies ograniczenia wobec hasla, ilosc znakow itp
			setMail(mail); //czy nie ma go juz na portalu
			
		}
		void EdycjaKonta(/*trzeba pomyslec co tu wstawic*/) {
            int n = 1;
            int x = 1;
            string temp;
            string pewnosc;
            while(n!=0){
                cout<<"Co chcesz zmienic w swoim koncie?\n";
                cout<<"[1] Login\n";
                cout<<"[2] maila\n";
                cout<<"[3] Haslo\n";
                cout<<"[0] Anuluj\n";
                cout<<"Twoj wybor: ";
                cin>>n;

                switch(n)
            {
                case 1://login
                    system("cls");
                    cout<<"Twoj obecny login: "<<getLogin();
                    cout<<"\nWprowadz nowy login: ";
                    cin>>temp;
                    while(x==1)
                {
                    cout<<"\n Czy jestes pewien zmiany loginu? t/n";
                    cin>>pewnosc;
                   if(pewnosc=="t"){
                     setLogin(temp);
                     cout<<"\nNowy Login to: "<<getLogin();
                      system("pause");
                      x=0;
                    }else if(pewnosc=="n"){
                        cout<<"Anulowano zmiane maila";
                        system("pause");
                        x=0;
                   }else{
                       cout<<"Podano bledna odpowiedz, wprowadz t (tak) lub n (nie)";
                       system("pause");
                   }
                }
                x=1;
                break;

                case 2://mail
                    system("cls");
                    cout<<"Twoj obecny mail: "<<getMail();
                    cout<<"\nWprowadz nowy mail: ";
                    cin>>temp;
                    while(x==1)
                {
                    cout<<"\n Czy jestes pewien zmiany maila? t/n";
                    cin>>pewnosc;
                   if(pewnosc=="t"){
                     setLogin(temp);
                     cout<<"\nNowy Mail to: "<<getMail();
                      system("pause");
                      x=0;
                    }else if(pewnosc=="n"){
                        cout<<"Anulowano zmiane maila";
                        system("pause");
                        x=0;
                   }else{
                       cout<<"Podano bledna odpowiedz, wprowadz t (tak) lub n (nie)";
                       system("pause");
                   }
                }
                x=1;
                break;

                case 3://mail
                    system("cls");
                    cout<<"Twoje obecna haslo: "<<getHaslo();
                    cout<<"\nWprowadz nowe haslo: ";
                    cin>>temp;
                    while(x==1)
                {
                    cout<<"\n Czy jestes pewien zmiany hasla? t/n";
                    cin>>pewnosc;
                   if(pewnosc=="t"){
                     setLogin(temp);
                     cout<<"\nNowe haslo to: "<<getHaslo();
                      system("pause");
                      x=0;
                    }else if(pewnosc=="n"){
                        cout<<"Anulowano zmiane hasla";
                        system("pause");
                        x=0;
                   }else{
                       cout<<"Podano bledna odpowiedz, wprowadz t (tak) lub n (nie)";
                       system("pause");
                   }
                }
                x=1;
                break;

                case 0:
                cout<<"Anulowano edycje konta";
                system("pause");
                break;
            }

            }

        }		


};

class ZakupBiletu {
	private:
		int ilosc;
		float kwota;
		string nazwaFilmu;
		int numerSali;
		int numerRzedu;
		int numerMiejsca;
		
	public:
		void PrzekierowanieDoPlatnosci(float kwota){
		
		}
		void WyswietlRepertuar(){
			//baza albo sztuczny
		}
};

class Platnosc {
	private:
		string kwota;
		string sposobZaplaty;
		//int numerKlienta;
		//string hasloBank;

	public:
		void PrzekierowanieDoBanku(){} //wywalic?
		void RealizacjaPlatnosci(){}
		void WalidacjaDanych(){}
};

class ZamawianieJedzenia {
	private:
		string nazwaProduktu;
		int iloscProduktu;
		float kwota;
	public:
		void WyswietlMenu(){
			//baza jedzonka
		}
		void WyborZamowienia(string nazwaProduktu, int iloscProduktu) {
			//mozna wybierac zarcie
		}
};

class PlatnoscOnline {
	float kwota;
	string sposobZaplaty;
	public:
		void WyswietlenieParagonu(){
			//to samo co niżej
			//cout << "kwota" LUB osobna funkcja do wyswietlania wszystkih danych z paragonu 
		}
};

class PlatnoscNaMiejscu {
	float kwota;
	string sposobZaplaty;
public:
	void WyswietlenieParagonu(){
		//cout << "kwota" LUB osobna funkcja do wyswietlania wszystkih danych z paragonu 
	}
};

class Repertuar {
	string baza;//string? czy podpinamy jakąś małą bazę choćby z pliku? w najgorszym przypadku chyba plik csv
public: 
	void PrzegladanieFilmow(){
		//baza filmow(moze byc z maina)
		//bedzie z jakiegos api albo samemu mozna sztucznie dodac
	}
	
	void OcenaFilmow(){
		//postawienie oceny np od 0 do 10
	}
};


int main()
{
 cout<< "Witaj Kinomaniaku!\nCo dzis obejrzymy?";  
}