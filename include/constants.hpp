#ifndef CONSTANTS_HPP
# define CONSTANTS_HPP

# define SERVER_NAME					"webserv/1.0"
# define DEFAULT_INDEX 					"index.html"

# define BUFFER_SIZE 					1024

# define CRLF 							"\r\n"
# define D_CRLF						"\r\n\r\n"


/* EVENTS */
# define EVT_OPEN 						0
# define EVT_CLOSE 						1

# define EVT_REQUEST_LINE 				1
# define EVT_REQUEST_HEADERS 				2
# define EVT_REQUEST_BODY				3
# define EVT_REQUEST 					4
# define EVT_PREPARE_RESPONSE 			5
# define EVT_SEND_RESPONSE 				6


/* STATUS */
# define STATUS_OK 						200
# define STATUS_CREATED 					201
# define STATUS_NO_CONTENT				204
# define STATUS_PARTIAL_CONTENT 			206
# define STATUS_MOVED_PERMANENTLY			301
# define STATUS_BAD_REQUEST 				400
# define STATUS_NOT_FOUND 				404
# define STATUS_NOT_ALLOWED 				405
# define STATUS_REQUEST_ENTITY_TOO_LARGE	413
# define STATUS_INTERNAL_SERVER_ERROR		500


/* METHODS */
# define METHOD_GET 					1
# define METHOD_HEAD 					2
# define METHOD_POST 					3
# define METHOD_PUT 					4
# define METHOD_DELETE 					5

/* connection */
# define CLOSE							0
# define KEEP_ALIVE						1

/* transfer encoding */
# define NONE							0
# define LENGTH						1
# define CHUNKED						2

#endif