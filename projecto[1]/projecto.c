#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

#ifdef _WIN32
  #include<windows.h>
#endif  

void limpiar_pantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void ingresar(void);

void consultar(){
    
  int ads=0, ci=0, ci2=0, sueldo=0,select=0, total=0, nt=0;
  char nombre[20], apellido[20], departamento [20], cargo[20], fecha[20], aux[20];
  
  FILE *trabajadores, *second;

   printf(" CONSULTAR\n\n Seleccione metodo de busqueda del trabajador\n 1) Cedula\n 2) Departamento\n 3) Cargo\n 4) Mayor y menor sueldo\n 5) Volver al menu principal\n\n");

   do{
    scanf("%d", &ads);
   } while ((ads<1)||(ads>5));
   




switch (ads){

/*-----------------------------------------------------------------------------------------------------------*/

  case 1:
   limpiar_pantalla();
   
    trabajadores=fopen("trabajadores.in", "r");

   do
   {
     printf("ingrese la cedula del trabajador a buscar\n");
       scanf("%d",&ci);
     limpiar_pantalla();
   } while (ci<1);

 // leer la cedula, compararla con el escrito, si encuentra algo se rompe el ciclo

   if(trabajadores!=NULL){

      do
      {
        
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
           if(ci==ci2){
             select=1;
             break;
             }
      } while (!feof(trabajadores));
      
           if(select==1){
               printf("%d %s %s %s %s %s %d\n\n", ci2, nombre,apellido, departamento, cargo, fecha, sueldo);
                system("pause");
           }
           else{
            printf("La CI indicada no esta asociada a ningun trabajador de la empresa");
           } 
     
   }
      else{

         printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
     }
  fclose(trabajadores);
  break;
/*-----------------------------------------------------------------------------------------------------------*/
  case 2:
  limpiar_pantalla();
  remove("departamento.txt");
 
  trabajadores=fopen("trabajadores.in", "r");
  second=fopen("departamento.txt", "w");
  fclose(second);
  second=fopen("departamento.txt", "a");

  printf(" CONSULTAR DEPARTAMENTO\n\n Seleccione el departamento al que desea \n 1) RRHH\n 2) Consultoria\n 3) Diseno\n 4) Produccion\n 5) Calidad \n 6) Distribucion\n\n");
     
    do{
    scanf("%d", &ads);
   } while ((ads<1)||(ads>6));
   

   switch (ads){
    
    case 1: 
     limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(departamento,"RRHH")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("Este departamento posee %d miembros\n", nt);
         printf("el total devengado del departamento es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);


    }
    
      
      
      
    
    break;

    case 2:

       
     limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(departamento,"Consultoria")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("Este departamento posee %d miembros\n", nt);
         printf("el total devengado del departamento es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);


    }
   
    
    break;

    case 3:

          limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(departamento,"Diseno")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("Este departamento posee %d miembros\n", nt);
         printf("el total devengado del departamento es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
    }


    
    break;

    case 4:

      limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(departamento,"Produccion")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("Este departamento posee %d miembros\n", nt);
         printf("el total devengado del departamento es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
    }

    
    
    break;
 
    case 5:
     
      limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(departamento,"Calidad")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("Este departamento posee %d miembros\n", nt);
         printf("el total devengado del departamento es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
    }

    break;

    case 6:
      
       limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(departamento,"Distribucion")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("Este departamento posee %d miembros\n", nt);
         printf("el total devengado del departamento es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
    }
    
    break;
   
    default:
    break;
     fclose(trabajadores);
   }


  break;
/*-----------------------------------------------------------------------------------------------------------*/
 
  case 3:
  limpiar_pantalla();
    
  remove("cargo.txt");
 
  trabajadores=fopen("trabajadores.in", "r");
  second=fopen("cargo.txt", "w");
  fclose(second);
  second=fopen("cargo.txt", "a");

  printf(" CONSULTAR CARGO\n\n Seleccione el cargo al que desea \n 1) Gerente\n 2) Supervisor\n 3) Analista\n 4) Disenador\n 5) Desarrollador \n 6) Auditor\n\n");
     
    do{
    scanf("%d", &ads);
   } while ((ads<1)||(ads>6));
   

   switch (ads){
    
    case 1: 
     limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(cargo,"Gerente")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("\n\nEl cargo de Gerente esta ocupado por %d personas\n\n", nt);
         printf("el total devengado del cargo es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);


    }
    
      
      
      
    
    break;

    case 2:

       
     limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(cargo,"Supervisor")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("\n\nEl cargo de Supervisor esta ocupado por %d personas\n\n", nt);
         printf("el total devengado del cargo es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);


    }
   
    
    break;

    case 3:

          limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(cargo,"Analista")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("\n\nEl cargo de Analista esta ocupado por %d personas\n\n", nt);
         printf("el total devengado del cargo es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
    }


    
    break;

    case 4:

      limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(cargo,"Disenador")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("\n\nEl cargo de Disenador esta ocupado por %d personas\n\n", nt);
         printf("el total devengado del cargo es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
    }

    
    
    break;
 
    case 5:
     
      limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(cargo,"Desarrollador")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("\n\nEl cargo de Desarrollador esta ocupado por %d personas\n\n", nt);
         printf("el total devengado del cargo es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
    }

    break;

    case 6:
      
       limpiar_pantalla();
    if(trabajadores!=NULL){
      
      while (!feof(trabajadores)){
       
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
     
        if(strstr(cargo,"Auditor")!= NULL){
           nt++;
           total=total+sueldo;
          fprintf(second,"%d %s %s %s %s %s %d\n", ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
        }
      }

         printf("\n\nEl cargo de Auditor esta ocupado por %d personas\n\n", nt);
         printf("el total devengado del cargo es %d\n", total);
         system("pause");
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
    }
      fclose(trabajadores);
       fclose(second);
    break;
   
   default:
    break;
    fclose(trabajadores);
   }

  break;
/*-----------------------------------------------------------------------------------------------------------*/

  case 4:
    total=100000000;
   limpiar_pantalla();
    
     trabajadores=fopen("trabajadores.in", "r");
   
    if (trabajadores!=NULL){
       
       while(!feof(trabajadores)){

        fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
          
          if (sueldo>=select){
            select=sueldo;
          }
          
          if (sueldo<=total){
            total= sueldo;
          }
      }
        printf("\nla que cuentan con el mayor sueldo son %d:\n", select);
            rewind(trabajadores);
      while (!feof(trabajadores)){
        fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
        
          if (select==sueldo){
                printf("%d %s %s %s %s %s\n", ci2, nombre, apellido, departamento, cargo, fecha);
          }

      }
  

      printf("\nla que cuentan con el menor sueldo son %d:\n", total);
          rewind(trabajadores);
      while (!feof(trabajadores)){
        fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
        
          if (sueldo==total){
                printf("%d %s %s %s %s %s\n", ci2, nombre, apellido, departamento, cargo, fecha);
                system("pause");
          }
      }
      
    }

    else{
     
       printf("el archivo no se ha encontrado/se encuentra vacio\n\n");
        system("pause");
    }
     fclose(trabajadores);
  break;
/*-----------------------------------------------------------------------------------------------------------*/
  default:
   limpiar_pantalla();
  break;
/*-----------------------------------------------------------------------------------------------------------*/

  }
}
void modificar(void);
void eliminar(void);



void main(){
    int menu=0, consuls=0;
    
    do{
    limpiar_pantalla();
    printf("MENU PRINCIPAL\n\n1) Ingresar empleado\n2) Consultar datos\n3) Modificar datos\n4) Eliminar datos\n5) Salir\n\n");
      do
      {
        scanf("%d", &menu);
      } while ((menu<1)||(menu>5));

      switch (menu){
        
         case 1:
          limpiar_pantalla();
          ingresar();
         break;

         case 2:

          do{
            limpiar_pantalla();
            consultar();
            limpiar_pantalla();
            printf("desea volver al menu principal?\n1) Si\n2) No\n");
             do
             {
                scanf("%d", &consuls);
             } while ((consuls<1)||(consuls>2));
             
          } while (consuls==2);
          
         break;


         case 3:
          limpiar_pantalla();
          modificar();
         break;

         case 4:
          limpiar_pantalla();
          eliminar();
         break;
      
         default:

         break;
      }
    }while(menu!=5);

}



//=============================================================================================================================================================//
void ingresar(){
 FILE *trabajadores;
 int ci=0, dia=0, mes=0, agno=0, sueldo=0, select=0;
 char nomb[20],apell[20], *dep, *carg;
 
 trabajadores=fopen("trabajadores.in", "a");


 do
 {
    
      do
      { 
        do{
        limpiar_pantalla();
        
        printf("\nIngrese la cedula del empleado a registrar\n");

        scanf("%d", &ci);
        }while(ci<1);
         
        
           do{ 
            limpiar_pantalla();

            printf("Es la cedula (%d) correcta?\n\nEste es un parametro no modificable\n\n1) Continuar\n2) Volver a ingresar\n\n", ci);
            scanf("%d", &select);
           } while ((select>2) || (select<1));
           
           

          if (select==2){
            ci=0;
          }

      } while (ci<1);
    
    limpiar_pantalla();
    printf("Nombre y apellido\n\n");
      fflush(stdin);
      scanf("%s", nomb);
      scanf("%s", apell);

      
     
      do{
        fflush(stdin);
       limpiar_pantalla();
       printf("departamento al que pertenece\n 1) RRHH\n 2) Consultoria\n 3) Diseno\n 4) Produccion\n 5) Calidad\n 6) Distribucion\n");
      scanf("%d", &select);
      }while((select<1)||(select>6));
         
      switch (select){
      case 1:
         dep="RRHH";
      break;

      case 2:
         dep="Consultoria";
      break;

      case 3:
         dep="Diseno";
      break;

      case 4:
         dep="Produccion";
      break;

      case 5:
         dep="Calidad";
      break;

      default:
         dep="Distribucion";
      break;
      }
      
      do{
      limpiar_pantalla();
         printf("Cargo a ejercer\n 1) Gerente\n 2) Supervisor\n 3) Analista\n 4) Disenador\n 5) Desarrollador\n 6) Auditor\n");
             scanf("%d", &select);
      
      }while((select<1)||(select>6));

      
            switch (select){
                fflush(stdin);
      case 1:
         carg="Gerente";
      break;

      case 2:
         carg="Supervisor";
      break;

      case 3:
         carg="Analista";
      break;

      case 4:
         carg="Disenador";
      break;

      case 5:
         carg="Desarrollador";
      break;

      default:
         carg="Auditor";
      break;
      }
      
      
        limpiar_pantalla();
      printf("ingrese la fecha de ingreso (dd/mm/aa)\n\n");
       
       scanf("%d %d %d", &dia, &mes, &agno);
       switch (mes){
       case 1:
       case 3:
       case 5:
       case 7:
       case 8:
       case 10:
       case 12:
       if (dia<0 || dia>31){
        do
        {
            limpiar_pantalla();
            printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,31]");
               scanf("%d",&dia);
        } while (dia<0 || dia>31);
       }
       break;

       case 4:
       case 6:
       case 9:
       case 11:

        if (dia<0 || dia>30){
        do
        {
            limpiar_pantalla();
            printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,30]");
               scanf("%d",&dia);
        } while (dia<0 || dia>30);

        }

       break;

       
       default:
          
          if (((agno % 4 == 0) && ((agno % 100) != 0)) || (agno % 400 == 0)){

             if ((dia<0)||(dia>29)){
                    
         do {
            limpiar_pantalla();
            printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,29]");
               scanf("%d",&dia);
        } while ((dia<0) || (dia>29));

                
             }
          }

          else{
             
             if ((dia>28)||(dia<1)){

            do {
               limpiar_pantalla();
               printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,29]\n");
               scanf("%d",&dia);
               } while ((dia<0) || (dia>29));
             }

          }

         
        break;
       }  
        limpiar_pantalla();
      printf("Sueldo a cobrar por el sujeto\n\n");
        scanf("%d", &sueldo);

  limpiar_pantalla();
  printf(" Son los siguientes datos correctos?\n\n");
    printf("%d %s %s %s %s %d/%d/%d %d \n\n1) Si\n2) No\n", ci, nomb, apell, dep, carg, dia, mes, agno, sueldo);
      do
      {
        scanf("%d", &select);
      } while ((select<1)|| (select>2));
   
      
     if(select==1){
       fprintf(trabajadores,"%d %s %s %s %s %d/%d/%d %d\n",ci, nomb, apell, dep, carg, dia, mes, agno, sueldo);
     }

    limpiar_pantalla();
    printf("desea ingresar a otra persona?\n1) Si\n2) No");
      scanf("%d", &select);
  
}while(select==1);
 fclose(trabajadores);
}
//=================================================================================================================//


