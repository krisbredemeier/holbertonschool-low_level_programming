const fs = require('fs');

fs.readFile('./json-data', function (err, data){
  if(err) {
    throw err;
  }
  data = JSON.parse(data);
  for(var i=0; i < data.length; i++)
  console.log(data[i].email, data[i].full_name);
});












/*fs.readFile('./json-data', function (err, data) {
  if (err) {
    throw err;
  }
  content = data;
  console.log(content.toString());
});
*/
