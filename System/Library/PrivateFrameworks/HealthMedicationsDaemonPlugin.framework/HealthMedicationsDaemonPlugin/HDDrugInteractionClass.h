@class NSArray;

@interface HDDrugInteractionClass : HKDrugInteractionClass

@property (readonly, copy, nonatomic) NSArray *relationships;

- (id)initWithCoder:(id)a0;
- (id)init;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 relationships:(id)a1 ancestorIdentifier:(id)a2 ontologyIdentifier:(id)a3 validRegionCodes:(id)a4;

@end
