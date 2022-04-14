import java.util.*;
import java.io.*;

public class GoodQualityBulbs {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine().trim();
            } catch (Exception e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    static class FastWriter {
        private final BufferedWriter bw;

        public FastWriter() {
            this.bw = new BufferedWriter(new OutputStreamWriter(System.out));
        }

        public void print(Object object) throws IOException {
            bw.append("").append(String.valueOf(object));
        }

        public void println(Object object) throws IOException {
            print(object);
            bw.append("\n");
        }

        public void close() throws IOException {
            bw.close();
        }

    }

    public static void main(String[] args) {
        try {
            FastReader in = new FastReader();
            FastWriter out = new FastWriter();

            int tc = 1;
            tc = in.nextInt();
            while (tc-- > 0) {
                // write code here
                int n, x, l = 0, k;
                n = in.nextInt();
                x = in.nextInt();

                int[] arr = new int[n-1];
                for(int i = 0; i < n - 1; i++){
                    arr[i] = in.nextInt();
                    l = l + arr[i];
                }
                k = (n * x) - l;

                if(k > 0)
                    System.out.print(k);
                else
                    System.out.print(0);

                System.out.println();

            }

            out.close();
        } catch (Exception ignored) {
        }
    }

}