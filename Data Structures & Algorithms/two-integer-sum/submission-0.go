func twoSum(nums []int, target int) []int {
    var seen = make(map[int]int)
    
     for i, v := range nums {
        if j, ok := seen[target - v]; ok {
            return []int{j, i}
        }
        seen[v] = i 
    }

    return nil

}
