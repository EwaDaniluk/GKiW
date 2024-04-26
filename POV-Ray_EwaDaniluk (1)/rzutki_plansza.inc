#macro tarcza()            
union {
            
cylinder{             // tablica
         <0,0,0.1>
         <0,0,-0.1>
         4 
         texture { pigment { Black } }
        }
cylinder{                     //œrodkowe zielone ko³o
         <0,0,0.17>
         <0,0,-0.1>
         0.4 
         texture { pigment { Green } }
        }  
cylinder{                     //œrodkowe czerwone ko³o
         <0,0,0.17>
         <0,0,-0.11>
         0.2 
         texture { pigment { Red } }
        }        
                      
              //podzia³ na bia³e i czarne trójk¹ty
#declare i = 0;
#declare b = 1;
#while(i < 360) 
        #if(b = 1)
            triangle { <0,0,0.11> <-0.54,3.05,0.11> <0.54,3.05,0.11> rotate <0,0,i> texture { pigment { White } } }
            #declare i = i + 18; 
            #declare b = 0; 
        #else
            triangle { <0,0,0.11> <-0.54,3.05,0.11> <0.54,3.05,0.11> rotate <0,0,i> texture { pigment { Black } } }    
            #declare i = i + 18;
            #declare b = 1;
        #end
#end 
        
             //zewnêtrzne kolorowe kó³ko 
#declare j = 0;
#declare g = 1;
#while(j < 360)
        #if(g = 0)
             sphere_sweep{
                    b_spline
                    4,     
                    <-1.8,3.05,0.1>, 0.1
                    <-0.27,3.06,0.1>, 0.1
                    <0.27,3.06,0.1>, 0.1
                    <1.8,3.05,0.1>, 0.1
                    rotate <0,0,j>
                    pigment { Red }
                    finish { ambient 0.4 } 
                         }
             #declare j = j + 18;
             #declare g = 1;
         #else        
             sphere_sweep{
                    b_spline
                    4,     
                    <-1.8,3.05,0.1>, 0.1
                    <-0.27,3.06,0.1>, 0.1
                    <0.27,3.06,0.1>, 0.1
                    <1.8,3.05,0.1>, 0.1
                    rotate <0,0,j>
                    pigment { Green } 
                    finish { ambient 0.4 }
                         }
             #declare j = j + 18;
             #declare g = 0;   
             
         #end
#end    


             //wewnêtrzne kolorowe kó³ko 
#declare j = 0;
#declare g = 1;
#while(j < 360)
        #if(g = 0)
             sphere_sweep{
                    b_spline
                    4,     
                    <-1,2.05,0.1>, 0.1
                    <-0.27,2.06,0.1>, 0.1
                    <0.27,2.06,0.1>, 0.1
                    <1,2.05,0.1>, 0.1
                    rotate <0,0,j>
                    pigment { Red }
                    finish { ambient 0.4 } 
                         }
             #declare j = j + 18;
             #declare g = 1;
         #else        
             sphere_sweep{
                    b_spline
                    4,     
                    <-1,2.05,0.1>, 0.1
                    <-0.27,2.06,0.1>, 0.1
                    <0.27,2.06,0.1>, 0.1
                    <1,2.05,0.1>, 0.1
                    rotate <0,0,j>
                    pigment { Green } 
                    finish { ambient 0.4 }
                         }
             #declare j = j + 18;
             #declare g = 0;   
             
         #end
#end  
  
#declare i = 0;
#declare s = 0;  
#macro tekst(s,i)
            //rotate <0,0,-s> 
            scale 0.78  
            pigment { White }
            rotate <0,180,0>   
            translate <0.38,3.3,0.16>
            #declare i = i + 1;
            rotate <0,0,-s>
            #declare s = s + 18;        
#end  

#while(i<20)
  #switch(i)
    #case(0)
        text{
            ttf "timrom.ttf" "20" 0.5, 0 
            tekst(s,i) 
            }
    #break  
    #case(1)
        text{
            ttf "timrom.ttf" "5" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(2)
        text{
            ttf "timrom.ttf" "12" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(3)
        text{
            ttf "timrom.ttf" "9" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(4)
        text{
            ttf "timrom.ttf" "14" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(5)
        text{
            ttf "timrom.ttf" "11" 0.5, 0 
            
            tekst(s,i)  
            }
    #break
    #case(6)
        text{
            ttf "timrom.ttf" "8" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(7)
        text{
            ttf "timrom.ttf" "16" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(8)
        text{
            ttf "timrom.ttf" "7" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(9)
        text{
            ttf "timrom.ttf" "19" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(10)
        text{
            ttf "timrom.ttf" "3" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(11)
        text{
            ttf "timrom.ttf" "17" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(12)
        text{
            ttf "timrom.ttf" "2" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(13)
        text{
            ttf "timrom.ttf" "15" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(14)
        text{
            ttf "timrom.ttf" "10" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(15)
        text{
            ttf "timrom.ttf" "6" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(16)
        text{
            ttf "timrom.ttf" "13" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(17)
        text{
            ttf "timrom.ttf" "4" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(18)
        text{
            ttf "timrom.ttf" "18" 0.5, 0 
            tekst(s,i) 
            }
    #break
    #case(19)
        text{
            ttf "timrom.ttf" "10" 0.5, 0 
            tekst(s,i) 
            }
    #break
  #end 
#end 
}

#end
                                   