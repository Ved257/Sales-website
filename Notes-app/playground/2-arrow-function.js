// const square = function(x){
//     return x*x
// }

// const square =(x)=>{
//     return x**2

// }

// const square=(x)=>x**2

// console .log(square(4))

const event={
    name:'Birthday Party',
    guestList:['Ved',"Rashi"],
    printGuestList(){
        
        console.log("Guest list for " + this.name)
        this.guestList.forEach((g)=>{
           console.log(g+ " is attending "+ this.name)
       })
    }
}
event.printGuestList()