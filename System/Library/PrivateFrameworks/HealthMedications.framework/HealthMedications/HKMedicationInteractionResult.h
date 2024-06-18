@class NSSet, HKConceptIdentifier;

@interface HKMedicationInteractionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKConceptIdentifier *firstIdentifier;
@property (readonly, copy, nonatomic) HKConceptIdentifier *secondIdentifier;
@property (readonly, nonatomic) unsigned long long interactionType;
@property (readonly, copy, nonatomic) NSSet *interactions;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)conceptIdentifiers;
- (id)initWithFirstConceptIdentifier:(id)a0 secondConceptIdentifier:(id)a1 interactionType:(unsigned long long)a2 interactions:(id)a3;

@end
