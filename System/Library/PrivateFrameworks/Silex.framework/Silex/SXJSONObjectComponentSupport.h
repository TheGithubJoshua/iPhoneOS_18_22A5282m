@class NSString;

@interface SXJSONObjectComponentSupport : NSObject

@property (readonly, nonatomic) NSString *specVersion;

+ (id)shared;

- (id /* block */)purgeClassBlock;
- (id /* block */)objectValueClassBlock;
- (void).cxx_destruct;
- (id)initWithSpecVersion:(id)a0;

@end
