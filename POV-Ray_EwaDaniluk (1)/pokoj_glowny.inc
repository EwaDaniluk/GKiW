#include "colors.inc"
#include "textures.inc"   
#include "shapes.inc"  
#include "woods.inc"
#include "textures.inc"
#include "metals.inc"  
#include "meble.inc"         
#include "rzutka.inc"
#include "rzutki_plansza.inc"
#include "dodatki.inc"    
#declare Photons=on;
     
global_settings {
  //assumed_gamma 1.0
  max_trace_level 15
  #if (Photons)          // global photon block
    photons {
      spacing 0.02                 // specify the density of photons
    }

  #end
}
                                    

light_source{
    <30,15,10>
    color White
    }   
    
light_source{
    <30,-0.0002,20>
    color White 
    } 
        
#declare kx = 0;              ////// ruch kamery
#declare ky = 0;
#declare ox = 0;
#declare oy = 0;
#declare rz = 0;
#declare petla = clock*72;

#if ( petla > -1 & petla < 44 )      ///prosto
        #declare kx = 36;
        #declare ky = 18;
        #declare kx = kx - 1*petla; 
        #declare ox = kx - 3;
        #declare oy = 17;
#end   
#if( petla >= 44 & petla < 45 )              /// zakrzywia
        #declare kx = -8;
        #declare ky = 19; 
        #declare ox = kx - 4;
        #declare oy = 17;       
        #declare rz = 30;         
#end
#if( petla >= 45 & petla < 46 ) 
        #declare kx = -9;
        #declare ky = 19; 
        #declare ox = kx - 4;
        #declare oy = 17;       
        #declare rz = 60;         
#end 
#if( petla >= 46 & petla < 47 ) 
        #declare kx = -11;
        #declare ky = 20; 
        #declare ox = kx - 4;
        #declare oy = 17;       
        #declare rz = 90;         
#end
#if ( petla >=47 & petla < 66  )             ///  w dó³
        #declare kx = -15;
        #declare ky = 18;
        #declare ky = ky - 1*(petla - 47);
        #declare ox = -15;
        #declare oy = ky - 4; 
        #declare rz = 90;
#end 
#if ( petla >=66 & petla < 75  )
        #declare kx = -15;
        #declare ky = -1;
        #declare ox = -15;
        #declare oy = -5;
        #declare oy = oy - 1*(petla - 66); 
        #declare rz = 90;
#end  
#if ( petla >= 75  )
        #declare kx = -15;                     // w miejscu
        #declare ky = -1;
        #declare ox = -15;
        #declare oy = -15; 
        #declare rz = 90;
#end   

camera {
        location <kx,ky,6>
        look_at <ox,oy,6> 
       }
#object { rzutka(DarkTurquoise)
          rotate <0,0,rz>
          scale 0.6
          translate <ox,oy,6> 
        }
                                              
// pomieszczenie ------------------------------------------------
plane{y, 0                   // pod³oga
    texture { T_Wood35 }
     }

plane{y, -25                   // pod³oga2
    pigment { NeonPink }
     }     

plane{x, -20                                             // œciana 1
    texture { pigment { color MediumGoldenrod } } 
     }       

plane{z, 20                                             // œciana 2
    texture { pigment { color MediumGoldenrod } } 
     }  

plane{z, -29                                             // œciana 3
    texture { pigment { color MediumGoldenrod } } 
     }

plane{x, 40                                             // œciana 4
    texture { pigment { color MediumGoldenrod } } 
     }      

plane{y, 30                                             // sufit
    texture { pigment { color MediumGoldenrod } }                  
      }         

// umeblowanie  -----------------------------------------------
#object { mc_szafka(8,10,6,0.2,DMFWood3,T_Wood3)
          rotate y*0 translate <-20,0,20> }
#object { mc_nadstawka(8,10,6,0.2,DMFWood3)
          rotate y*0 translate <-20,10,20> }   
          
#object { mc_szafka(8,10,6,0.2,DMFWood3,T_Wood3)
          rotate y*0 translate <-12,0,20> }
#object { mc_nadstawka(8,10,6,0.2,DMFWood3)
          rotate y*0 translate <-12,10,20> } 

#object { mc_stolik(8,5,6,0.2, pigment {color Black},T_Wood3)
          rotate y*0 translate <5,0,20> } 
          
#object { mc_krzeslo(3,3.5,0,3,0.2, pigment {color Black},T_Wood3)
          rotate y*180 translate <11,0,13> }
          
#object { mc_szafka(8,10,6,0.2,DMFWood3,T_Wood3)
          rotate y*0 translate <14,0,20> }
          
#object { mc_stolik(10,6,8,0.2, pigment {color Black},T_Wood3)
          rotate y*0 translate <0,0,-5> }
          
#object { mc_krzeslo(4,4,5,4,0.2, pigment {color Black}, T_Wood3)
          rotate y*180 translate <8,0,-15> }

#object { mc_krzeslo(4,4,5,4,0.2, pigment {color Black}, T_Wood3)
          rotate y*-90 translate <-4,0,-10> }

#object { mc_szafka(12,7,6,0.2,DMFWood3,T_Wood3)
          rotate y*-90 translate <-20,0,-14> }

#object { mc_szafka(12,7,6,0.2,DMFWood3,T_Wood3)
          rotate y*-90 translate <-20,0,-28> }
          
// dodatki     --------------------------------------------------------                

//le¿¹ce rzutki           
#object { tarcza() 
          rotate <0,90,0>  
          translate <-20,16,6>
        }
        
#object { rzutka (DarkTurquoise)  
          scale 0.6
          rotate <0,80,20>
          translate <15,10,18>
        } 
#object { rzutka (MediumAquamarine)  
          scale 0.6
          rotate <0,80,20>
          translate <16,10,18>
        }
#object { rzutka (DarkTurquoise)  
          scale 0.6
          rotate <0,80,20>
          translate <17,10,18>
        }
#object { rzutka (MediumAquamarine)  
          scale 0.6
          rotate <0,80,20>
          translate <18,10,18>
        }
#object { rzutka (DarkTurquoise)  
          scale 0.6
          rotate <0,80,20>
          translate <19,10,18>
        }
#object { rzutka (MediumAquamarine)  
          scale 0.6
          rotate <0,80,20>
          translate <20,10,18>
        }
        
//wbite rzutki
#object { rzutka (MediumAquamarine)  
          scale 0.6
          translate <-20,16,6>
        }
#object { rzutka (MediumAquamarine)  
          scale 0.6
          translate <-20,17.3,3.7>
        }
#object { rzutka (DarkTurquoise)  
          scale 0.6
          translate <-19.2,18.2,6.9>
        } 

#object { kula()
          scale 0.5
          translate <19,6.5,15>
        }

#object { obiekt()
          scale 0.75
          translate <-14,4,-2.5>
        }
                          
#object { magicznePudelko()
          scale 1.5     
          rotate <90,0,0>
          translate <-18,-24,-3>
        }        
dywan()
kosz()
 
                          