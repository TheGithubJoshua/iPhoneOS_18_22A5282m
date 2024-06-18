@class NSData, NSString;

@interface CATAddress : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic, getter=isAny) BOOL any;
@property (readonly, nonatomic, getter=isLocalWiFi) BOOL localWiFi;

+ (id)any;
+ (id)localWiFi;

- (id)init;
- (BOOL)isEqualToAddress:(id)a0;
- (id)initWithString:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithData:(id)a0;

@end
