#include <stdbool.h>
#include "actions.h"
/* 
Este código define una variable global `g_eez_event` de tipo `lv_event_t` y un indicador booleano `g_eez_event_is_available` para rastrear si el evento global está disponible.

Este código asignará el evento lvgl a una variable global, a la que luego se podrá acceder en el 
bucle principal (main loop) u otras partes del programa para procesar el evento.

Esta acción del usuario es útil en aplicaciones donde se necesita manejar eventos de manera centralizada o cuando se desea compartir el estado del evento entre diferentes módulos del programa.

! Esta acción del usuario puede manejar eventos de todos los objetos por lo que no tendremos que repetir este proceso para cada nuevo objeto que se agregue en el futuro.

*/
lv_event_t g_eez_event = {};
bool g_eez_event_is_available = false;

void action_set_global_eez_event(lv_event_t * e)
{
    g_eez_event = * e;
    g_eez_event_is_available = true;
}



