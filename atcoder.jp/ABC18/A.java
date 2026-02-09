import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		int[] score = new int[3];
		for(int i=0;i<3;i++) {
			score[i] = Integer.valueOf(br.readLine());
		}
		
		int[] rank = new int[3];
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				if(score[i]<=score[j]) {
					rank[i]++;
				}
			}
		}
		
		for(int i=0;i<3;i++) {
			bw.write(rank[i]+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class