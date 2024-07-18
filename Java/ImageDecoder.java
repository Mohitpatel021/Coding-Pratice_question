import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import javax.imageio.ImageIO;
import javax.swing.*;

public class ImageDecoder {

  public static void main(String[] args) {
    // Assume imageData is the byte array containing image data
    byte[] imageData = getImageDataFromSomewhere();

   // byte[] imagedata1 = new byte[4];
    // Decode the byte array into a BufferedImage
    BufferedImage image = decodeImage(imageData);

    // Display the image
    displayImage(image);
    System.out.println(imageData);
  }

  private static BufferedImage decodeImage(byte[] imageData) {
    try {
      ByteArrayInputStream bis = new ByteArrayInputStream(imageData);
      return ImageIO.read(bis);
    } catch (IOException e) {
      e.printStackTrace();
      return null;
    }
  }

  private static void displayImage(BufferedImage image) {
    JFrame frame = new JFrame("Image Viewer");
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setSize(5000, 1000);

    JLabel label = new JLabel(new ImageIcon(image));
    frame.add(label, BorderLayout.CENTER);

    frame.setVisible(true);
  }

  private static byte[] getImageDataFromSomewhere() {
    // Read image data from a file and return it as a byte array
    Path imagePath = Paths.get("Picture1.png");
    try (
      InputStream inputStream = Files.newInputStream(imagePath);
      ByteArrayOutputStream outputStream = new ByteArrayOutputStream()
    ) {
      byte[] buffer = new byte[4096];
      int bytesRead;
      while ((bytesRead = inputStream.read(buffer)) != -1) {
        outputStream.write(buffer, 0, bytesRead);
      }
      return outputStream.toByteArray();
    } catch (IOException e) {
      e.printStackTrace();
      return null;
    }
  }
}
