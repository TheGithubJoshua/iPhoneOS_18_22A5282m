@class NSURLRequest;

@interface _GKURLRequestDictionaryKey : NSObject <NSCopying>

@property (retain, nonatomic) NSURLRequest *request;

+ (id)keyWithRequest:(id)a0;

- (id)initWithRequest:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
