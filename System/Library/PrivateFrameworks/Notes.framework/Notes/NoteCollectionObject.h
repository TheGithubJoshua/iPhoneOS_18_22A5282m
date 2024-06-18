@class NSString;

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAllNotesContainer;

- (id)collectionInfo;
- (BOOL)isTitleValid:(id)a0 error:(id *)a1;
- (id)cacheKey;
- (id)basicAccountIdentifier;
- (id)titleForTableViewCell;
- (id)predicateForNotes;
- (id)predicateForSearchableAttachments;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (id)predicateForSearchableNotes;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)searchDomainIdentifier;

@end
