#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h> 
#include <math.h>
using namespace std;

void Datos_I();
void Datos_E();

void MotorI_Diabetes();
void MotorE_Diabetes();

void MotorI_Apnea();
void MotorE_Apnea();


void MotorI_Coronaria();
void MotorE_Coronaria();



char nombre[50], dia_familia, FV;
string genero, AF, medicamentos, azucar, d1, d2, d3, d4, c1, c2, c3, c4;
int edad, puntaje_Diabetes = 0,  perimetro_ombli, d5, puntaje_Apnea = 0, puntaje_Coronaria = 0;
float IMC, altura_m, altura, peso_actual;



int main()
{
	int Menu;
    Datos_I();
	Datos_E();
	
	cout<<"\n\n";
	system("pause");

    do{
    	system("cls");
    	int datos, numero;
    	cout<<"MENU PRINCIPAL\n\n\t1.-Test para Diabetes\n\t2.-Test para Apnea del Sueño\n\t3.-Test para Enfermedad Coronaria\n\t4.-Salir\n\nElige una de las opciones anteriores: ";
    	cin>>Menu;
    	switch(Menu)
    	{
    		case 1:
    			system("cls");
				MotorI_Diabetes();
				MotorE_Diabetes();
				cout<<"\n\n";
				system("pause");
				break;
				
			case 2:
    			system("cls");
				
				MotorI_Apnea();
				MotorE_Apnea();
				
				cout<<"\n\n";
				system("pause");
				break;
				
			case 3:
    			system("cls");
				
				MotorI_Coronaria();
				MotorE_Coronaria();

				cout<<"\n\n";
				system("pause");
				break;
				
			case 4:
				system("cls");
				cout<<"Gracias por usar este sistema, hasta luego\n\n";
				system("pause");
				break;
				
			default: cout<<"\nEsa opcion no existe\n\n";
				system("pause");
				break;
		}
	}while(Menu!=4);
	
	

}


void Datos_I()
{
	cout<< "\nIngresa tu nombre: ";
	cin.getline(nombre,sizeof(nombre));
	
	cout<< "\nIngresa tu genero: ";
	cin >> genero;
	
	cout<<"\nIngresa tu altura (cm): ";
	cin>> altura;
	
	cout<<"\nIngresa tu peso actual (kg): ";
	cin>> peso_actual;
	
	cout<<"\nIngresa tu edad : ";
	cin>> edad;
	
	altura_m = altura / 100;
	
	IMC = (peso_actual)/(pow(altura_m,2));
}

void Datos_E()
{
	/////////////// CLASIFICACION DEL IMC //////////////////////
	
	cout <<"\n\n CLASIFICACION DEL IMC";
	if (IMC < 18.5)
	{
		cout <<"\n\n"<<nombre<<" te encuentras bajo de peso";
	}
	if (IMC >= 18.5 && IMC < 24.9)
	{
		cout <<"\n\n"<<nombre<<" te encuentras en peso normal";
	}
	if (IMC >= 24.9 && IMC < 29.9)
	{
		cout <<"\n\n"<<nombre<<" te encuentras en sobrepeso";
	}
	if (IMC >= 29.9 && IMC < 34.9)
	{
		cout <<"\n\n"<<nombre<<" te encuentras en obesidad grado I";
	}
	if (IMC >= 34.9 && IMC < 39.9)
	{
		cout <<"\n\n"<<nombre<<" te encuentras en obesidad grado II";
	}
	if (IMC > 40)
	{
		cout <<"\n\n"<<nombre<<" te encuentras en obesidad grado III";
	}
}


void MotorI_Diabetes()
{
	cout<<"\n\n A) No \n B) Si, en mis parientes: abuelos, tios y primos \n C) Si, en mi familia directa: padres, hijos y hermanos \n1. ¿Ha habido un diagnostico de diabetes en algun miembro de su familia?: ";
	cin>> dia_familia;
	
	cout<<"\n\n 2. ¿Perimetro de cintura medido a nivel del ombligo (cm)?: ";
	cin>> perimetro_ombli;

	cout<<"\n\n3. ¿Actividad fisica de al menos 30 minutos diarios?: ";
	cin>> AF;
	
	cout<<"\n\n A) Diario \n B) No diariamente \n 4. ¿Con que frecuencia comes frutas y verduras?: ";
	cin>> FV;
	
	cout<<"\n\n5. ¿Te han recetado mediacamentos para la hipertension?: ";
	cin>> medicamentos;
	
	cout<<"\n\n6. ¿Te han detectado alguna vez un nivel muy alto de azucar en sangre?: ";
	cin>> azucar;
		
}


