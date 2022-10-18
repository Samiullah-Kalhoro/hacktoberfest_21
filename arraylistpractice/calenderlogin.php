<?php
$day = date('d',strtotime(  $_GET['date']));
$mon = date('m',strtotime(  $_GET['date']));
$year = date('Y',strtotime(  $_GET['date']));
$date = date('d-m-Y',strtotime($_GET['date']));

echo"<style>";
    include'C:\xampp\htdocs\phpcore\Array\calender.css';
echo"</style>";
$month = [1=>31,2=>28,3=>31,4=>30,5=>31,6=>30,7=>31,8=>31,9=>30,10=>31,11=>30,12=>31];
$dd = [0=>"sunday",1=>"monday",2=>"tuesday",3=>"wednesday",4=>"thursday",5=>"friday",6=>"saturday"];


$dayno=0;
// the calender logic 
function dayy($day ,$mon ,$year){
    global $dayno;
    $leapyears = 0;
    $sum =0;
    $leftyears = $year%400;
    $leepey= $leftyears;
    for($i=4; $i<$leftyears; $i+=4){
        $leapyears++;
    }
    if(!($day==1)){ 
    echo"<h1>Number of leapyears are $leapyears</h1><br>";
    }
    $oddays = 2*$leapyears;
    $leftyears = $leftyears - $leapyears -1;
    
     
    $oddays += $leftyears;
    

    $dd = [0=>"sunday",1=>"monday",2=>"tuesday",3=>"wednesday",4=>"thursday",5=>"friday",6=>"saturday"];
    $month = [1=>31,2=>28,3=>31,4=>30,5=>31,6=>30,7=>31,8=>31,9=>30,10=>31,11=>30,12=>31];

    if($leepey%4==0){
        $month[2]=29;
    }
    for($i=1;$i<$mon;$i++){
        $sum=$sum+$month[$i];
    }
    $sum+=$day+$oddays;

    $result = $sum%7;

    $dayno=$result+1;
    return $dd[$result];
}


echo"<body id='ff'><div id='day'> <div id='child'>";
    echo "<h2> THE DAY AT THE DATE $date is </h2><h1>".dayy($day,$mon,$year)."</h1>";
echo"</div> </div></body>";

// $start=dayy($day,$mon,$year);
$neww=dayy(1,$mon,$year);                         //this return the day name of the date 1 ,month and year take from form input  
$firstday = array_search($neww,$dd);              //it return the day no from the array $dd
$firstday+=1;
echo $firstday."<br>";
// echo"$dayno";  dayno of the day of week
$ff= date('F',strtotime(  $_GET['date']));        //this return full name of the month

echo"<div> <table>";
echo"<tr id='hh'><td id='headd'>$ff,$year</td>";  //month and year mention at the top of calender

echo"<tr><th>su</th><th>mon</th><th>tu</th><th>wed</th><th>th</th><th>fri</th><th>sat</th></tr>";

$a=1;                               //varible to enter day no is the calender
$b=$month[(int)ltrim($mon,0)];
$mon-=1;                            //previous month
$d=$month[$mon];                    // no of days of previous month

// echo $b;  no of days in a month
$c=1;
$n=2;
   
// the first row
    echo"<tr>";
        for($k=1;$k<($firstday);$k++){
            echo"<td style='opacity:0.3'>".($d-$firstday+$n)." </td>";
            $n=$n+1;
        }
        for($k=($firstday);$k<8;$k++){ 
            echo"<td>".$a++."</td>" ;
        }
    echo"</tr>";

    // after first row
for($i=2;$i<7;$i++)
{
echo"<tr>";
        for($j=1;$j<8;$j++){
        if($a>$b)
        {
            $a=$c;
        }
            echo"<td id='font'>".($a++)."</td>";
        }
echo"</tr>";
    
}
echo"</table> </div>";
?>