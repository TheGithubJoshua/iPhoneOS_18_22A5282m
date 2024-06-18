@class NSManagedObjectID;

@interface ICNoteFolderSectionIdentifier : ICNoteSectionIdentifier

@property (readonly, nonatomic) NSManagedObjectID *noteContainerObjectID;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithNoteContainerObjectID:(id)a0;

@end
