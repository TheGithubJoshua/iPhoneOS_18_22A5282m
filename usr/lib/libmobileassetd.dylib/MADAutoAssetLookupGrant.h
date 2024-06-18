@class NSString, NSMutableArray;

@interface MADAutoAssetLookupGrant : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *holderJobUUID;
@property (retain, nonatomic) NSMutableArray *awaitingExclusiveGrant;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initForAssetType:(id)a0;

@end
