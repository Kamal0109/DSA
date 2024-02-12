fun main(args: Array<String>) {
    var a : Int = 20
    var b : Int = 15
    var c : Int = 0

    c = a + b      // 20 + 15 = 35

    c += a         // 35 + 20 = 55
    println(c)

    c -= a         // 55 - 20 = 35
    println(c)

    c *= a          // 35 * 20 = 700
    println(c)

    c /= a          // 700 / 20 = 35
    println(c)

    c %= a           // 35 % 20 = 15  (As the remainder when 35 is divided by 20 is 15)
    println(c)
}