//=================================================================================================================================//

void modificar(){
  
  int ads=0, ci=0, ci2=0,ci3=0, sueldo=0,select=0, dia=0, mes=0, agno=0;
  char nombre[20], apellido[20], departamento [20], cargo[20], fecha[20], aux[20], nomb[20],apell[20], *dep, *carg;

  FILE *trabajadores, *respaldo;
    
    trabajadores=fopen("trabajadores.in", "r");
    respaldo=fopen("respaldo.txt", "a");
   do
   {
    limpiar_pantalla();
     printf("ingrese la cedula del trabajador con datos a modificar\n");
       scanf("%d",&ci);
   } while (ci<1);

     if(trabajadores!=NULL){
     do{
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
           if(ci==ci2){
             select=1;
             break;
             }
      } while (!feof(trabajadores));
      
           if(select==1){
               
                do{
                    limpiar_pantalla();
                    printf("Es esta el trabajador al que desea modificar?\n\n %s %s %s %s %s %d\n\n1) Si\n2) No\n", nombre,apellido, departamento, cargo, fecha, sueldo);
                scanf("%d", &select);
                } while ((select<1)|| (select>2));
                   
           rewind(trabajadores);
          if (select==1){
              
              while (!feof(trabajadores)){
        
            fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
               
                 if(ci==ci2){
                  
                  fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
                 }
                 

               if ((ci!=ci2)&&(ci2!=ci3)){
              fprintf(respaldo,"%d %s %s %s %s %s %d\n",ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
               }
               else{
                break;
               }
                ci3=ci2;
              }
                fclose(trabajadores);
                fclose(respaldo);
                remove("trabajadores.in");
                
                rename("respaldo.txt","trabajadores.in");

            trabajadores=fopen("trabajadores.in","a");
            limpiar_pantalla();
             printf("Nombre y apellido\n\n");
               fflush(stdin);
                scanf("%s", nomb);
                   scanf("%s", apell);

      
     
      do{
        fflush(stdin);
       limpiar_pantalla();
       printf("departamento al que pertenece\n 1) RRHH\n 2) Consultoria\n 3) Diseno\n 4) Produccion\n 5) Calidad\n 6) Distribucion\n");
      scanf("%d", &select);
      }while((select<1)||(select>6));
         
      switch (select){
      case 1:
         dep="RRHH";
      break;

      case 2:
         dep="Consultoria";
      break;

      case 3:
         dep="Diseno";
      break;

      case 4:
         dep="Produccion";
      break;

      case 5:
         dep="Calidad";
      break;

      default:
         dep="Distribucion";
      break;
      }
      
      do{
      limpiar_pantalla();
         printf("Cargo a ejercer\n 1) Gerente\n 2) Supervisor\n 3) Analista\n 4) Disenador\n 5) Desarrollador\n 6) Auditor\n");
             scanf("%d", &select);
      
      }while((select<1)||(select>6));

      
            switch (select){
                fflush(stdin);
      case 1:
         carg="Gerente";
      break;

      case 2:
         carg="Supervisor";
      break;

      case 3:
         carg="Analista";
      break;

      case 4:
         carg="Disenador";
      break;

      case 5:
         carg="Desarrollador";
      break;

      default:
         carg="Auditor";
      break;
      }
      
      
        limpiar_pantalla();
      printf("ingrese la fecha de ingreso (dd/mm/aa)\n\n");
       
       scanf("%d %d %d", &dia, &mes, &agno);
       switch (mes){
       case 1:
       case 3:
       case 5:
       case 7:
       case 8:
       case 10:
       case 12:
       if (dia<0 || dia>31){
        do
        {
            limpiar_pantalla();
            printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,31]");
               scanf("%d",&dia);
        } while (dia<0 || dia>31);
       }
       break;

       case 4:
       case 6:
       case 9:
       case 11:

        if (dia<0 || dia>30){
        do
        {
            limpiar_pantalla();
            printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,30]");
               scanf("%d",&dia);
        } while (dia<0 || dia>30);

        }

       break;

       
       default:
          
          if (((agno % 4 == 0) && ((agno % 100) != 0)) || (agno % 400 == 0)){

             if ((dia<0)||(dia>29)){
                    
         do {
            limpiar_pantalla();
            printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,29]");
               scanf("%d",&dia);
        } while ((dia<0) || (dia>29));

                
             }
          }

          else{
             
             if ((dia>28)||(dia<1)){

            do {
               limpiar_pantalla();
               printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,29]\n");
               scanf("%d",&dia);
               } while ((dia<0) || (dia>29));
             }

          }

         
        break;
       }  
        limpiar_pantalla();
      printf("Sueldo a cobrar por el sujeto\n\n");
        scanf("%d", &sueldo);

  limpiar_pantalla();
  printf(" Son los siguientes datos correctos?\n\n");
    printf("%d %s %s %s %s %d/%d/%d %d \n\n1) Si\n2) No\n", ci, nomb, apell, dep, carg, dia, mes, agno, sueldo);
      do
      {
        scanf("%d", &select);
      } while ((select<1)|| (select>2));
       
       if(select==1){
       fprintf(trabajadores,"%d %s %s %s %s %d/%d/%d %d\n",ci, nomb, apell, dep, carg, dia, mes, agno, sueldo);

     }

          }                

         }
        else{
         printf("La CI indicada no esta asociada a ningun trabajador de la empresa");
         } 
     }


      else{

         printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
     }
  fclose(trabajadores);

}

