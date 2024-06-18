@class NSArray, NSDictionary;

@interface INRootCodableDescription : INCodableDescription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic, setter=_setReferencedCodableDescriptions:) NSArray *referencedCodableDescriptions;
@property (readonly, nonatomic) NSDictionary *_referencedCodableDescriptionsByClassName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)a0;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)a0;

@end
