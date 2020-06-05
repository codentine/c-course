//#include <stdio.h>
//int main() {
//    int edad, edadMinima = 18;
//    char tipoLicencia;
//    printf("Ingrese su edad: ");
//    scanf("%d", &edad);
//
//    if(edad >= edadMinima) {
//        printf("Usted puede tramitar su licencia\n");
//    } else if(edad >= 15 && edad < 18){
//        printf("Usted solo puede tramitar una licencia provisional \n");
//        return 0;
//    } else {
//        printf("Intente en unos cuantos años más\n");
//        return 0;
//    }
//
//    printf("Ingrese el Tipo de Licencia que va a tramitar (a = automovilista, c = chofer, m = motociclista): ");
//    fflush(stdin);
//    scanf("%c", &tipoLicencia);
//
//    switch(tipoLicencia){
//        case 'a':
//            printf("Usted eligió el tipo automovilista \n");
//            break;
//        case 'c':
//            printf("Usted eligió el tipo chofer \n");
//            break;
//        case 'm':
//            printf("Usted eligió el tipo motocilcista \n");
//            break;
//        default:
//            printf("Tipo de licencia invalido \n");
//            break;
//    }
//
//    printf("Fin de la Evaluación \n");
//    return 0;
//}
