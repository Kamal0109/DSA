fun main(args: Array<String>) {
    var a : Byte = 127
    var b : Int = a. toInt()
    var c : Double = b. toDouble()
    println(a)
    println(b)
    println(c)

//  below here we can se our data might be lost from 213.55 to 213
    var x : Double = 213.55
    var y : Int =  x. toInt()
    println(x)
    println(y)
}