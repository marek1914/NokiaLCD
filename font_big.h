// big font
#include <avr/pgmspace.h>



//******* VERY LARGE FONTS ********** 
// array [13][3][16]
//used here for displaying temperature

unsigned char   big_number_font[] PROGMEM = {

0,128,192,224,224,96,224,224,  //'0'
192,128,0,0,0,0,0,0
,
112,255,255,1,0,0,0,0,
255,255,254,0,0,0,0,0
,
0,15,31,60,56,48,56,56,
31,15,3,0,0,0,0,0
,

0,0,0,0,128,224,224,0, 		   //'1'
0,0,0,0,0,0,0,0
,
0,0,3,3,3,255,255,0,
0,0,0,0,0,0,0,0
,
0,0,56,56,56,63,63,56,
56,56,0,0,0,0,0,0
,

0,192,192,224,96,96,224,224,   //'2'
192,128,0,0,0,0,0,0
,
0,1,0,0,128,192,224,249,
63,31,0,0,0,0,0,0
,
0,60,62,63,63,59,57,56,
56,56,56,0,0,0,0,0
,

0,192,224,224,96,96,224,224,   //'3'
192,192,0,0,0,0,0,0
,
0,1,0,0,48,48,56,125,
239,207,0,0,0,0,0,0
,
0,28,56,56,48,48,56,60,
31,15,1,0,0,0,0,0
,

0,0,0,0,0,128,192,224, 		   //'4'
224,0,0,0,0,0,0,0
,
224,240,248,222,207,199,193,255,
255,192,192,0,0,0,0,0
,
0,0,0,0,0,0,0,63,
63,0,0,0,0,0,0,0
,

0,224,224,224,224,224,224,224,	//'5'
224,224,224,0,0,0,0,0
,
0,63,63,63,56,56,48,112,
240,224,0,0,0,0,0,0
,
0,28,56,56,48,48,56,60,
31,15,1,0,0,0,0,0
,

0,0,128,192,192,224,96,96,		//'6'
224,224,0,0,0,0,0,0
,
224,254,255,55,57,24,24,56,
240,240,192,0,0,0,0,0
,
0,15,31,28,56,48,48,56,
31,15,7,0,0,0,0,0
,

0,224,224,224,224,224,224,224,		 //'7'
224,224,224,0,0,0,0,0
,
0,0,0,0,128,224,248,126,
31,7,1,0,0,0,0,0
,
0,0,56,62,31,7,1,0,
0,0,0,0,0,0,0,0
,

0,128,192,224,224,96,96,224,		 //'8'
192,192,0,0,0,0,0,0
,
0,207,255,127,56,48,112,112,
255,239,199,0,0,0,0,0
,
3,15,31,60,56,48,48,56,
31,31,15,0,0,0,0,0
,

0,128,192,224,224,96,224,224,		 //'9'
192,128,0,0,0,0,0,0
,
12,63,127,241,224,192,192,225,
255,255,254,0,0,0,0,0
,
0,0,56,48,48,56,56,30,
15,7,0,0,0,0,0,0
,


0,0,0,0,0,0,0,0,	  		  		 //'.'
0,0,0,0,0,0,0,0
,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0
,
60,60,60,0,0,0,0,0,
0,0,0,0,0,0,0,0
,

0,0,0,0,0,0,0,0,   					 //'+'
0,0,0,0,0,0,0,0
,
0,0,64,64,64,64,64,254,
254,64,64,64,64,64,0,0
,
0,0,0,0,0,0,0,15,
15,0,0,0,0,0,0,0
,

0,0,0,0,0,0,0,0, 	   				 //'-'
0,0,0,0,0,0,0,0
,
0,64,64,64,64,64,64,0,
0,0,0,0,0,0,0,0
,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0
};

