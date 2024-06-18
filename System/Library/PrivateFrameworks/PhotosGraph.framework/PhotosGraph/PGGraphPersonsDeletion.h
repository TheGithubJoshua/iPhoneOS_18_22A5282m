@class NSSet;

@interface PGGraphPersonsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *personLocalIdentifiers;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (id)initWithPersonLocalIdentifiers:(id)a0;

@end
