class Player(val name: String,var level:Int = 1) {
   var lives = 3
   var score = 0
    fun show(){println("""
      Name : $name
      Lives: $lives
      Level: $level
      Score: $score
    """)
    }


}