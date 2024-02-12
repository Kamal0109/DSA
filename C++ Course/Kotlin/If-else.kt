import java.util.ArrayList

fun main(args: Array<String>) {
    print("Enter the Number ")
    var a : Int = readLine()!!.toInt()
    if(a % 2 == 0){
        println(" $a is even number")
    }
    else{
        println("$a is odd number ")
    }
    println("************************")
    // when
    print("The number is  :")
    var daysNumber : Int = readLine()!!.toInt()
    var days : String

    when(daysNumber){
        1 -> days = "Monday"
        2 -> days = "Tuesday"
        3 -> days = "Wednesday"
        4 -> days = "Thrusday"
        5 -> days = "Friday"
        6 -> days = "Saturday"
        7 -> days = "Sunday"
        else -> days = "Not valid input "

    }
    println(days)

    var x = 'a' .. 'd'
    println(x)

    println("*******************")

// For loop

for( number in 1..10){
    println("Number is : " + number)
}

    println("************************")

    var sum  : Int = 0
    for(x in 1..10){
        println(x)
        sum += x // sum = sum + x
        println("sum of $x number is  is : " + sum )

    }

    println("************************")
    // Now we have to write the even no in 1..10
    println("Now we have to write the even no in 1..10")

    for(c in 1..10){
        if(c % 2 == 0) {
            print(c)
            sum += c
        }
    }
    println("The sum of even number is $sum")

    println("************************")

    //Using the arraylist
    var numberlist = arrayListOf<Int>(1,2,3,4,5,6,7,8,9)
    for(y in numberlist){
        println(y)
    }

    println("************************")



}

