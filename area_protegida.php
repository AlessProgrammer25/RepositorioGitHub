<?php
session_start();

if (!isset($_SESSION['usuario'])) {
    header('Location: login.php');
    exit();
}

$nombre = $_SESSION['usuario']['nombre'];
$email = $_SESSION['usuario']['email'];

?>
<!DOCTYPE html>
<html>
<head><title>Área Protegida</title></head>
<body>
    <hr>
    <h2>¡Bienvenido, <?php echo htmlspecialchars($nombre); ?>!</h2>
    <p>Tu email es: <?php echo htmlspecialchars($email); ?></p>
    <hr>
    <form method="post" action="logout.php">
        <button type="submit">Cerrar Sesión</button>
    </form>
</body>
</html>