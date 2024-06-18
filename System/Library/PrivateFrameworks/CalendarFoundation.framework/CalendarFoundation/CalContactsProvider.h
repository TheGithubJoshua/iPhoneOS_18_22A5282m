@class CNContactStore, CNContact, CNReputationStore, NSString, NSMutableSet, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface CalContactsProvider : NSObject <CalContactsProviderProtocol> {
    CNContact *_meContact;
}

@property (retain) CNContactStore *store;
@property (retain) CNReputationStore *reputationStore;
@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain) NSObject<OS_dispatch_queue> *contactStoreWorkQueue;
@property (retain) CNContact *meContact;
@property (retain) NSString *testMeContactIdentifer;
@property (retain) NSMutableSet *delegates;
@property (retain) NSArray *unitTestEmails;
@property (retain) NSArray *loadedMyEmailAddresses;

+ (id)defaultProvider;
+ (id)birthdayStringForContactName:(id)a0 eventDate:(id)a1 birthDate:(id)a2 lunarCalendar:(id)a3;
+ (BOOL)birthdayIsYearless:(id)a0;
+ (BOOL)isCalendarIslamic:(id)a0;
+ (id)reputationForHandle:(id)a0 inStore:(id)a1;
+ (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0 inReputationStore:(id)a1;
+ (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0 inReputationStore:(id)a1;

- (id)unifiedContactWithName:(id)a0;
- (id)init;
- (BOOL)matchesOneOfMyPhoneNumbers:(id)a0;
- (void)deregisterForContactChangeNotifications:(id)a0;
- (id)myFullName;
- (id)cachedEmailAddresses;
- (id)_meWithKeys:(id)a0;
- (id)unifiedContactWithEmailAddress:(id)a0;
- (id)contactStore;
- (id)unifiedContactMatchingName:(id)a0 email:(id)a1 url:(id)a2 keysToFetch:(id)a3;
- (void)_syncContacts;
- (id)myAvatarEncodedString;
- (id)unifiedContactWithIdentifier:(id)a0;
- (id)myWorkAddress;
- (id)nullableContactStore;
- (void)setMeCardEmailsForUnitTesting:(id)a0;
- (BOOL)contactAccessResolved;
- (id)unifiedContactMatchingString:(id)a0 keysToFetch:(id)a1 matchType:(long long *)a2;
- (id)initWithStore:(id)a0;
- (id)_fetchedUnifiedMeContact;
- (BOOL)urlMatchesOneOfMyEmails:(id)a0;
- (void)meCardChanged:(id)a0;
- (void)donateEncodedLikenessString:(id)a0 forEmailAddress:(id)a1;
- (void)registerForContactChangeNotifications:(id)a0;
- (id)cachedEmailAddressArray;
- (id)fullNameForFirstContactMatchingEmailAddress:(id)a0;
- (void).cxx_destruct;
- (void)setTestMeContactIdentifier:(id)a0;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1;
- (id)myEmailAddress;
- (id)myShortDisplayName;
- (id)unifiedContactWithPhoneNumber:(id)a0;
- (id)fullNameForFirstContactMatchingPhoneNumber:(id)a0;
- (BOOL)contactIdentifierIsMe:(id)a0;
- (id)cachedEmailAddress;
- (id)myNameWithStyle:(long long)a0;
- (id)unifiedContactsForHandleStrings:(id)a0 keysToFetch:(id)a1;
- (void)_setLastHistoryToken:(id)a0;
- (id)unifiedContactWithIdentifier:(id)a0 keysToFetch:(id)a1;
- (id)myHomeAddress;
- (id)contactsFromContactIdentifiers:(id)a0 withKeys:(id)a1;
- (id)myPhoneNumbers;
- (id)myAddressForLabel:(id)a0;
- (id)_lastHistoryToken;
- (void)contactsChanged:(id)a0;
- (BOOL)matchesOneOfMyEmails:(id)a0;
- (id)unifiedMeContact;
- (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0;
- (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0;
- (id)myEmailAddresses;
- (id)_fullNameForFirstContactMatchingPredicate:(id)a0;

@end
