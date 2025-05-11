<?php
session_start();

if (isset($_SESSION['usuario'])) {
    header('Location: area_protegida.php');
    exit();
}

if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    if (isset($_SESSION['usuarios'])) {
        $email = $_POST['email'];
        $password = $_POST['password'];

        foreach ($_SESSION['usuarios'] as $usuario) {
            if ($usuario['email'] === $email && password_verify($password, $usuario['password'])) {
                $_SESSION['usuario'] = $usuario;
                header('Location: area_protegida.php');
                exit();
            }
        }
        $error = "Email o contraseña incorrectos.";
    } else {
        $error = "No hay usuarios registrados.";
    }
}

?>
<!DOCTYPE html>
<html>
<head><title>Login</title></head>
<body>
    <h2>Iniciar Sesión</h2>
    <hr>
    <?php if (isset($error)) echo "<p style='color:red;'>$error</p>"; ?>
    <form method="post" action="">
        Email: <input type="email" name="email" required><br><br>
        Contraseña: <input type="password" name="password" required><br>
        <hr>
        <button type="submit">Ingresar</button>
    </form>
    <p>¿No tenés cuenta? <a href="registro.php">Registrate acá</a>.</p>
</body>
</html>