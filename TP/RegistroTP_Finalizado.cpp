#include<iostream>
#include<cstdlib>
#include <fstream>
#include <conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int clave , opcion , Bclave;
	char temporalBuf[10];
	char nombre[30];
	ofstream Guardar;
	ifstream Leer;
	ofstream Temp;
	Guardar.open("Fichero.txt",ios::app);
	
	/while(true)/
	do {
	
		cout<<"\tBIENVENIDOS AL SISTEMA DE REGISTRO AOMA"<<endl;
		cout<<"-"<<endl;
		cout<<"\t1.-Guardar"<<endl;
		cout<<"\t2.-Leer"<<endl;
		cout<<"\t3.-Buscar"<<endl;
		cout<<"\t4.-Eliminar"<<endl;
		cout<<"\t5.-Modificar"<<endl;
		cout<<"\t6.-Toma de asistencia Gpo-A1"<<endl;
		cout<<"\t7-Toma de asistencia Gpo-B1"<<endl;
		cout<<"\t8.-Toma de asistencia Gpo-C2"<<endl;
		cout<<"\tIngrese opcion:"<<endl;
		fgets(temporalBuf,10,stdin);
		opcion=atoi(temporalBuf);
		/*cin>>opcion; Causaba conflicto al validar entradas ya que en entrabas de caracteres me arrojaba un bug
		, resulto con ruta de caracteres temporales*/ 
		system("cls");
		switch(opcion)
		{
			case 1:
				{
					cout<<"Ingresa Nombre:"<<endl;
					cin>>nombre;
					cout<<"Ingresa Clave:"<<endl;
					cin>>clave;
					Guardar<<nombre<<" "<<clave<<endl;
					system("cls");
					break;
					
				}
			case 2:
			{
					Leer.open("Fichero.txt");
					Leer>>nombre;
					while(!Leer.eof())
					{
						Leer>>clave;
						cout<<"Nombre:"<<nombre<<endl;
						cout<<"Clave:"<<clave<<endl;
						cout<<endl;
						Leer>>nombre;	
					}
					Leer.close();
					break;
					/getch();/*Pausamos el programa hasta digitar una tecla*/
				/*	system("cls");/Terminada la funcion borrar pantalla*/
			}
			case 3 :
			{
				Leer.open("Fichero.txt");
				Leer>>nombre;
				bool encontrado=false;
				cout<<"Ingrese clave a buscar"<<endl;
				cin>>Bclave;
				while(!Leer.eof())
					{
				Leer>>clave;
				if(clave==Bclave)
						{
							encontrado=true;
					cout<<"Nombre.."<<nombre<<endl;
					cout<<"Clave.."<<clave<<endl;
					cout<<endl;
						}
						Leer>>nombre;
					}
					if(encontrado==false)
					{
						cout<<"Clave no encontrada"<<endl;
					}
					Leer.close();
					/cout<<"Presiona cualquier tecla para regresar a Menu Principal"<<endl;/
					getch();
					
				/*	getch();/*Pausamos el programa hasta digitar una tecla */
				/*	system("cls");Terminada la funcion borrar pantalla */
					
				}
				case 4 :
			{
				Leer.open("Fichero.txt");
				Temp.open("Temp.txt");
				Leer>>nombre;
				bool encontrado=false;
				cout<<"Ingrese clave a eliminar"<<endl;
				cin>>Bclave;
				while(!Leer.eof())
					{
				Leer>>clave;
				if(clave==Bclave)
						{
							encontrado=true;
					cout<<"Nombre.."<<nombre<<endl;
					cout<<"Clave.."<<clave<<endl;
					cout<<endl;
					cout<<"Eliminado"<<endl;
						}else{
							Temp<<nombre<<" "<<clave<<endl;
						}
						
						Leer>>nombre;
					}
					if(encontrado==false)
					{
						cout<<"Clave no encontrada"<<endl;
					}
					Leer.close();
					Temp.close();
					remove("Fichero.txt");
					rename("Temp.txt","Fichero.txt");
					cout<<"Presiona cualquier tecla para regresar a Menu Principal"<<endl;
					
					getch();/Pausamos el programa hasta digitar una tecla/
					/system("cls");/*Terminada la funcion borrar pantalla*/
					break;
					
				}	
				case 5:
			{
				cout<<"Modificar"<<endl;
				break;
			}
			case 6 : {
			
			{
			int n;
		    int numeros[100];
		    cout<<"\tTOMA DE ASISTENCIA"<<endl;
		    cout<<"Total de alumnos en Lista ==32"<<endl;
		    cout<<"La asistencia se creara con los valores de:"<<endl;
		    cout<<"Asistencia=1"<<endl;
		    cout<<"Falta=0"<<endl;
		    cout<<" "<<endl;
		    for(int i=1;i<=32;i++)
		    {
		    	do{
		        cout<<"Asistencia Persona n.-"<<i<<endl;
		        cin>>numeros[i];
		        }while(numeros[i]>1);
		    }
		    for(int i=1 ; i<=32 ; i++)
		    {
		    	cout<<"Persona .-"<<i<<"--->"<<numeros[i]<<endl;
			}
		
		    return 0;
			}
			case 7 :
			{
			int n;
		    int numeros[100];
		    cout<<"\tTOMA DE ASISTENCIA"<<endl;
		    cout<<"Total de alumnos en Lista ==32"<<endl;
		    cout<<"La asistencia se creara con los valores de:"<<endl;
		    cout<<"Asistencia=1"<<endl;
		    cout<<"Falta=0"<<endl;
		    cout<<" "<<endl;
		    for(int i=1;i<=32;i++)
		    {
		    	do{
		        cout<<"Asistencia Persona n.-"<<i<<endl;
		        cin>>numeros[i];
		        }while(numeros[i]>1);
		    }
		    for(int i=1 ; i<=32 ; i++)
		    {
		    	cout<<"Persona .-"<<i<<"--->"<<numeros[i]<<endl;
			}
					
		    	getch();
			}
				
		
		}
		case 8 :
			{
			int n;
		    int numeros[100];
		    cout<<"\tTOMA DE ASISTENCIA"<<endl;
		    cout<<"Total de alumnos en Lista ==32"<<endl;
		    cout<<"La asistencia se creara con los valores de:"<<endl;
		    cout<<"Asistencia=1"<<endl;
		    cout<<"Falta=0"<<endl;
		    cout<<" "<<endl;
		    for(int i=1;i<=32;i++)
		    {
		    	do{
		        cout<<"Asistencia Persona n.-"<<i<<endl;
		        cin>>numeros[i];
		        }while(numeros[i]>1); 
		    }
		    for(int i=1 ; i<=32 ; i++)
		    {
		    	cout<<"Persona .-"<<i<<"--->"<<numeros[i]<<endl;
			}
			
		    	getch();
			}
				
		
		
				
		}/Cierre del switch/
		
	}while(opcion!=8);
	
}
