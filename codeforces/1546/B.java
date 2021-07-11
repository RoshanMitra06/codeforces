// Author : Roshan Mitra 😎
// Language: C++
// College: Symbiosis Institute Of Technology
// Practice is the only key to success
// Always push ur limits
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
     
    public class Solution {
     
      public static void solve(Scanner in) {
        int t = in.nextInt();
        while (t-- > 0) {
   		int n=in.nextInt();
		int m=in.nextInt();
		String s[]=new String[n];
		String s1[]=new String[n];
		for(int i=0;i<n;i++) s[i]=in.next();
		for(int i=0;i<n-1;i++) s1[i]=in.next();
		StringBuilder sbb=new StringBuilder();
		
		for(int i=0;i<m;i++) {
			HashMap<Character,Integer> mpp=new HashMap<>();
			for(int j=0;j<n;j++) {
				char x=s[j].charAt(i);
				mpp.put(x, mpp.getOrDefault(x, 0)+1);
			}
			for(int j=0;j<n-1;j++) {
				char x=s1[j].charAt(i);
				if(mpp.containsKey(x)) mpp.put(x, mpp.get(x)-1);
				if(mpp.get(x)==0) mpp.remove(x);
			}
			for(Map.Entry<Character, Integer> mp1:mpp.entrySet()) {
				sbb.append(mp1.getKey());
			}
		}
		System.out.println(sbb);
        }
      }
     
      public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        Solution sol = new Solution();
        sol.solve(in);
      }
    }