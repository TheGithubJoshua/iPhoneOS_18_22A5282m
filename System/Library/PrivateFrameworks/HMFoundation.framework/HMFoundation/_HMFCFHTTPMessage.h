@class NSDictionary, NSData;

@interface _HMFCFHTTPMessage : HMFObject

@property (readonly, nonatomic) struct __CFHTTPMessage { } *message;
@property (readonly, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSData *body;

+ (id)dateFormatter;
+ (id)requestWithMethod:(id)a0 url:(id)a1 protocolVersion:(long long)a2;
+ (id)responseWithStatusCode:(long long)a0 statusDescription:(id)a1 protocolVersion:(long long)a2;

- (long long)contentLength;
- (id)init;
- (void)setDate:(id)a0;
- (id)contentType;
- (void)setContentType:(id)a0;
- (id)date;
- (void)dealloc;
- (void)setContentLength:(long long)a0;
- (id)initWithMessageRef:(struct __CFHTTPMessage { } *)a0;
- (void)setValue:(id)a0 forHeaderField:(id)a1;
- (id)valueForHeaderField:(id)a0;

@end
