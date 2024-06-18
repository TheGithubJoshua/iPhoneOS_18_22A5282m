@class NSString, MAAutoAssetSelector, NSUUID;

@interface MAAutoAssetInfoInstance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *autoAssetClientName;
@property (readonly, nonatomic) NSString *clientProcessName;
@property (readonly, nonatomic) long long clientProcessID;
@property (readonly, nonatomic) MAAutoAssetSelector *clientAssetSelector;
@property (readonly, nonatomic) NSUUID *frameworkInstanceUUID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initForClientName:(id)a0 withProcessName:(id)a1 withProcessID:(long long)a2 usingAssetSelector:(id)a3 associatingFrameworkUUID:(id)a4;

@end
