@class ARReferenceObject;

@interface ARObjectAnchor : ARAnchor

@property (readonly, nonatomic) ARReferenceObject *referenceObject;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAnchor:(id)a0;
- (id)initWithReferenceObject:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
