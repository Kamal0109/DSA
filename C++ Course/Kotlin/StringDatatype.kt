fun main(args: Array<String>) {
    //Adding string
    var a : String = "Hello Kotlin"
    var b : String = "Language"
    println(a+" "+b)

    //Adding String with int
    var c : Int = 20
    println("Your age is = " + c)

    //Using length() method to find the length of string
    var x : String = "Kotlin"
    var y : Int = x.length
    println(y)
    println(x.length) // This will also print our answer in above case

    //Using equal method to see whether they are equal or not and  return true or false according to it
    var z : Boolean = x.equals("Java")
    println(z)
    println(x.equals("Java"))  //This will also print our required answer in above case

   //Using Plus
    println(x.plus("Language"))

    // using empty
    println(x.isEmpty())

    //Using lowercase and uppercase
    println(x.lowercase())
    println(x.uppercase())

    //Using trim : It is used to remove the space from from and end of the string
    var d : String = "Kotlin"
    var t : String = " Language "
    println(d+t)
    println(d+ t.trim())
}