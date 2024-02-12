import kotlin.random.Random

fun main(args: Array<String>) {
    var a = 5
    while(a > 0){
        println(a)
        a--
    }

    println("******************************")

    var k = 1
    var fact = 1
    while(k < 5){
        fact = fact * k
        // we can do also fact *= k
        k ++
    }
    println(fact)

    println("******************************")

    // by using random number we will guess the number
    var number = Random.nextInt(0,10)
    println("Enter the number ")

    while (1 < 2){
        val guessno : Int  = readLine()!!.toInt()
        if(guessno == number){
            println("Congratulation you know the number")
        }
        else if(guessno > number){
            println("Decrease your number")
        }
        else{
            println("Increase your no")
        }
    }


}