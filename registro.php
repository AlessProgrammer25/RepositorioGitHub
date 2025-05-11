<?php
session_start();

if (!isset($_SESSION['usuarios'])) {
    $_SESSION['usuarios'] = [];
}

if (isset($_POST['nombre'], $_POST['email'], $_POST['password'])) {
    $nombre = trim($_POST['nombre']);
    $email = trim($_POST['email']);
    $password = $_POST['password'];

    if (!empty($nombre) && !empty($email) && !empty($password)) {
        if (filter_var($email, FILTER_VALIDATE_EMAIL)) {
            $emailExistente = false;
            foreach ($_SESSION['usuarios'] as $usuario) {
                if ($usuario['email'] === $email) {
                    $emailExistente = true;
                    break;
                }
            }

            if (!$emailExistente) {
                $usuario = [
                    'nombre' => $nombre,
                    'email' => $email,
                    'password' => password_hash($password, PASSWORD_DEFAULT)
                ];
                $_SESSION['usuarios'][] = $usuario;
                header('Location: login.php');
                exit;
            } else {
                $error = "El email ya está registrado.";
            }
        } else {
            $error = "Email no válido.";
        }
    } else {
        $error = "Todos los campos son obligatorios.";
    }
}

?>
<!DOCTYPE html>
<html>
<head><title>Registro</title></head>
<body>
    <h2>Registro</h2>
    <hr>
    <?php if (isset($error)) echo "<p style='color:red;'>$error</p>"; ?>
    <form method="post" action="">
        Nombre: <input type="text" name="nombre" required><br><br>
        Email: <input type="email" name="email" required><br><br>
        Contraseña: <input type="password" name="password" required><br><br>
        <hr>
        <button type="submit">Registrarse</button>
    </form>
    <p>¿Ya tenés cuenta? <a href="login.php">Iniciá sesión acá</a>.</p>
</body>
</html>