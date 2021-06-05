


#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{

	FILE *file;
	//char character;
	
	file = fopen("user_list.txt","r");
	char user[10];
    char ID[10];
    int activity;

	//-------------------------------------------------------------------------------------------------//

	int opt;
	printf("OPCIONES:\n");
	printf("1-Imprimir la lista de usuarios\n");
	printf("2-Imprimir la lista de usuarios y su condición \n");
	printf("3-Ordenar los usuarios por última hora de acceso'\n");
	printf("4-Actualizar los datos de un usuario.\n");

	printf("\nIntrodusca una opción: \n");

	scanf("%i", &opt);
	printf(" \n");


	if (opt == 1)
	{
		if (file == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else
        {
        	

            printf("\nLista de usuarios \n\n");
            
            int i = 0;
            while(feof(file) == 0)
	    {
	    	fscanf(file,"%s" ,user);
	    	fscanf(file,"%s" ,ID );
	    	fscanf(file,"%i" ,&activity );
	    	
	    	printf("%s\n",user);
	    	i++;
	    	if (i == 4)
	    	{
	    		break;
	    	}
	    }
        }
        fclose(file);
	return 0;
	}

	//-----------------------------------------------------------------------------------------------------------------//

	else if(opt == 2)
	{	

		if (file == NULL)
        {
            printf("\nError de apertura del file. \n\n");
        }
        else
                {
        	

            printf("\nEstatus de usuario \n\n");
            
            int i = 0;
            while(feof(file) == 0)
	    {
	    	fscanf(file,"%s" ,user);
	    	fscanf(file,"%s" ,ID );
	    	fscanf(file,"%i" ,&activity);
	    	if(activity == 0){
	    		printf("El usuario %s se encuentra activo\n",user);
	    	}
	    	else if(activity == 1){
	    		printf("El usuario %s ha accedido recientemente\n",user);

	    	}
	    	else{
	    		printf("El usuario %s se encuentra inactivo\n",user);
	    	}
	    	
	    	i++;
	    	if (i == 4)
	    	{
	    		break;
	    	}
	    }
        }
        fclose(file);
	return 0;
	}

	//-----------------------------------------------------------------------------------------------------------------//

	else if (opt == 3)
	{
		if (file == NULL)
        {
            printf("\nError de apertura del file. \n\n");
        }
        else{
        	
        	printf("Incompleto\n");

     //        printf("\nUsuarios ordenados por su acceso más reciente \n\n");
            

     //        int i = 0;
     //        while(feof(file) == 0)
	    // {
	    // 	fscanf(file,"%s" ,user);
	    // 	fscanf(file,"%s" ,ID );
	    // 	fscanf(file,"%i" ,&activity);

	    // 	int n = 0;
	    // 	for( activity = n; n < 1000; ++n);{

	    // 		printf("%s\n", user );


	    // 	}

	    // 	//if (activity <= 0)
	    // 	//{
	    // 	//	printf("%s\n", user );
	    // 	//}


	    // 	i++;
	    // 	if (i == 4)
	    // 	{
	    // 		break;
	    // 	}
	    	
	    // }

        }
        fclose(file);
	return 0;
	}

	

	//--------------------------------------------------------------------------------------------------------------//

	else if (opt == 4)
	{
		if (file == NULL)
        {
            printf("\nError de apertura del file. \n\n");
        }
        else
        {
        	printf("Incompleto\n");
        }
        fclose(file);
    return 0;
	}
	
	//-----------------------------------------------------------------------------------------------------------------//

	else
	{
		printf("OPCIÓN NO VALIDA\n");
		fclose(file);
	}
}
