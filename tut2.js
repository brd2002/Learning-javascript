"use strict"; // treat all js code as a newer version
// null -> stand alone value , type is  object
// undifined -> for now we are not asign the value , it's an type
// symbol -> unique 

// object 

// console.log(typeof undefined)
function f(x ){
    x = "x-"+x ; 
    return function(y){
        y = "y-"+x ; 
        return function (z){
            return "z-" + y;
        }

    }
}
let fx  = f("a")("b")("c")
console.log(fx)