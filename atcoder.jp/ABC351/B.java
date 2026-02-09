import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		int N = Integer.valueOf(br.readLine());
		
		String[] A = new String[N];
		for(int i=0;i<N;i++) {
			A[i] = br.readLine();
		}
		
		String[] B = new String[N];
		for(int i=0;i<N;i++) {
			B[i] = br.readLine();
		}
		
		for(int i=0;i<N;i++) {
			for(int j=0;j<N;j++) {
				if(A[i].charAt(j)!=B[i].charAt(j)) {
					bw.write((i+1)+" "+(j+1));
					i=j=N;
					break;
				}
			}
		}
		
		bw.close();
	}
}