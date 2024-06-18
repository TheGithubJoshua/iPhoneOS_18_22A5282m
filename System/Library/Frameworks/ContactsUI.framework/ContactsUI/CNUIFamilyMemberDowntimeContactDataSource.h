@class CNContactStore, NSArray, CNContact, NSString, NSMutableArray;

@interface CNUIFamilyMemberDowntimeContactDataSource : NSObject

@property (retain, nonatomic) CNContactStore *store;
@property (nonatomic) BOOL meContactNeedsUpdate;
@property (retain, nonatomic) CNContact *meContact;
@property (retain, nonatomic) NSArray *familyMembers;
@property (retain, nonatomic) NSArray *filteredSections;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSMutableArray *selectedContactItems;
@property (readonly, nonatomic) NSArray *requiredKeys;
@property (copy, nonatomic) NSString *filterString;
@property (nonatomic) BOOL isShowingFamilyMemberContacts;

+ (BOOL)isErrorPossiblyRelatedToExtraStores:(id)a0;

- (id)selectedContacts;
- (long long)sortOrder;
- (id)completeContactFromContact:(id)a0 fromMainStoreOnly:(BOOL)a1 keysToFetch:(id)a2;
- (id)preferredForNameMeContactWithKeysToFetch:(id)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)preferredForNameMeContactIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)numberOfRowsInSection:(long long)a0;
- (void)_loadAllContactsIfNeeded;
- (id)contactItemForIndexPath:(id)a0;
- (void)filterSectionsForString:(id)a0;
- (id)initWithStore:(id)a0 familyMembers:(id)a1 requiredKeys:(id)a2;
- (id)labelForFamilyMember:(id)a0;
- (void)postProcessForFamilyMembersWithContacts:(id)a0;
- (void)setContactItemSelected:(BOOL)a0 forIndexPath:(id)a1;
- (id)titleForSection:(long long)a0;

@end
