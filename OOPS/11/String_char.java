class String_char
{
        public static void main(String args[])
        {
                String str = "Some are born to sweet delight, some are born to endless night.";
                int arr[] = new int[50];
                char ch='o';
                int flag =0,j=0;
                for(int i=0;i<str.length();i++)
                        if(str.charAt(i)==ch)
                        {
                                arr[j]=i;
                                flag=1;
                                j++;
                        }
                arr[j]=-1;
                if(flag==0)
                        System.out.println("No occurence of "+ch);
                else
                {
                        System.out.print("Character "+ch+" present in Position ");
                        for(int i=0;arr[i]!=-1;i++)
                                System.out.print(arr[i]+ " ");
                        System.out.println();
                }
        }
}
