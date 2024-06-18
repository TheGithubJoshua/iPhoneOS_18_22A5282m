@class NSData, MKHTTPHeaders;

@interface MKHTTPResponse : NSObject

@property (retain, nonatomic) MKHTTPHeaders *headers;
@property (retain, nonatomic) NSData *body;

- (id)init;
- (void).cxx_destruct;
- (id)responseData;

@end
