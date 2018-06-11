This module adds new parser to feeds module, by using Youtube API v3 to parse 
and import YouTube video feeds content using Programmatic API access.


Supported data from imported feeds:
Currently the module supports the following data from imported videos:

- Feed title
- Vdeo ID
- Video title
- Author
- Published on (Datetime)
- Description
- Thumbnail
- Category (Can be imported seamlessly with Taxonomy module)
- Tags (Can be imported seamlessly with Taxonomy module)
- Watch page URL (Can be imported seamlessly with Embedded Media Field module)
- Duration (Formatted hh:mm:ss)
- Favorite count
- View count
- Rating
- Published on (Timestamp)

Due to privacy changes some of the information will not be available 
(e.g "Updated on", "Author") and some has been removed completely like "Rating".


This module requires:

- account on https://console.developers.google.com with a valid project and you will need
  developer key, client ID, and client secret.
- Libraries module.
- Google API PHP client library https://github.com/google/google-api-php-client (tested with version 1.1.3)


Installation:

- Install this module.
- Install libraries.
- Download Google API PHP client library (https://github.com/google/google-api-php-client).
- Unzip Google API PHP client library and copy it to the libraries folder so the path looks like sites/all/libraries/google-api-php-client/src/Google/autoload.php
- Go to https://console.developers.google.com and create new client and new API key.
- In your site go to admin/structure/feeds/google-api-oauth fill in all fields with your Google API access credentials.
- Go to admin/structure/feeds/google-api-authentication and authenticate your website to access Google Youtube API.
- Use the full URL for your public API call to import videos e.g:

https://www.googleapis.com/youtube/v3/search?part=id,snippet&type=video&channelId=CHANNEL_ID&key=YOUR_API_KEY
