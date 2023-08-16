function validate() { 
    var User = document.myForm.userId.value;
    var password = document.myForm.pass.value;
    var cpass = document.myForm.confpass.value;
    var fname = document.myForm.fname.value;
    var lname = document.myForm.lname.value;
    var ctry = document.myForm.a.value;
    var zip = document.myForm.zip.value;
    var mobile = document.myForm.phone.value;
    var email = document.myForm.email.value;
    var letters = /^[A-Za-z]+$/;
    var email_val = /^[A-Za-z_1-999]{3,}@[A-Za-z]{3,6}.[A-Za-z]{3,}$/;
    if (User == null || User == "") {
        alert("User ID can't be blank");
        
        return false;
    }
    else if (User.length > 12 || User.length < 5) {
        alert("User Id should have less than 12 and more than 5 characters.");
        return false;
    }
    else if (password == null || password == "") {
        alert("Password can't be blank");
        return false;
    }
    else if (password.length <= 7 || password.length >= 12) {
        alert("Password required and must be of length 7 to 12.");
        return false;
    }
    else if (password != cpass) {
        alert("Passwords do not match");
        return false;
    }
    else if (fname == null || fname == "") {
        alert("First name cannot be Empty ");
        return false;
    }
    else if (lname == null || lname == "") {
        alert("Last name cannot be Empty ");
        return false;
    }
    else if (ctry == 'dash') {
        alert('Select Country');
        console.log(ctry);
        return false;
    }
    else if (mobile == null || mobile == 0 || mobile == '') {
        alert('Phone Number Cannot be empty');
        return false;
    }
    else if (mobile.length != 10) {
        alert('Phone Number should contain 10 digits');
        return false;
    }
    else if (zip == null || zip == 0 || zip == '') {
        alert('Zip Code Cannot be empty');
        return false;
    }
    else if (email == null || email == '') {
        alert('Email Cannot be empty');
        return false;
    }
    else if (!(email_val.test(email))) {
        alert("Enter a correct Email Address");
        return false;
    }
    else if (!letters.test(fname)) {
        alert('First Name is incorrect must contain alphabets only');
        return false;
    }
    else if (!letters.test(lname)) {
        alert('Last Name is incorrect must contain alphabets only');
        return false;
    }
    else if (mobile == null || mobile == 0 || mobile == '') {
        alert('Phone Number Cannot be empty');
        return false;
    }
    else if (mobile.length != 10) {
        alert('Phone Number should contain 10 digits');
        return false;
    }
    else {
        alert('Form Submitted Succesfully');
        return true;
    }
}