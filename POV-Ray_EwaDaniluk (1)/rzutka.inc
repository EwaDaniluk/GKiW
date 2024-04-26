#macro rzutka(k)
merge {
    sphere_sweep { 
        linear_spline
        4,
        <0,0,0> .1                                            
        <3,0,0> 1
        <7,0,0> 1
        <10,0,0> 1
        pigment { NewTan }
    }
    sphere_sweep { 
        cubic_spline
        5,   
        <3,0,0> 0.6
        <7,0,0> 1
        <10,0,0> 2
        <13,0,0> 2.7
        <20,0,0> 2
        texture { pigment { P_Chrome5 } }
    } 
    sphere_sweep { 
        linear_spline
        5, 
        <13,0,0> 2.7
        <20,0,0> 2
        <26,0,0> 1
        <32,0,0> 1.5
        <39,0,0> 1.5
        pigment { k }
    }  
    sphere_sweep { 
        linear_spline
        4,
        <35,0,0> 1.5
        <38,0,0> 3
        <43,0,0> 3
        <49,0,0> 0
        pigment { k } 
        scale <1,1,0.25>
    }
    sphere_sweep { 
        linear_spline
        4,
        <35,0,0> 1.5
        <38,0,0> 3
        <43,0,0> 3
        <49,0,0> 0
        pigment { k } 
        scale <1,1,0.25> 
        rotate <80,0,0>
    }   
    scale .1
}
#end
                