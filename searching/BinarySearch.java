
class BinarySearch{
    public static void main(String[] args) {
        int[] arr={1 , 2, 4 , 5 , 77 , 88, 99};
        int target=5;
        int s=0;
        int e=arr.length;
        System.out.println(search(arr,target,s,e));
    }
    
    static int search(int[] arr,int target,int s,int e){
        if(s>e)
            return -1;
        int m=s+(e-s)/2;
        if(arr[m]==target)
            return m;
        if(target<arr[m])
            return search(arr, target, s,m-1);
        return search(arr, target,m+1,e);
    }
}