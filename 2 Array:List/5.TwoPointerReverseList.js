function reverse_array(arr){
    let left=0;
    let temp=0
    let right=arr.length - 1;
    while(left!=right){
        temp = arr[left]
        arr[left] = arr[right]
        arr[right] = temp
        left = left + 1
        right = right - 1
    }
}
let arr = [1,2,3,4,5]
reverse_array(arr);

console.log(arr);