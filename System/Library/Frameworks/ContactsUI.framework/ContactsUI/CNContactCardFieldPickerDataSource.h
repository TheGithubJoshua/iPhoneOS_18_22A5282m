@class NSArray, NSString;

@interface CNContactCardFieldPickerDataSource : NSObject <UITableViewDataSource>

@property (retain, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSharingMeContactForContacts:(id)a0;
+ (id)shareableCardPropertiesForContacts:(id)a0;
+ (id)shareableNamePropertiesForContact:(id)a0;

- (id)initWithContact:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)totalItemCount;
- (id)_loadSections;
- (id)_loadSectionsForContacts;
- (id)firstContactContainingPhoto;
- (BOOL)hasPhotoForContact:(id)a0;
- (id)initWithContacts:(id)a0;
- (id)itemsForKey:(id)a0 forContact:(id)a1;
- (id)itemsForKey:(id)a0 forContacts:(id)a1;
- (id)keyForIndexPath:(id)a0;

@end
