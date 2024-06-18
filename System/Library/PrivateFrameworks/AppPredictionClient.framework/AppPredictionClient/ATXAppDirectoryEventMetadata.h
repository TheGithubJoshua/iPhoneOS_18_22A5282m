@class NSNumber;

@interface ATXAppDirectoryEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *bundleIdInTopAppsVisible;
@property (retain, nonatomic) NSNumber *userLaunchedAppBeforeLeaving;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)jsonDict;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleIdInTopAppsVisible:(id)a0 userLaunchedAppBeforeLeaving:(id)a1;
- (BOOL)isEqualToATXAppDirectoryEventMetadata:(id)a0;

@end
