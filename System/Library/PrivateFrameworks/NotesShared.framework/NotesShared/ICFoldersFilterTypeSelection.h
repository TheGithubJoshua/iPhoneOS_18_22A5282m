@class NSManagedObjectContext, NSArray, NSString;

@interface ICFoldersFilterTypeSelection : ICFilterTypeSelection

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) unsigned long long inclusionType;
@property (retain, nonatomic) NSArray *folderIdentifiers;
@property (readonly, copy, nonatomic) NSString *folderSummaryList;
@property (readonly, nonatomic) BOOL containsSharedFolder;

+ (id)keyPathsForValuesAffectingIsEmpty;

- (unsigned long long)hash;
- (BOOL)isValid;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (id)filterName;
- (void)addFolderIdentifier:(id)a0;
- (id)emptySummary;
- (id)emptySummaryTitle;
- (id)folderTitlesForIdentifiers:(id)a0;
- (id)initWithManagedObjectContext:(id)a0 inclusionType:(unsigned long long)a1 folderIdentifiers:(id)a2;
- (BOOL)isEqualToICFoldersFilterTypeSelection:(id)a0;
- (id)rawFilterValue;
- (void)removeFolderIdentifier:(id)a0;
- (id)shortEmptySummary;

@end
