fun main(args: Array<String>) {
    var age = arrayListOf<Int>(1,2,3,4,5)
    age.add(index = 5 , 6)
    age.add(12)
    age.remove(2)   // This will remove elment whose value is 2
    age.removeAt(2)   // this will remove elemnt whose index is 2

    println(age)  // This will print whole array
    println(age[0])   // This will print array's element whose index is 0
    println("Second element = " + age.get(1))
    println("Third element = ${age[2]}")

    println("**********************************************")
    //creating arrayList which consist of different datatype
    var cars = arrayListOf<Any>("BMW","Mercedes","R",1,2.5,true)
    cars.add(10)
    println(cars[0])
    println(cars[1])
    println(cars[2])
    println(cars[3])
    println(cars[4])
    println(cars[5])

}