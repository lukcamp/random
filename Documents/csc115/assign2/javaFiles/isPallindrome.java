public class isPallindrome{
	public static boolean Pallindrome(String str){
		return pallindromeDetail(str, 0 , str.length()-1);
	}
	
	public static boolean pallindromeDetail(String str, int start, int end){
		//basic case
		if(end - start < 1 || start == end){
			return true;
		}
		//recursive step
		if(str.charAt(start)== str.charAt(end)){
			return pallindromeDetail(str, start+1, end-1);	
		 }
		else return false;
	}

	public static void main(String[] args){
		String test = "ada";
		System.out.println(test+" is pallindrome: "+Pallindrome(test));
		String t = "lucas";
		System.out.println(t+" is pallindrome: "+Pallindrome(t));
	}
}
