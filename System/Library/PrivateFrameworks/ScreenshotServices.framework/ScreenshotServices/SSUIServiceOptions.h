@class SSUIServiceOptionsAssetMetadata, NSString;

@interface SSUIServiceOptions : NSObject <BSXPCSecureCoding, NSCopying>

@property (nonatomic) unsigned long long flashStyle;
@property (nonatomic) unsigned long long saveLocation;
@property (copy, nonatomic) SSUIServiceOptionsAssetMetadata *assetMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
