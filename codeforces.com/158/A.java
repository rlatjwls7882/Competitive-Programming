import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.valueOf(st.nextToken());
		int k = Integer.valueOf(st.nextToken());
		
		st = new StringTokenizer(br.readLine());
		int[] score = new int[n];
		for(int i=0;i<n;i++) {
			score[i] = Integer.valueOf(st.nextToken());
		}
		
		int cnt=0;
		for(int i=0;i<n;i++) {
			if(score[k-1]<=score[i]&&score[i]>0) {
				cnt++;
			} else {
				break;
			}
		}
		bw.write(Integer.toString(cnt));
		
		bw.close();
	} // end of main()
} // end of Main class