#macro dywan()
box{                        
    <-4,0,-20>,
    <25,0.08,7>
    texture {pigment {color Red}}
   }
#end 

#macro magicznePudelko()
box{  
    <-5,-5,0.08>, <5,5,0> 
    scale 1/9.5
    translate <0.5,0.5,0>
    texture { pigment { image_map {"Trolo.jpg"}}} 
    scale 9.5 
   }
#end

#macro kosz()
difference {                               
            cone {<0,0,0>,2,<0,5,0>,2.5}
            cone {<0,0.5,0>,1.9,<0,6,0>,2.45}
            pigment { Gray55 }
            scale 0.80
            translate <-2,0,18>
           }
#end 

#macro kula()
sphere {
        <0,3,0>, 3
        pigment { color rgbf <0,0,1,0> }
        finish { phong 0.9 reflection 0.8 }
       }
#end

#macro obiekt()
#declare ramie = sphere_sweep {
    linear_spline
    2,
    <-1,0,0>, .5
    <1,0,0>, .1
    pigment { color rgbf <0.5,0.2,0.6,0> }
    finish {
        phong 1.0
        reflection 0.5
        refraction 1.2
        ior 1.8
        }
    translate <-1,2,-2>
}

merge {
        object { ramie }
        object { ramie 
                    rotate 90*z
                    translate <2,2,0> }
        object { ramie 
                    rotate -90*z
                    translate <-2,2,0> }
        object { ramie 
                    rotate 270*y
                    translate <-2,0,-2> }
        object { ramie 
                    rotate 180*y
                    translate <0,0,-4> }
        object { ramie 
                    rotate 90*y
                    translate <2,0,-2> }
        scale 0.70
        rotate <30,15,45>
        translate <0,0,-2>
       }                                                                                            
#end                    