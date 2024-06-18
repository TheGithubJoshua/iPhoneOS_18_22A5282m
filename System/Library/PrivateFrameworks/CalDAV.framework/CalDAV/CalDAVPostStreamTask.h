@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask

@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *filename;

- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)responseData;
- (id)requestBodyStream;
- (id)lossyAsciiFilename;
- (id)utf8PercentEscapedFilename;

@end
