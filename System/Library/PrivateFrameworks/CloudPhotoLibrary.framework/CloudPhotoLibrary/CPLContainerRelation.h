@class NSString;

@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *containerIdentifier;
@property (nonatomic) long long position;
@property (nonatomic, getter=isKeyAsset) BOOL keyAsset;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)proposedIdentifierForItemIdentifier:(id)a0;
- (id)proposedScopedIdentifierForItemScopedIdentifier:(id)a0;

@end
