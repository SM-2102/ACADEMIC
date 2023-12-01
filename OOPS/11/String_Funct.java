class String_Funct
{
	String char_array()
	{
		char arr[] = {'S','u','k','a','n','y','a'};
		String str = new String(arr);
		return str;
	}
	public static void main(String args[])
	{
		String_Funct ob = new String_Funct();
		String str = ob.char_array();
		System.out.println("The converted string : "+str);
		String new_str = str.substring(0,3);
		System.out.println("The substring : "+new_str);
		System.out.println("Concatenate : "+new_str.concat(str));
		System.out.println("Equal : "+new_str.equals(str));
		System.out.println("The first pos : "+str.charAt(0));
	}
}
