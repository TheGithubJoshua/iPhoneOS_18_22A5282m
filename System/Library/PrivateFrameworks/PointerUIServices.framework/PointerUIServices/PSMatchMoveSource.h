@interface PSMatchMoveSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldBeInvalidatedIfPointerLeavesDisplay;
@property (readonly, nonatomic) unsigned long long sourceLayerRenderID;
@property (readonly, nonatomic) unsigned int sourceContextID;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceContextID:(unsigned int)a0 sourceLayerRenderID:(unsigned long long)a1;

@end
