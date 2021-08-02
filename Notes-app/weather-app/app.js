const request=require("postman-request")

const url="http://api.weatherstack.com/current?access_key=6f53010b3b8b9cb2bb3405738156ee54&query=37.827,-122.4233"

request({ url: url }, (error,response)=>{ 
    const data=JSON.parse(response.body)
    console.log(data.current)
})