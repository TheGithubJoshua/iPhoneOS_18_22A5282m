@class NSString, BRCDocumentItem, BRCDirectoryItem, BRCAliasItem;
@protocol BRCFSRooted;

@interface BRCSymlinkItem : BRCLocalItem

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property (readonly, nonatomic) NSString *symlinkTarget;

- (void).cxx_destruct;
- (BOOL)isSymLink;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)_initWithLocalItem:(id)a0;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (id)asSymlink;
- (id)descriptionWithContext:(id)a0;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (void)readTargetFromRelativePathAndSyncUp:(id)a0;
- (void)updateSymlinkTarget:(id)a0;

@end
