@class NSString;

@interface ASDCellularIdentity : NSObject

@property (getter=isRoaming) BOOL roaming;
@property (readonly) NSString *defaultsKey;
@property (readonly) NSString *simIdentity;

+ (id)nullIdentity;
+ (id)identityForSubscription:(id)a0 usingClient:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)description;

@end