void MotorE_Diabetes()
{
	if (edad < 35)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	else if (edad >= 35 && edad <= 44)
	{
		puntaje_Diabetes = puntaje_Diabetes + 1;
	}
	else if (edad >= 45 && edad <= 54)
	{
		puntaje_Diabetes = puntaje_Diabetes + 2;
	}
	else if (edad >= 55 && edad <= 64)
	{
		puntaje_Diabetes = puntaje_Diabetes + 3;
	}
	else if (edad > 64)
	{
		puntaje_Diabetes = puntaje_Diabetes + 4;
	}
	
	
	
	switch(dia_familia)
	{
		case 'A': puntaje_Diabetes = puntaje_Diabetes + 0;
				  break; 
				  
		case 'B': puntaje_Diabetes = puntaje_Diabetes + 3;
				  break; 
				  
		case 'C': puntaje_Diabetes = puntaje_Diabetes + 5;
				  break; 
				  
		default: 
				puntaje_Diabetes = puntaje_Diabetes + 0;
				break;
	}
	

	
	if(genero == "Masculino" && perimetro_ombli < 94)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	else if (genero == "Masculino" && perimetro_ombli >=94 && perimetro_ombli <= 102)
	{
		puntaje_Diabetes = puntaje_Diabetes + 3;
	}
	else if (genero == "Masculino" && perimetro_ombli > 102)
	{
		puntaje_Diabetes = puntaje_Diabetes + 4;
	}
	
	
	if(genero == "Femenino" && perimetro_ombli < 80)
	{
			puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	else if (perimetro_ombli >=80 && perimetro_ombli <= 88)
	{
		puntaje_Diabetes = puntaje_Diabetes + 3;
	}
	else if (perimetro_ombli > 88)
	{
		puntaje_Diabetes = puntaje_Diabetes + 4;
	}
	
	
	
	if (AF == "Si")
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	else if (AF == "No")
	{
		puntaje_Diabetes = puntaje_Diabetes + 2;
	}
	
	
	switch(FV)
	{
		case 'A': puntaje_Diabetes = puntaje_Diabetes + 0;
				  break; 
				  
		case 'B': puntaje_Diabetes = puntaje_Diabetes + 1;
				  break; 
				  
		default: 
				puntaje_Diabetes = puntaje_Diabetes + 0;
				break;
	}
	
	
	if (medicamentos == "No")
	{
			puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	if (medicamentos == "Si")
	{
			puntaje_Diabetes = puntaje_Diabetes + 2;
	}
	
	
	if (azucar == "No")
	{
			puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	if (azucar == "Si")
	{
			puntaje_Diabetes = puntaje_Diabetes + 5;
	}
	
	
	if (IMC < 25)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	if (IMC >= 25 && IMC <=30)
	{
		puntaje_Diabetes = puntaje_Diabetes + 1;
	}
	if (IMC > 30)
	{
		puntaje_Diabetes = puntaje_Diabetes + 3;
	}
	
	
	cout <<"\n\nTu puntaje total fue: "<<puntaje_Diabetes;

	
	if (puntaje_Diabetes < 7)
	{
		cout << "\n\n 1% \n Riesgo muy bajo";
	}
	if (puntaje_Diabetes >= 7 && puntaje_Diabetes <= 11)
	{
		cout << "\n\n 4% \n Riesgo bajo";
	}
	if (puntaje_Diabetes >= 12 && puntaje_Diabetes <= 14)
	{
		cout << "\n\n 17% \n Riesgo moderado";
	}
	if (puntaje_Diabetes >= 15 && puntaje_Diabetes <= 20)
	{
		cout << "\n\n 33% \n Riesgo alto";
	}
	if (puntaje_Diabetes > 20)
	{
		cout << "\n\n 50% \n Riesgo muy alto";
	}
	
	cout<<"\n\nIndependientemente del resultado obtenido le recomendamos acudir con un experto para descartar cualquier resultado inesperado";	
}


void MotorI_Apnea()
{
	cout<<"\n1. ¿Ronca fuerte? (tan fuerte que se escucha a traves de puertas cerradas): ";
	cin>> d1;

	cout<<"\n\n2. ¿Se siente con frecuencia cansado, fatigado o somnoliento durante el dia? (por ejemplo, se queda dormido mientras conduce o habla con alguien): ";
	cin>> d2;
	
	cout<<"\n\n 3. ¿Alguien lo observo dejar de respirar o ahogarse/quedarse sin aliento mientras dormia?: ";
	cin>> d3;
	
	cout<<"\n\n4. ¿Tiene o esta recibiendo tratamiento para la presion arterial alta?: ";
	cin>> d4;

	cout<<"\n\n5. ¿Cual es el tamaño de su cuello (cm)?: ";
	cin>> d5;
		
}


void MotorE_Apnea()
{
	if(d1 == "Si")
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if(d1 == "No")
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}

	
	if(d2 == "Si")
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if(d2 == "No")
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}
	
	
	if(d3 == "Si")
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if(d3 == "No")
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}
	
	
	if(d4 == "Si")
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if(d4 == "No")
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}
	
	
	if(IMC >= 35)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if (IMC < 35)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}
	
	
	if(edad >= 50)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if (edad <50)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}

	
	
	if(genero == "Masculino" && d5 < 43)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}
	else if(genero == "Masculino" && d5 >= 43)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	
	if(genero == "Femenino" && d5 < 41)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}
	else if(genero == "Femenino" && d5 >= 41)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}

	
	
	if(genero == "Masculino")
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if(genero == "Femenino")
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}
	
	cout <<"\n\nTu puntaje total fue: "<<puntaje_Apnea;
	
	if (puntaje_Apnea >= 0 && puntaje_Apnea <= 2)
	{
		cout <<"\n\nBajo riesgo AOS (Apnea Obstructiva del Sueño)";
	}
	if (puntaje_Apnea >= 3 && puntaje_Apnea <= 4)
	{
		cout <<"\n\nRiesgo intermedio de AOS (Apnea Obstructiva del Sueño)";
	}
	if (puntaje_Apnea >= 5 && puntaje_Apnea <= 8)
	{
		cout <<"\n\nAlto riesgo de AOS (Apnea Obstructiva del Sueño)";
	}
	
}


