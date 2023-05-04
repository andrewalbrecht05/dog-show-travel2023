const https = require('https');
const console = require('console');
const events = [];
const alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

function scrab_countries()
{
    for( let i = 0; i < alphabet.length; i++ )
    {
        for( let j = 0; j < alphabet.length; j++ )
        {
            const req = https.request(`https://www.fci.be/en/schedules/concours.aspx?iso=${i}${j}`, res => {

                /*req.addEventListener('readystatechange',function(){

                    const url = req;
                    if(this.responseURL != url){
                        console.debug('redirected');
                    }

                });*/
                let data = [];

                res.on('data', _ => data.push(_))
                res.on('end', () => data.join());
                console.debug(alphabet[i],alphabet[j]);
            } )
            req.end();
            
        }
    }
}

scrab_countries();

/*const req = https.request('https://www.fci.be/en/schedules/concours.aspx?iso=AL', res => {
    const data = [];

    res.on('data', _ => data.push(_))
    res.on('end', () => console.log(data.join()))
});*/


// ukraine khust 12/24/2022