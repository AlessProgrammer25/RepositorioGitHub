import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class TemporizadorGUI extends JFrame {
    private int minutos = 0;
    private boolean corriendo = false;
    private JLabel etiquetaTiempo;
    private Timer timer;

    public TemporizadorGUI() {
        setTitle("Temporizador");
        setSize(300, 150);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        etiquetaTiempo = new JLabel("Minutos: 0");
        etiquetaTiempo.setFont(new Font("Arial", Font.BOLD, 20));

        JButton botonIniciar = new JButton("Iniciar");
        JButton botonDetener = new JButton("Detener");

        add(etiquetaTiempo);
        add(botonIniciar);
        add(botonDetener);

        timer = new Timer(1000, e -> {
            minutos++;
            etiquetaTiempo.setText("Minutos: " + minutos);
        });

        botonIniciar.addActionListener(e -> {
            if (!corriendo) {
                timer.start();
                corriendo = true;
            }
        });

        botonDetener.addActionListener(e -> {
            if (corriendo) {
                timer.stop();
                corriendo = false;
            }
        });

        setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(TemporizadorGUI::new);
    }
}
