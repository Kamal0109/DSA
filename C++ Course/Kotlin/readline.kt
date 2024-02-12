fun main(args: Array<String>) {
    print("What is your name")
    var name : String? = readLine()

    print("What is your age")
    var age : Int = readLine()!!.toInt()

    print("My name is $name and my age is $age")
}