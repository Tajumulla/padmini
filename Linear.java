import java.util.*;
public class Linear
{
static int i,max=5,key,temp=0;
static Scanner Sc;
static int a[]=new int[max];
public static void search(int a[],int key)
{
for(i=0;i<max;i++)
{
if(a[i]==key)
{
System.out.println("element found");
temp=1;
break;
}}
if(temp==0)
System.out.println("element not found");
}
public static void main(String args[])
{
Sc=new Scanner(System.in);
a=new int[max];
System.out.println("enter array elements");
for(int i=0;i<max;i++)
a[i]=Sc.nextInt();
System.out.println("enter key element");
key=Sc.nextInt();
search(a,key);
}}
