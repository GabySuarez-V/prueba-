//Declaración de librerias
#include<stdio.h>
#include<string.h>

main()
{
	//Declaración de variables
	int horario,r,hora,horas,tipo;
	double pago;
	char nombre[30],dia[20],n;
	
		//Proceso
	do
	{
		printf("\n\t\t PROYECTO FINAL:\tSuarez Velasco Gabriela \t 22 de Enero del 2021\n\n\n");
		printf("Bienvenido al Kartodromo La Llanta Veloz");
	    printf("\nPorfavor introduzca su nombre para dar inicio a la reservaci%cn:\n",162);
	    fflush(stdin); //limpia el buffer 
	    gets(nombre); // almacena una cadena, guarada el nombre 
		printf("\nKartodromo La Llanta Veloz ofrece renta de GoKarts de la siguiente manera:\n");
		printf("\n\n\n\rReservaci%cn \"1\": GoKart profesional\t\n\r\t\t\tCosto:\t\r\tTiempo: \n\r\t1 Hora \t\t$350",162,160);
		printf("\n\n\n\rReservaci%cn \"2\": GoKart para adultos velocidad media \t\n\r\t\t\tCosto: \t\r\tTiempo: \n\r\t1 Hora \t\t$275",162,160); //162 para el acento
		printf("\n\n\n\rReservaci%cn \"3\": Cadet para ni%cos (3-10 a%co a consideracion) \t\t\t\t\n\t\t\tCosto: \t\r\tTiempo:\n\r\t1 Hora \t\t$100",162,164,164,160); //164 es para que escriba la ñ
		printf("\n\nNuestros horarios de apartado son:\n");
		printf("\n\tViernes:\t\t\tS%cbado:\t\t\t\tDomingo:\n\r\t1 pm a 6 pm\t\t\t1 pm a 6 pm\t\t\t1 pm a 6 pm",160);
		printf("\n\nCualquier tipo de reservaci%cn incluye equipo de protecci%cn",162,162);
		printf("\n\nContamos con una cantidad de 150 GoKarts profesional y medios, y 75 Cadets (para ni%cos 3-10).\n",164);
	    printf("\n\nIngresa el tipo de reservaci%cn deseada con el numero correspondiente 1,2 o 3:\n",162);
		scanf("%d",&tipo);
		while(tipo!=1&&tipo!=2&&tipo!=3)
		{ 
			printf("Lo sentimos, ingresa solamente los numeros 1,2 o 3:\n");
			scanf("%d",&tipo);
		}
		if(tipo==1)
		{
				printf("\nIngresa la cantidad de GoKarts que quiere rentar:\n");
				scanf("%d",&r);
				while(r<=0||r>100)
				{
					printf("\n");printf(nombre);printf(",lo sentimos la cantidad ingresada excede el limite de GoKarts:");
					scanf("%d",&r);
				}
				printf("\nIndica el d%ca de reservaci%cn:\n",161,162);
				printf("\n\rViernes(1)  \t\tS%cbado(2)  \tDomingo(3)\n\n",160);
				scanf("%d",&horario);
				while(horario!=1&&horario!=2&&horario!=3)
					{
						printf("\nD%ca seleccionado inv%clido, por favor vuelve a intentarlo:\n",161,160);
						scanf("%d",&horario);
					}
			    switch(horario)
				{
				    case 1:
				    	strcpy(dia,"Viernes"); //strcpy copia lo que hay en una cadena a otra 
				    	break;
				    case 2:
				    	strcpy(dia,"Sabado");
				    	break;
				    default:
				    	strcpy(dia,"Domingo");
				    	break;
				}
				printf("\n\nSelecciona la hora de inicio:\n\n\r1:00 PM(1)\t\t2:00 PM(2)\t\t3:00 PM(3)\t\t4:00 PM(4)\t\t5:00 PM(5)\n");
				scanf("%d",&hora);
				while(hora!=1&&hora!=2&&hora!=3&&hora!=4&&hora!=5)
				{
					printf("Lo sentimos su hora de inicio esta mal, intente de nuevo por favor:\n");
					scanf("%d",&hora);
				}
				switch(hora)
				{
					case 1:
						printf("\nIndique las horas que desea rentar:\n");
						scanf("%d",&horas);
						while(horas<=0||horas>5)
						{
							printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							scanf("%d",&horas);
						}
						pago=horas*r*350;
						printf("\n\nHorario de carrera: %s", dia); printf(" 1:00 pm");
						break;
					case 2:
						printf("\nIndique las horas que desea rentar:\n");
						scanf("%d",&horas);
						while(horas<=0||horas>4)
						{
							printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							scanf("%d",&horas); 
						}
						pago=horas*r*350;
						printf("\n\nHorario de carrera: %s", dia); printf(" 2:00 pm");
						break;
					case 3:
						printf("\nIndique las horas que desea rentar:\n");
						scanf("%d",&horas);
						while(horas<=0||horas>3)
						{
							printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							scanf("%d",&horas);
						}
						pago=horas*r*350;
						printf("\n\nHorario de carrera: %s", dia); printf(" 3:00 pm");
						break;
					case 4:
						printf("\nIndique las horas que desea rentar:\n");
						scanf("%d",&horas);
						while(horas<=0||horas>2)
						{
							printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							scanf("%d",&horas);
						}
						pago=horas*r*350;
						printf("\n\nHorario de carrera: %s", dia); printf(" 4:00 pm");
						break;
					default:
						printf("\nIndique las horas que desea rentar:\n");
						scanf("%d",&horas);
						while(horas<=0||horas>1)
						{
							printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							scanf("%d",&horas);
						}
						pago=horas*r*350;
						printf("\n\nHorario de carrera: %s", dia); printf(" 5:00 pm");
						break;
				}		
		}
		else
		{
				if(tipo==2)
				{
						printf("\nIngresa la cantidad de GoKarts que quiere rentar:\n");
				        scanf("%d",&r);
						while(r<=0||r>100)
				        {
					        printf("\n");printf(nombre);printf(",lo sentimos la cantidad ingresada excede el limite de Gokarts:\n");
					        scanf("%d",&r);
						}
				        printf("\nIndica el d%ca para la reservaci%cn:\n",161,162);
				        printf("\n\rViernes(1)  \t\tS%cbado(2)  \tDomingo(3)\n\n",160);
			            scanf("%d",&horario);
				        while(horario!=1&&horario!=2&&horario!=3)
					    {
					    	printf("\nD%ca seleccionado inv%clido, por favor vuelve a intentarlo:\n",161,160);
							scanf("%d",&horario);
					    }
			            switch(horario)
				        {
				        	case 1:
				        		strcpy(dia,"Viernes");
				    	        break;
				            case 2:
				    	        strcpy(dia,"Sabado");
				    	        break;
				            default:
				    	        strcpy(dia,"Domingo");
				    	        break;
				        }
				        printf("\n\nSelecciona la hora de inicio:\n\n\r1:00 PM(1)\t\t2:00 PM(2)\t\t3:00 PM(3)\t\t4:00 PM(4)\t\t5:00 PM(5)\n");
				        scanf("%d",&hora);
				        while(hora!=1&&hora!=2&&hora!=3&&hora!=4&&hora!=5)
				        {
				        	printf("Lo sentimos hora de inicio incorrecta, intente de nuevo:\n");
							scanf("%d",&hora);
				        }
				        switch(hora)
				        {
				        	case 1:
				        		printf("\nIndique las horas que desea rentar:\n");
						        scanf("%d",&horas);
						        while(horas<=0||horas>5)
						        {
						        	printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
									scanf("%d",&horas);
						        }
						        pago=horas*r*275;
						        printf("\n\nHorario de carrera: %s", dia); printf(" 1:00 pm");
						        break;
					        case 2:
						        printf("\nIndique las horas que desea rentar:\n");
						        scanf("%d",&horas);
						        while(horas<=0||horas>4)
					        	{
							        printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							        scanf("%d",&horas);
						        }
						        pago=horas*r*275;
						        printf("\n\nHorario de carrera: %s", dia); printf(" 2:00 pm");
						        break;
				        	case 3:
					        	printf("\nIndique las horas que desea rentar:\n");
					        	scanf("%d",&horas);
						        while(horas<=0||horas>3)
						        {
							        printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							        scanf("%d",&horas);
						        }
						        pago=horas*r*275;
						        printf("\n\nHorario de carrera: %s", dia); printf(" 3:00 pm");
						        break;
					        case 4:
						        printf("\nIndique las horas que desea rentar:\n");
						        scanf("%d",&horas);
						        while(horas<=0||horas>2)
						        {
							        printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
						            scanf("%d",&horas);
						        }
						        pago=horas*r*275;
						        printf("\n\nHorario de carrera: %s", dia); printf(" 4:00 pm");
						        break;
					        default:
						        printf("\nIndique las horas que desea rentar:\n");
						        scanf("%d",&horas);
						        while(horas<=0||horas>1)
						        {
							        printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							        scanf("%d",&horas);
					        	}
						        pago=horas*r*275;
						        printf("\n\nHorario de carrera: %s", dia); printf(" 5:00 pm");
						        break;
					    }
			    } 
		        else
				{
					printf("\nIngresa la cantidad de Gokarts/Cadet que quiere rentar:\n");
				        scanf("%d",&r);
						while(r<=0||r>100)
				        {
					        printf("\n");printf(nombre);printf(",lo sentimos la cantidad ingresada excede el limite de Gokarts/Cadet:\n");
					        scanf("%d",&r);
						}
				        printf("\nIndica el d%ca para la reservaci%cn:\n",161,162);
				        printf("\n\rViernes(1)  \t\tS%cbado(2)  \tDomingo(3)\n\n",160);
			            scanf("%d",&horario);
				        while(horario!=1&&horario!=2&&horario!=3)
					    {
					    	printf("\nD%ca seleccionado inv%clido, por favor vuelve a intentarlo:\n",161,160);
							scanf("%d",&horario);
					    }
			            switch(horario)
				        {
				        	case 1:
				        		strcpy(dia,"Viernes");
				    	        break;
				            case 2:
				    	        strcpy(dia,"Sabado");
				    	        break;
				            default:
				    	        strcpy(dia,"Domingo");
				    	        break;
				        }
				        printf("\n\nSelecciona la hora de inicio:\n\n\r1:00 PM(1)\t\t2:00 PM(2)\t\t3:00 PM(3)\t\t4:00 PM(4)\t\t5:00 PM(5)\n");
				        scanf("%d",&hora);
				        while(hora!=1&&hora!=2&&hora!=3&&hora!=4&&hora!=5)
				        {
				        	printf("Lo sentimos hora de inicio incorrecta, intente de nuevo:\n");
							scanf("%d",&hora);
				        }
				        switch(hora)
				        {
				        	case 1:
				        		printf("\nIndique las horas que desea rentar:\n");
						        scanf("%d",&horas);
						        while(horas<=0||horas>5)
						        {
						        	printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
									scanf("%d",&horas);
						        }
						        pago=horas*r*100;
						        printf("\n\nHorario de carrera: %s", dia); printf(" 1:00 pm");
						        break;
					        case 2:
						        printf("\nIndique las horas que desea rentar:\n");
						        scanf("%d",&horas);
						        while(horas<=0||horas>4)
					        	{
							        printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							        scanf("%d",&horas);
						        }
						        pago=horas*r*100;
						        printf("\n\nHorario de carrera: %s", dia); printf(" 2:00 pm");
						        break;
				        	case 3:
					        	printf("\nIndique las horas que desea rentar:\n");
					        	scanf("%d",&horas);
						        while(horas<=0||horas>3)
						        {
							        printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							        scanf("%d",&horas);
						        }
						        pago=horas*r*100;
						        printf("\n\nHorario de carrera: %s", dia); printf(" 3:00 pm");
						        break;
					        case 4:
						        printf("\nIndique las horas que desea rentar:\n");
						        scanf("%d",&horas);
						        while(horas<=0||horas>2)
						        {
							        printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
						            scanf("%d",&horas);
						        }
						        pago=horas*r*100;
						        printf("\n\nHorario de carrera: %s", dia); printf(" 4:00 pm");
						        break;
					        default:
						        printf("\nIndique las horas que desea rentar:\n");
						        scanf("%d",&horas);
						        while(horas<=0||horas>1)
						        {
							        printf("\nLo sentimos las horas ingresadas son incorrectas, intente de nuevo:\n");
							        scanf("%d",&horas);
					        	}
						        pago=horas*r*100;
						        printf("\n\nHorario de carrera: %s", dia); printf(" 5:00 pm");
						        break;
					    }    	
				}
	    }
		printf("\n\n");printf(nombre);printf(",Usted debe pagar un total de:$%lf",pago);
		printf("\n\nOcupa la letra S si deseas repetir el procedimiento en caso contrario oprimir cualquier tecla:\n");
		scanf("%s",&n);
    }   
    while(n=='S');
	printf("\nGracias por su preferencia. DIVIERTASE MUCHO");
	getchar();
}
