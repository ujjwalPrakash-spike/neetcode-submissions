func isAnagram(s string, t string) bool {
   
    var hashCheck1[26] int 
    var hashCheck2[26] int 
    
    if len(s) != len(t) {
        return false 
    }

    for i := 0; i < len(s); i++{
        hashCheck1[int(s[i]) - int('a')]++
        hashCheck2[int(t[i]) - int('a')]++
    }
    
    for i := 0 ; i < 26; i++ {
        if hashCheck1[i] != hashCheck2[i] {
            return false 
        }
    }

    return true
}
