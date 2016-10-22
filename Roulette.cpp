#include <iostream>
#include <ctime>
using namespace std;

int main()
{	
	cout << "Välkommen till Roulette!" << endl<<endl;
	/*Skapa minne för att hålla saldo, satsning, svar samt roulettehjulet i minne följt av 
	presentation av saldot*/
	
	double saldo = 1000;
	double satsning;
	double spelnummer;
	int svar;
	int hjul;
	
	cout << "Du har: "<< saldo; cout << " kr i saldo på kontot" <<endl<<endl;

	
	bool villkor=true;		/*Villkor för att köra Vill-du-spela-igen-loopen så länge
							som personen vill spela*/
	while(villkor){
		
		cout<<"Vill du spela Roulette?"<<endl;
		cout<<"Skriv '1' för att fortsätta och '2' för att avsluta"<<endl;
		cin>>svar;
		
		if(svar==1){			/*Loop som börjar om ifall man satsar något
									annat än 100, 300 eller 500 samt den satsningen*/
			bool satsningssumma=true;
			while(satsningssumma){
				cout<<"Hur mycket vill du satsa?"<<endl<<endl;
				cout<<"Du kan satsa 100, 300 eller 500kr"<<endl;
				cin>>satsning;
				if(((satsning==100)||(satsning==300)||(satsning==500))){
					cout<<"Du har satsat: "<<satsning; cout<< "kr"<<endl<<endl;
					saldo=saldo-satsning;
					cout<<"Du har: " <<saldo; cout<<" kr kvar av ditt saldo"<<endl<<endl;
					satsningssumma=false;
				}	
				else{
					cout<<"Tyvärr kan du inte satsa den summan, försök igen"<<endl;
					satsningssumma=true;
					}
			
					/*Val av nummer samt slumpgenerator med info om man vunnit/förlorat
					samt vinstuträkning med vinst *11 för att man får tillbaka sin
					ursprungliga satsning*/
					
				cout<<"Vill du spela på nummer?"<<endl;
				cout<<"Ange '1' för Ja eller '2' för Nej"<<endl;
				cin>>svar;
				if(svar==1){
					cout<<"Välj ett nummer att spela på mellan 1-36: ";
					cin>>spelnummer;
					srand(time(0));
					hjul = rand() % 36 + 1;
					cout<<"Hjulet stannade på nummer: "<<hjul<<endl;
					if (hjul==spelnummer){
						cout<<"Du vann 10 ggr pengarna!!!"<<endl;
						satsning=(satsning*11);
						cout<<"Du vann " <<satsning; cout<<" kr inklusive summan du satsade!"<<endl;
						saldo=saldo+satsning;
						cout<<"Ditt saldo uppgår nu till: "<<saldo; cout<<" kr"<<endl<<endl;
					}	
						
					else{
						cout<<"Du förlorade"<<endl<<endl;
					}
					cout<<"Vill du spela igen?"<<endl;
					cout<<"Tryck '1' för Ja eller '2' för Nej"<<endl;
					cin>>svar; 
							
					if(svar==1){
						satsningssumma=true;
							
					}	
					else if(svar==2){		/*Avslutande av loop ifall spelaren vill sluta*/
						cout<<"Tack för att du ville spela roulette"<<endl;
						villkor=false;
					}	
						/*Val av att satsa på färg, sedan val av färg*/
				}		
				else if(svar==2){		
					cout<<"Vill du spela på färg?"<<endl;
					cout<<"Tryck '1' för Ja eller '2' för Nej"<<endl;
					cin>>svar;
						
					if(svar==1){
						cout<<"Välj en färg att spela på, '1' för Röd och '2' för Svart"<<endl;
						cin>>spelnummer;
						srand(time(0));
						hjul = rand() % 36 + 1;
		
		/*Räkna ut ifall jämnt nummer och spelarens val av svart stämmer överrens*/
		
						if((hjul%2==0)&&(spelnummer==2)){
							cout<<"Du vann 2 ggr pengarna!!!"<<endl;
							satsning=(satsning*3);
							cout<<"Du vann " <<satsning; cout<<" kr inklusive summan du satsade!"<<endl;
							saldo=saldo+satsning;
							cout<<"Ditt saldo uppgår nu till: "<<saldo; cout<<" kr"<<endl<<endl;
							cout<<"Vill du spela igen?"<<endl;
							cout<<"Tryck '1' för Ja eller '2' för Nej"<<endl;
							cin>>svar; 
							
							if(svar==1){
								satsningssumma=true;
							}
							else if(svar==2){
								cout<<"Tack för att du ville spela roulette"<<endl;
								villkor=false;
							}
			/*Räknar ut ifall ojämnt nummer och spelarens val av röd stämmer överrens*/			
						}	
						else if((hjul%2==1)&&(spelnummer==1)){
							
							cout<<"Du vann 2 ggr pengarna!!!"<<endl;
							satsning=(satsning*3);
							cout<<"Du vann " <<satsning; cout<<" kr inklusive summan du satsade!"<<endl;
							saldo=saldo+satsning;
							cout<<"Ditt saldo uppgår nu till: "<<saldo; cout<<" kr"<<endl<<endl;
							cout<<"Vill du spela igen?"<<endl;
							cout<<"Tryck '1' för Ja eller '2' för Nej"<<endl;
							cin>>svar; 
								
							if(svar==1){
								satsningssumma=true;
							}
							else if(svar==2){
								cout<<"Tack för att du ville spela roulette"<<endl;
								villkor=false;	
							}
						}
	/*Avslutande fråga om man vill spela igen följt av ett villkor för att stäng loop*/		
						else{
							cout<<"Du förlorade"<<endl<<endl;				
							cout<<"Vill du spela igen?"<<endl;
							cout<<"Tryck '1' för Ja eller '2' för Nej"<<endl;
							cin>>svar; 
							
							if(svar==1){
								satsningssumma=true;
								
							}
							else if(svar==2){
								cout<<"Tack för att du ville spela roulette"<<endl;
								villkor=false;
						}
						}
					
					
/*Ifall spelaren trycker nej på både nummer och färg kommer man hit där spelet avslutas*/
					}	
					}				
					else if(svar==2){
						cout<<"Nu finns det inget mer att välja, starta om för att spela igen"<<endl;
						villkor=false;			
					}		
											
		/*Loop-slut för när man tackar Nej till att spela en gång till*/	
			
	else{
	cout<<"Slut"<<endl;
	villkor=false;	
			}
		
		}
		}
	}
	}
	
	
	
	


