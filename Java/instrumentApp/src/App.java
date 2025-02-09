public class App {
    public static void main(String[] args) throws Exception {
        //Guitar guitar = new Guitar();
        //Instrument gitar2 = new Guitar();
        //guitar.play();
        //guitar.setChord(); // eğer nesne üretme işlemini bir üstteki yorum satırındaki gibi yapsaydık bu metodu çağıramazdık. Ama bu metod Instrument interface' inde tanımlansaydı yorum satırındaki nesneyle erişebilirdik.

       // Piano piano = new Piano();
       // Instrument piano2 = new Piano();
        //piano.play();

        Orchestra orchestra = new Orchestra();
        orchestra.playAll();
        
    }
}
