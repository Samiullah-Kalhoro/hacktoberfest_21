<?php
include("Php and Database Connection.php");
?>

<form action="" method="POST">
<input type="text" required="" style="width:30%;height:45px;margin-left:20px;" placeholder="Enter URL" name="1">
<button name="2">Enter</button></center>

<?php
if(isset($_POST['2']))
{
$Website_to_crawl=$_POST['1'];
}
?>

<?php

$main_url='NULL';

if($main_url=='NULL')
{

    $main_url=$Website_to_crawl;
 $str = file_get_contents($main_url);
 
 // Gets Webpage Title
 if(strlen($str)>0)
 {
  $str = trim(preg_replace('/\s+/', ' ', $str)); // supports line breaks inside <title>
  preg_match("/\<title\>(.*)\<\/title\>/i",$str,$title); // ignore case
  $title=$title[1];
 }
	
 // Gets Webpage Description
 $b =$main_url;
 @$url = parse_url( $b );
 @$tags = get_meta_tags($url['scheme'].'://'.$url['host'] );
 $description=$tags['description'];
	
 // Gets Webpage Internal Links
 $doc = new DOMDocument; 
 @$doc->loadHTML($str); 
 
 $items = $doc->getElementsByTagName('a'); 
 foreach($items as $value) 
 { 
  $attrs = $value->attributes; 
  $sec_url[]=$attrs->getNamedItem('href')->nodeValue;
 }
 $all_links=implode(",",$sec_url);
 
 // Store Data In Database
 
 $sql2="INSERT INTO webpage_details(link,title,description,internal_link) VALUES('$main_url','$title','$description','$all_links')";
 if($conn->query($sql2)===TRUE)
 {
       
echo "<table style='border:1px solid black;'>
<thead>
<tr>
    <th style='border:1px solid black;'> Link </th>
    <th style='border:1px solid black;'> Title </th>
    <th style='border:1px solid black;'> Description </th>
    <th style='border:1px solid black;'> Internal Links </th>
    </tr>
    </thead>
    <tbody>";

    $sql="SELECT link,title,description,internal_link FROM webpage_details";
    $result=$conn->query($sql);
        if($result->num_rows>0)
             {
                 while($row=$result->fetch_assoc())
                        {
                            $A=$row['link'];
                            $B=$row['title'];
                            $C=$row['description'];
                            $D=$row['internal_link'];
                            
    
                            echo "
                            <tr>
                            <td style='border:1px solid black;'>$A</td>
                            <td style='border:1px solid black;'>$B</td>
                            <td style='border:1px solid black;'>$C</td>
                            <td style='border:1px solid black;'>$D</td>
                            </tr>"; 
                        }
                        
                                  }
                        
                                      else
                             {
                                 echo "ERROR";
                             }
                      
                             echo "</tbody>
                             </table>";

 }
     else
     {
         echo "Error";
     }

    }
?>