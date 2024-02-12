fun main(args: Array<String>) {
    var a : Int = 5
    var b : Int = 8
    var c : Int = 10
    var result : Boolean = true

    //Conditional && operator
    result = (a>b) && (b<c)
    println("result " + result)

    //Conditional || Operator
    result = (a>b) || (b<c)
    println("result " + result)

}