@class NSString, NSError;

@interface ICMusicKitURLResponse : ICURLResponse

@property (readonly, copy, nonatomic) NSString *serverCorrelationKey;
@property (readonly, copy, nonatomic) NSString *serverEnvironment;
@property (readonly, nonatomic) NSError *serverError;

- (void)_initializeMusicKitURLResponse;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURLResponse:(id)a0 urlRequest:(id)a1 bodyDataURL:(id)a2 performanceMetrics:(id)a3;
- (id)_parseServerErrorDictionary:(id)a0;
- (id)initWithURLResponse:(id)a0 urlRequest:(id)a1 bodyData:(id)a2 performanceMetrics:(id)a3;
- (id)_parseServerError;

@end
