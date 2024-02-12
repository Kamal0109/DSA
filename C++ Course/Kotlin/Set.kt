fun main(args: Array<String>) {
    var Myset = setOf<Any>("BMW", 2, 2.2 , "BMW","Mercedes")
    println(Myset.size)

    println("**********************************************")

    var age = mapOf<String,Int>("Ronaldo" to 20 , "Messi" to 25)
    println("Age of Ronalado =" + age["Ronaldo"])
    println("Age of Messi =" + age["Messi"])

    println("**********************************************")

    //now we are not able to change the no of element of mapOf as it immutable ,so we are creating mutable mapOf
    var cars = mutableMapOf<String,Int>("Ronaldo" to 37 ,"Messi" to 33)
    cars.put("Neymar" ,32)
    println("Age of Ronalado =" + cars["Ronaldo"])
    println("Age of Messi =" + cars["Messi"])
    println("Age of Neymar =" + cars["Neymar"])
}
