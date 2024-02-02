<?php
    $host = "localhost";
    $user = "root";
    $password = "";
    $db = "lol";

    $polaczenie = mysqli_connect($host, $user, $password, $db);

    $zapytanie = "SELECT * FROM Main";

    $wynik = mysqli_query($polaczenie, $zapytanie);
    ?>

    <table>
        <td>Main</td>
        <td>Passive</td>
        <td>Q</td>
        <td>W</td>
        <td>E</td>
        <td>R</td>

    <?php
    while ($row = mysqli_fetch_row($wynik)) {
        echo "<tr>";
        echo "<td> $row[0] </td>";
        echo "<td> $row[1] </td>";
        echo "<td> $row[2] </td>";
        echo "<td> $row[3]</td>";
        echo "<td> $row[4]</td>";
        echo "<td> $row[5]</td>";
        echo "</tr>";
        }
    ?>
    </table>