
<?php
$err = $_FILES["myfile"]["error"];
$filename=$_FILES['myfile']['name'];
$filetype=$_FILES['myfile']['type'];
$type =substr(strrchr($filename, '.'), 1);
echo $err;
echo '<br>';
echo $type;
echo '<br>';
echo $filetype;
if (isset($_POST['submit'])) {
    switch ($err){
        case 0:
            if ($filetype =="image/jpeg"){
                $target_path = "upload/";
                $target_path = $target_path . basename($filename);
                // if(!move_uploaded_file($_FILES['myfile']['tmp_name'], $target_path)) {
                //     echo 'fail!';
                //     }
                // else{
                //     echo "success!";
                // }
                if ($type == "php"){
                    echo(md5("Q1RGe3ZwbDBhZF9DdGZfOH0=")); //CTF{vpl0ad_Ctf_6}
                }
                else{
                    echo("please upload a php file");
                }
            }
            else{
                echo("please upload a jpg file");
            }
            break;
        case 4:
            echo("please upload a jpg file");
            break;
        default:
            echo "error";
    }
}

