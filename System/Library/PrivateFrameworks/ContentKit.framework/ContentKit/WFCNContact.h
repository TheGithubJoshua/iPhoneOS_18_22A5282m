@class NSString, CNContact;

@interface WFCNContact : WFContact {
    int _propertyID;
    long long _multivalueIndex;
}

@property (readonly, nonatomic) BOOL fromVCard;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;

+ (BOOL)supportsSecureCoding;
+ (void)contactStoreDidChange:(id)a0;
+ (id)changeObservers;
+ (id)contactWithCNContact:(id)a0;
+ (id)contactWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)requiredKeysToFetch;
+ (id)addContactsChangeObserver:(id /* block */)a0;
+ (id)contactWithVCardData:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)contactsWithVCardData:(id)a0;
+ (void)removeContactsChangeObserver:(id)a0;
+ (void)updateContactStoreObservation;

- (id)emailAddresses;
- (id)initWithCoder:(id)a0;
- (id)imageData;
- (id)formattedName;
- (id)phoneNumbers;
- (id)birthday;
- (id)nameSuffix;
- (id)nickname;
- (id)lastName;
- (id)URLs;
- (unsigned long long)hash;
- (id)firstName;
- (id)namePrefix;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)organization;
- (BOOL)isEqual:(id)a0;
- (id)middleName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)socialProfiles;
- (BOOL)hasImageData;
- (id)dates;
- (id)instantMessageAddresses;
- (id)thumbnailImageData;
- (long long)multivalueIndex;
- (id)streetAddresses;
- (id)contactIdentifierForINPerson;
- (id)contactWithPropertyID:(int)a0 multivalueIndex:(long long)a1;
- (BOOL)hasValueForPropertyID:(int)a0;
- (id)initWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2 fromVCard:(BOOL)a3;
- (BOOL)isPropertyIDRepresented:(int)a0;
- (int)propertyID;
- (void)refetchContact;
- (id)vCardRepresentationWithFullData:(BOOL)a0;
- (id)valueForPropertyID:(int)a0;

@end
