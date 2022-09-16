#include "http.hpp"


int				isHttpStatus(int status)
{
	return (status == STATUS_OK
	|| status == STATUS_CREATED
	|| status == STATUS_NO_CONTENT
	|| status == STATUS_BAD_REQUEST
	|| status == STATUS_NOT_FOUND
	|| status == STATUS_NOT_ALLOWED
	|| status == STATUS_PARTIAL_CONTENT
	|| status == STATUS_MOVED_PERMANENTLY
	|| status == STATUS_REQUEST_ENTITY_TOO_LARGE
	|| status == STATUS_INTERNAL_SERVER_ERROR);
}

std::string		getHttpStatusMessage(int status)
{
	if (status == STATUS_OK) return ("OK");
	if (status == STATUS_CREATED) return ("Created");
	if (status == STATUS_NO_CONTENT) return ("No Content");
	if (status == STATUS_BAD_REQUEST) return ("Bad Request");
	if (status == STATUS_NOT_FOUND) return ("Not Found");
	if (status == STATUS_NOT_ALLOWED) return ("Not Allowed");
	if (status == STATUS_PARTIAL_CONTENT) return ("Partial Content");
	if (status == STATUS_MOVED_PERMANENTLY) return ("Moved Permanently");
	if (status == STATUS_REQUEST_ENTITY_TOO_LARGE) return ("Request Entity Too Large");
	if (status == STATUS_INTERNAL_SERVER_ERROR) return ("Internal Server Error");

	return ("");
}

int		isHttpMethod(std::string value, int & method)
{
	if (!value.compare("GET")) {
		method = METHOD_GET;
		return (1);
	}

	if (!value.compare("HEAD")) {
		method = METHOD_HEAD;
		return (1);
	}

	if (!value.compare("POST")) {
		method = METHOD_POST;
		return (1);
	}

	if (!value.compare("PUT")) {
		method = METHOD_PUT;
		return (1);
	}

	if (!value.compare("DELETE")) {
		method = METHOD_DELETE;
		return (1);
	}

	return (0);
}