//=====================================================================================================================//

void eliminar(){
  
  int ads=0, ci=0, ci2=0,ci3=0, sueldo=0,select=0,dia=0, mes=0, agno=0;
  char nombre[20], apellido[20], departamento [20], cargo[20], fecha[20], aux[20], *motiv;

  FILE *trabajadores, *respaldo, *ex;
    
    trabajadores=fopen("trabajadores.in", "r");
    respaldo=fopen("respaldo.txt", "a");
    ex=fopen("extrabajadores.txt", "a");
   do
   {
    limpiar_pantalla();
     printf("ingrese la cedula del trabajador al que desea eliminar\n");
       scanf("%d",&ci);
   } while (ci<1);

     if(trabajadores!=NULL){
     do
      {
        
       fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
           if(ci==ci2){
             select=1;
             break;
             }
      } while (!feof(trabajadores));
      
           if(select==1){
               
                do{
                    limpiar_pantalla();
                    printf("Esta seguro de querer borrar de la data a\n\n%d %s %s %s %s %s %d\n\n1) Si\n2) No\n\n", ci2, nombre,apellido, departamento, cargo, fecha, sueldo);
                scanf("%d", &select);
                } while ((select<1)|| (select>2));

                do{
                  limpiar_pantalla();
                  printf("motivo\n1) Traslado\n2) Renuncia\n3) Despido\n4) Otro");
                  scanf("%d", &ads);
                }while((ads<1)||(ads>4));

                switch (ads){
                case 1:
                  motiv="Traslado";
                break;
                
                case 2:
                 motiv="Renuncia";
                break;

                case 3:
                 motiv="Despido";
                break;

                default:
                limpiar_pantalla();
                printf("indique cual:\n");
                    scanf("%s",aux);
                     ads=5;
                break;
                }

                 limpiar_pantalla();
      printf("ingrese la fecha de ingreso (dd/mm/aa)\n\n");
       
       scanf("%d %d %d", &dia, &mes, &agno);
       switch (mes){
       case 1:
       case 3:
       case 5:
       case 7:
       case 8:
       case 10:
       case 12:
       if (dia<0 || dia>31){
        do
        {
            limpiar_pantalla();
            printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,31]");
               scanf("%d",&dia);
        } while (dia<0 || dia>31);
       }
       break;

       case 4:
       case 6:
       case 9:
       case 11:

        if (dia<0 || dia>30){
        do
        {
            limpiar_pantalla();
            printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,30]");
               scanf("%d",&dia);
        } while (dia<0 || dia>30);

        }

       break;

       
       default:
          
          if (((agno % 4 == 0) && ((agno % 100) != 0)) || (agno % 400 == 0)){

             if ((dia<0)||(dia>29)){
                    
         do {
            limpiar_pantalla();
            printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,29]");
               scanf("%d",&dia);
        } while ((dia<0) || (dia>29));

                
             }
          }

          else{
             
             if ((dia>28)||(dia<1)){

            do {
               limpiar_pantalla();
               printf("dia invalido\n ingrese un dia que pertenezca al intervalo [1,29]\n");
               scanf("%d",&dia);
               } while ((dia<0) || (dia>29));
             }
          }      
       
                }
                
                if(ads==5){
                  fprintf(ex,"%d %s %s %s %s %s %d %s %d/%d/%d\n",ci2, nombre, apellido, departamento, cargo, fecha, sueldo, aux,dia,mes,agno);
                }
                else{
                  fprintf(ex,"%d %s %s %s %s %s %d %s %d/%d/%d\n",ci2, nombre, apellido, departamento, cargo, fecha, sueldo, motiv,dia,mes,agno);
                }
                  
           rewind(trabajadores);
          if (select==1){
                       
              while (!feof(trabajadores)){
        
            fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
               
                 if((ci==ci2)&&(ci2!=ci3)){
                 select=1;
                  fscanf(trabajadores,"%d %s %s %s %s %s %d", &ci2, &nombre,&apellido, &departamento, &cargo, &fecha, &sueldo);
                 }
                 

               if ((ci!=ci2)&&(ci2!=ci3)){
              fprintf(respaldo,"%d %s %s %s %s %s %d\n",ci2, nombre, apellido, departamento, cargo, fecha, sueldo);
               }
               else{
                break;
               }
                ci3=ci2;
              }
                fclose(trabajadores);
                fclose(respaldo);
                remove("trabajadores.in");
                
                rename("respaldo.txt","trabajadores.in");
                fclose(ex);
          }                

         }

        else{
         printf("La CI indicada no esta asociada a ningun trabajador de la empresa");
         } 
     }
     


      else{

         printf("el archivo no se ha encontrado/se encuentra vacio\n\n1) Volver al Menu principal\n2) Salir\n\n");
            scanf("%d", &ads);
     }
  fclose(trabajadores);

}
//=================================================================================================================================//
