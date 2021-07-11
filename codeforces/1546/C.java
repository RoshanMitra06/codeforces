// Author : Roshan Mitra 😎
// Language: C++
// College: Symbiosis Institute Of Technology
// Practice is the only key to success
// Always push ur limits
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
     
    public class Solution {
     
      public static void solve(Scanner in) {
        int t = in.nextInt();
        while (t-- > 0) {
        	ArrayList<Integer>res=new ArrayList<>();
        	int n=in.nextInt();
        	int v[]=new int[n];
        	for(int i=0;i<n;i++) v[i]=in.nextInt();
        	HashMap<String,Integer> mpp=new HashMap<>();
        	
        	for(int i=0;i<n;i++) {
        		res.add(v[i]);
        		String p="";
        		if(i%2!=0) {
        			p="0"+v[i];
        			mpp.put(p, mpp.getOrDefault(p,0)+1);
        		}
        		else {
        			p="1"+v[i];
        			mpp.put(p, mpp.getOrDefault(p,0)+1);
        		}
        	}
        	Collections.sort(res);
        	for(int i=0;i<n;i++) {
        		String s="";
        		if(i%2!=0) {
        			s="0"+res.get(i);
        		}
        		else s="1"+res.get(i);
        		if(mpp.containsKey(s)) {
        			mpp.put(s,mpp.get(s)-1);
        		if(mpp.get(s)==0) mpp.remove(s);
        		}
        	}
        	if(mpp.size()==0) System.out.println("YES\n");
        	else System.out.println("NO\n");
        }
        
      }
     
      public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        Solution sol = new Solution();
        sol.solve(in);
      }
    }