public class CountingThreads {

    static int counter = 0;
    public static void main(String[] args) {
        Thread upThread = new Thread(new CountUp());
        Thread downThread = new Thread(new CountDown());

        upThread.start();
        System.out.println("Counter Value:" + counter);
        downThread.start();
        System.out.println("Counter Value:" + counter);
    }

    static class CountUp implements Runnable {
        @Override
        public void run() {
            
            for (int i = 0; i<20; i++ ) {
                counter++;
            }    
        }
    }
    

    static class CountDown implements Runnable {
        @Override
        public void run() {
            for (int i = 20; i >= 0; i--) {
                counter--;
            }
        }
    }
}
