fun main(args: Array<String>) {
    //Array of no
    var age =  arrayOf(1,2,3,4,5,6)
    println("The first element of array is =  " + age[0])
    println("The second element of array is =  " + age.get(1))
    println("The third element of array is =  " + age[2])

    println("*****************************************")

    //Array of String
    var cars = arrayOf("Mercedes", "Array" , "Audi")
    println("The first element of array is =  " + cars[0])
    println("The second element of array is =  " + cars.get(1))
    println("The third element of array is =  " + cars[2])

    println("*****************************************")

    //Array with both digits and String
    var world = arrayOf("Mercedes",10,"Audi",20)
    println("The first element of array is =  " + world[0])
    println("The second element of array is =  " + world.get(1))
    println("The third element of array is =  " + world[2])
    println("The fourth element of array is =  " + world[3])
    println("*****************************************")

    //Size of Array


}