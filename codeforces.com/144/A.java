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
		
		int n = Integer.valueOf(br.readLine());
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int[] arr = new int[n];
		for(int i=0;i<n;i++) {
			arr[i] = Integer.valueOf(st.nextToken());
		}
		
		int max=0, maxIdx=0;
		for(int i=0;i<n;i++) {
			if(arr[i]>max) {
				max=arr[i];
				maxIdx=i;
			}
		}
		
		int min=1000, minIdx=0;
		for(int i=n-1;i>=0;i--) {
			if(arr[i]<min) {
				min=arr[i];
				minIdx=i;
			}
		}
		
		int cnt = maxIdx + n-1-minIdx;
		if(maxIdx>minIdx) cnt--;
		bw.write(Integer.toString(cnt));
		
		bw.close();
	} // end of main
} // end of Main class