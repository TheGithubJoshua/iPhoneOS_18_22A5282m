@class NSSet;

@interface PGGraphPersonsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *personLocalIdentifiers;
@property (readonly, nonatomic) NSSet *persons;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (id)initWithPersonLocalIdentifiers:(id)a0;
- (id)initWithPersons:(id)a0;

@end
