@class NSString;

@interface VSScriptSecurityOrigin : NSObject

@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) long long port;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
