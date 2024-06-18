@class NSObject;
@protocol OS_xpc_object;

@interface TRIDownloadOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) unsigned long long requiredCapability;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsBatteryUsage;
@property (nonatomic) unsigned long long discretionaryBehavior;

+ (id)inexpensiveOptions;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)serializeToPersistedBehavior;
- (unsigned long long)hash;
- (id)initWithAllowsCellular:(BOOL)a0 discretionaryBehavior:(unsigned long long)a1;
- (id)initFromPersistedBehavior:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
