@class NSString;

@interface ABSQLPredicate : NSObject

@property (copy, nonatomic) id /* block */ bindBlock;
@property (copy, nonatomic) id /* block */ matchInfoProvider;
@property (retain, nonatomic) id storage;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) BOOL isNullPredicate;

+ (id)predicateForContactsInContainerWithIdentifier:(id)a0;
+ (id)predicateForContactsWithExternalUUIDs:(id)a0;
+ (id)predicateForContactsMatchingName:(id)a0 addressBook:(void *)a1;
+ (id)predicateForSingleContactMatchingMultivalueProperty:(int)a0 value:(id)a1;
+ (id)predicateForContactsMatchingText:(id)a0 tokenizer:(struct __CFStringTokenizer { } *)a1 collator:(struct UCollator { } *)a2 matchNameFieldsOnly:(BOOL)a3;
+ (id)predicateForContactsMatchingPhoneNumbers:(id)a0 emailAddresses:(id)a1 containerIdentifiers:(id)a2 map:(id)a3;
+ (id)predicateForContactsMatchingPreferredChannel:(id)a0 limitOne:(BOOL)a1;
+ (id)predicateForContactsMatchingPhoneNumber:(id)a0 country:(id)a1 homeCountryCode:(id)a2 prefixHint:(id)a3 groupIdentifiers:(id)a4 limitToOneResult:(BOOL)a5;
+ (id)predicateForContactsMatchingPhoneNumbers:(id)a0 containerIdentifiers:(id)a1 map:(id)a2;
+ (id)bindPlaceholderStringOfCount:(unsigned long long)a0;
+ (id)predicateForContactsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 allowedStoreIdentifiers:(id)a1 sortOrder:(int)a2;
+ (id)predicateForContactsWithLegacyIdentifier:(int)a0;
+ (id)predicateForContactsWithUUIDs:(id)a0 ignoreUnifiedIdentifiers:(BOOL)a1;
+ (id)predicateForMeContact;
+ (id)predicateForContactsMatchingMultivalueProperty:(int)a0 values:(id)a1 groupIdentifiers:(id)a2 containerIdentifiers:(id)a3 limitToOneResult:(BOOL)a4 map:(id)a5;
+ (id)predicateUnioningPredicate:(id)a0 withPredicate:(id)a1;
+ (id)predicateForContactsMatchingMultivalueProperty:(int)a0 value:(id)a1;
+ (id)predicateForAllContacts;
+ (id)predicateForContactsMatchingOrganizationName:(id)a0;
+ (id)predicateForContactsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 sortOrder:(int)a1;
+ (id)_sqlValuesTableOfLength:(unsigned long long)a0 columnCount:(unsigned long long)a1;
+ (id)_sqlListOfLength:(unsigned long long)a0;
+ (id)predicateForNoContacts;
+ (id)predicateForContactsInGroupWithIdentifier:(id)a0;

- (void)dealloc;

@end
