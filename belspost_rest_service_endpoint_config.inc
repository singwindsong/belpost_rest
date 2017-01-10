$endpoint = new stdClass();
$endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
$endpoint->api_version = 3;
$endpoint->name = 'belpost_rest';
$endpoint->server = 'rest_server';
$endpoint->path = 'api';
$endpoint->authentication = array();
$endpoint->server_settings = array(
  'formatters' => array(
    'json' => TRUE,
    'bencode' => FALSE,
    'jsonp' => FALSE,
    'php' => FALSE,
    'xml' => FALSE,
  ),
  'parsers' => array(
    'application/json' => TRUE,
    'application/vnd.php.serialized' => TRUE,
    'application/x-www-form-urlencoded' => TRUE,
    'application/xml' => TRUE,
    'multipart/form-data' => TRUE,
    'text/xml' => TRUE,
  ),
);
$endpoint->resources = array(
  'belpost' => array(
    'operations' => array(
      'retrieve' => array(
        'enabled' => '1',
      ),
      'index' => array(
        'enabled' => '1',
      ),
    ),
  ),
);
$endpoint->debug = 1;
