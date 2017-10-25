fun main(args: Array<String>) {
    var line = readLine();
    while (line != null) {
        var (a, b) = line.split(' ').map{ it.toInt() }.toIntArray();
        var r = Math.abs(a - b);
        println("Dr. Chaz ${if(a > b) ("needs ${r} more piece" + (if(r > 1) "s" else "") + " of chicken!") else ("will have ${r} piece" + (if(r > 1) "s" else "") + " of chicken left over!")}");
        line = readLine();
    }
}