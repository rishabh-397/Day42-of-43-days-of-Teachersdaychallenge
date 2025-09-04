fun main() {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(" ").map { it.toInt() }
    
    var maxLength = 1
    var currentLength = 1
    
    for (i in 1 until n) {
        if (a[i] >= a[i - 1]) {
            currentLength++
            if (currentLength > maxLength) {
                maxLength = currentLength
            }
        } else {
            currentLength = 1
        }
    }
    
    println(maxLength)
}
