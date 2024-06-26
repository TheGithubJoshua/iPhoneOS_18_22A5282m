@class NSArray, GDPersonNameComponents, GDEntityIdentifier, NSDateComponents;

@interface GDPerson : NSObject <GDTripleIteratorEntityRenderer, GDEntity>

@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) GDPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSArray *postalAddressLinks;
@property (readonly, nonatomic) NSArray *relatedPeople;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSDateComponents *dateOfBirth;
@property (readonly, nonatomic) NSDateComponents *nonGregorianDateOfBirth;
@property (readonly, nonatomic) NSDateComponents *anniversary;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) NSArray *conversationIdentifiers;
@property (readonly, nonatomic) NSArray *customIdentifiers;
@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) NSArray *visualIdentifiers;
@property (readonly, nonatomic) NSArray *visualIdentifierObjects;
@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier;

+ (unsigned long long)triplesColumnsRequiredForRendering;

- (void).cxx_destruct;
- (id)description;
- (id)dateComponentsFromJSONString:(id)a0;
- (id)initWithTriplesIterator:(id)a0;

@end
