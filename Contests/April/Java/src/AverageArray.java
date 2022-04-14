import java.util.*;
import java.io.*;

public class AverageArray {

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
            bw.append("" + object);
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
                int n, m;
                n = in.nextInt();
                m = in.nextInt();

                int l = n / 2;
                if ((n & 1) == 1) {
                    for (int i = m - l; i < m + l + 1; i++) {
                        System.out.print(i + " ");
                    }
                } else {
                    for (int i = m - l; i < m + l + 1; i++) {
                        if (i != m) {
                            System.out.print(i + " ");
                        }
                    }
                }
                System.out.println();
            }

            out.close();
        } catch (Exception ignored) {
        }
    }

}