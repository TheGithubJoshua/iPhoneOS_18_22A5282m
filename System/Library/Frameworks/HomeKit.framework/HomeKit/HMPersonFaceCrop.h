@class NSUUID;

@interface HMPersonFaceCrop : HMFaceCrop <NSMutableCopying>

@property (copy) NSUUID *unassociatedFaceCropUUID;
@property long long source;
@property (readonly, copy) NSUUID *personUUID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)initWithUUID:(id)a0 dataRepresentation:(id)a1 dateCreated:(id)a2 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 personUUID:(id)a4;

@end