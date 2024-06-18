@class NSString, NSSet;

@interface PGGraphPersonChange : PGGraphChange

@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) NSSet *propertyNames;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (id)initWithPersonLocalIdentifier:(id)a0 propertyNames:(id)a1;
- (void)mergeChange:(id)a0;

@end
