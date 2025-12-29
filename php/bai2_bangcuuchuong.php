<?php
    function displayMultiplicationTable($number) {
        echo "<table border='1' cellpadding='5' style='border-collapse: collapse; text-align: center;'>";
        echo "<tr><th colspan='2'>Multiplication Table of $number</th></tr>";
        
        for ($i = 1; $i <= 10; $i++) {
            echo "<tr>";
            echo "<td>$number x $i</td>";
            echo "<td>" . ($number * $i) . "</td>";
            echo "</tr>";
        }
        
        echo "</table>";
    }

    displayMultiplicationTable(10);
?>
