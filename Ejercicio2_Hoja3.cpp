#include <iostream>
#include <string> //Para guardar variables largas
using namespace std;

int main (){
	string tareas [10];
	int numTareas = 0;
	int opcion;
	
	do{
		cout << "\n1. Agregar tarea \n2. Eliminar tarea \n3. Salir \n Opcion: ";
		cin >> opcion;
		
		if (opcion == 1 && numTareas < 10)
		{
			cout << "Ingrese la tarea: ";
			cin.ignore();
			getline(cin,tareas[numTareas]);
			numTareas++; //Incrementable
		} else if (opcion == 2 && numTareas > 0 ){
			cout << "Ingrese el numero o identificar de la tarea a eliminar : \n";
			cout << "Lista de tareas: \n";
			for(int i=0; i<numTareas; i++){
				cout << i + 1 << "." <<tareas[i] << endl;
			}
			cout << "\n"; 
			int numeroTarea;
			cin >> numeroTarea;
			if(numeroTarea > 0 && numeroTarea <= numTareas){
				for (int i = numeroTarea -1; i < numTareas -1; i++){
					tareas[i] = tareas[i +1];
				}
				numTareas--;
			}
		}
	} while (opcion != 4);
	
	return 0;
}
