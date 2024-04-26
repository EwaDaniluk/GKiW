#macro mc_szafka (szer,wys,gleb,grub,t1,t2)
union {        

difference {
box { <0,0,0> <szer,wys,-gleb> }   

box { <grub,wys-grub,-grub> <szer-grub,wys*0.55,-(gleb+0.1)> }

texture { t1
        finish { phong 0.3 reflection 0.00 }    
        }
}
        
box { <grub,wys*0.55-grub,-(gleb+0.1)> <(szer-grub)/2,grub,-gleb>    
        texture{t2
            finish { phong 0.3 reflection 0.00 }
            }
}  

box { <(szer+grub)/2,wys*0.55-grub,-(gleb+0.1)> <szer-grub,grub,grub-gleb>
     texture{t2
            finish { phong 0.3 reflection 0.00}
            }
}            
                                           
cylinder { <(szer-4*grub)/2,wys*0.55-3*grub,-gleb>
           <(szer-4*grub)/2,wys*0.55-3*grub,-(gleb+1.5*grub)> grub/2
           texture{t1
                   finish { phong 0.3 reflection 0.00 }
                   }
         } 

cylinder { <(szer+4*grub)/2,wys*0.55-3*grub,-gleb>
           <(szer+4*grub)/2,wys*0.55-3*grub,-(gleb+1.5*grub)> grub/2
           texture{t1
                   finish { phong 0.3 reflection 0.00 }
                   }
         }
}
#end
//---------------------------------------------------------------       

#macro mc_nadstawka(szer,wys,gleb,grub,t1)
difference {

box { <0,0,0> <szer,wys,-gleb> }

box { <grub,wys-grub,-grub> <szer-grub,wys-wys/3,-(gleb+0.1)> }

box { <grub,wys-wys/3-grub,-grub> <szer-grub,wys-2*wys/3,-(gleb+0.1)> }

box { <grub,wys-2*wys/3-grub,-grub> <szer-grub,0,-(gleb+0.1)> }

texture{t1
        finish { phong 0.3 reflection 0.00 }
        }
}
#end
//-------------------------------------------------------------

#macro mc_stolik(szer,wys,gleb,grub,t1,t2)
union {

box { <0,wys,0> <szer,wys-grub,-gleb>

texture{t1
        finish { phong 0.3 reflection 0.00 }
        }
    }

union {
cone { <3*grub,wys-grub,-3*grub> grub <3*grub,0,-3*grub> grub/2 }
    
cone { <szer-3*grub,wys-grub,-3*grub> grub <szer-3*grub,0,-3*grub> grub/2 }  
                                                                         
cone { <3*grub,wys-grub,-gleb+3*grub> grub <3*grub,0,-gleb+3*grub> grub/2 }    

cone { <szer-3*grub,wys-grub,-gleb+3*grub> grub <szer-3*grub,0,-gleb+3*grub> grub/2 }
      
      texture{t2
              finish { phong 0.3 reflection 0.00 }
              }
      }
}
#end
//------------------------------------------------------------    

#macro mc_krzeslo(szer,wys,wysop,gleb,grub,t1,t2)
union {

box { <0,wys,0> <szer,wys-grub,-gleb>
        texture{t1
        finish { phong 0.3 reflection 0.00 }
        }
    }

box { <0,wys,0> <szer,wys+wysop,-grub>
        texture{t1
        finish { phong 0.3 reflection 0.00 }
        }
    }
    
union { 
cone { <3*grub,wys-grub,-3*grub> grub <3*grub,0,-3*grub> grub/2 }
    
cone { <szer-3*grub,wys-grub,-3*grub> grub <szer-3*grub,0,-3*grub> grub/2 }  
                                                                         
cone { <3*grub,wys-grub,-gleb+3*grub> grub <3*grub,0,-gleb+3*grub> grub/2 }    

cone { <szer-3*grub,wys-grub,-gleb+3*grub> grub <szer-3*grub,0,-gleb+3*grub> grub/2 } 
      
      texture{t2
              finish { phong 0.3 reflection 0.00 }
              }
      }
}
#end
//------------------------------------------------------------                                       