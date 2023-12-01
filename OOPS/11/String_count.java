class String_count
{
	public static void main(String args[])
	{
		String para = "It was thr best of times, it was the worst of times.";
		int count = para.length();
		int words = para.split("\\s").length;
		System.out.println("The number of characters : "+count);
		System.out.println("The number of words : "+words);
	}
}
