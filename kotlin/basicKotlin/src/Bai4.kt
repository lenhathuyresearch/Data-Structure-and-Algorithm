fun sum_for(n: Int): Int
{
    var total = 0;
    for (i in 1..n)
    {
        total += i*i;
    }
    return total
}

// Cách viết thứ 2
fun sum_for_compact(n: Int): Int = (1..n).sumOf { it*it }

/// Cách viết thứ 3:
fun sum_formula (n:Int): Int = n*(n+1)*(2*n+1)/6


fun main() {
    val test = intArrayOf(1, 5, 10, 15, 20, 50, 100, 200)
    println("Dùng công thức")
    test.forEach {
        println("S($it) = ${sum_formula(it)} ")
    }
    println("Dùng for")
    test.forEach {
        println("S($it) = ${sum_for(it)} ")
    }
    println("Dùng for rút gọn")
    test.forEach {
        println("S($it) = ${sum_for_compact(it)} ")
    }

}