void MotorI_Coronaria()
{
	cout<<"\n1. ¿Tienes diabetes?: ";
	cin>> c1;

	cout<<"\n\n2. ¿Tienes familiares directos a los cuales les han detectado la enfermedad coronaria?: ";
	cin>> c2;
	
	cout<<"\n\n 3. ¿Realiza alguna actividad fisica?: ";
	cin>> c3;
	
	cout<<"\n\n4. ¿Tiene trastornos del sueño, como apnea del sueño o privación del sueño?: ";
	cin>> c4;

}


void MotorE_Coronaria()
{
	if (genero == "Masculino" && edad < 45)
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	else if (genero == "Masculino" && edad >= 45 && edad <= 49)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	else if (genero == "Masculino" && edad >= 50 && edad <= 59)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	else if (genero == "Masculino" && edad > 60)
	{
		puntaje_Coronaria = puntaje_Coronaria + 3;
	}
	
	if (genero == "Femenino" && edad < 45)
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	else if (genero == "Femenino" && edad >= 45 && edad <= 49)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	else if (genero == "Femenino" && edad >= 50 && edad <= 59)
	{
		puntaje_Coronaria = puntaje_Coronaria + 2;
	}
	else if (genero == "Femenino" && edad > 60)
	{
		puntaje_Coronaria = puntaje_Coronaria + 3;
	}
	
	if (genero == "Femenino")
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	else if (genero == "Masculino")
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	
	
	if (c1 == "Si")
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	else if (c1 == "No")
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	
	
	if (c2 == "Si")
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	else if (c2 == "No")
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	
	
	
	if (c3 == "Si")
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	else if (c3 == "No")
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	
	if (c4 == "Si")
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	else if (c4 == "No")
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	
	
	if (IMC < 25)
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	if (IMC >= 25 && IMC <=30)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	if (IMC > 30)
	{
		puntaje_Coronaria = puntaje_Coronaria + 3;
	}
	
	
	
	cout <<"\n\nTu puntaje total fue: "<<puntaje_Coronaria;
	
	
	if (puntaje_Coronaria <= 3)
	{
		cout << "\n\n 1% \n Riesgo muy bajo";
	}
	if (puntaje_Coronaria >= 4 && puntaje_Coronaria <= 6)
	{
		cout << "\n\n 4% \n Riesgo bajo";
	}
	if (puntaje_Coronaria >= 7 && puntaje_Coronaria <= 9)
	{
		cout << "\n\n 17% \n Riesgo moderado";
	}
	if (puntaje_Coronaria >= 9 && puntaje_Coronaria <= 10)
	{
		cout << "\n\n 33% \n Riesgo alto";
	}
	if (puntaje_Coronaria >= 11)
	{
		cout << "\n\n 50% \n Riesgo muy alto";
	}
	
	cout<<"\n\nIndependientemente del resultado obtenido le recomendamos acudir con un experto para descartar cualquier resultado inesperado";
}


