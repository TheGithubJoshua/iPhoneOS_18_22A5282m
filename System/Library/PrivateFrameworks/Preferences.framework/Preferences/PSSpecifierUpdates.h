@class NSArray, PSSpecifierGroupIndex, PSSpecifierUpdateContext, NSMutableArray;

@interface PSSpecifierUpdates : NSObject <NSCopying> {
    NSMutableArray *_currentSpecifiers;
    NSMutableArray *_updates;
    PSSpecifierGroupIndex *_groupIndex;
    BOOL _wantsDebugCallbacks;
}

@property (readonly, copy, nonatomic) NSArray *originalSpecifiers;
@property (readonly, copy, nonatomic) NSArray *currentSpecifiers;
@property (readonly, copy, nonatomic) NSArray *updates;
@property (copy, nonatomic) PSSpecifierUpdateContext *context;
@property (readonly, copy, nonatomic) PSSpecifierGroupIndex *groupIndex;

+ (Class)_groupIndexClass;
+ (id)updatesWithSpecifiers:(id)a0;
+ (id)updatesByDiffingSpecifiers:(id)a0 withSpecifiers:(id)a1 changedBlock:(id /* block */)a2;
+ (BOOL)_wantsDebugCallbacks;
+ (void)_assertSpecifierIDsAreUnique:(id)a0;

- (id)init;
- (id)specifiersAfterApplyingUpdatesToIndex:(unsigned long long)a0;
- (BOOL)insertSpecifier:(id)a0 afterSpecifier:(id)a1;
- (BOOL)removeSpecifiersInGroupAtGroupIndex:(unsigned long long)a0;
- (id)_groupIndexCreatingIfNecessary;
- (BOOL)appendSpecifiers:(id)a0 toGroupAtGroupIndex:(unsigned long long)a1;
- (unsigned long long)indexOfSpecifier:(id)a0;
- (BOOL)appendSpecifier:(id)a0 toGroupAtGroupIndex:(unsigned long long)a1;
- (BOOL)insertContiguousSpecifiers:(id)a0 afterSpecifier:(id)a1;
- (id)_init;
- (BOOL)removeSpecifiersInGroupWithID:(id)a0;
- (BOOL)removeSpecifiersWithIDs:(id)a0;
- (BOOL)swapSpecifier:(id)a0 withSpecifier:(id)a1;
- (BOOL)reloadSpecifierWithID:(id)a0;
- (BOOL)appendSpecifiers:(id)a0;
- (BOOL)_addAndApplyOperation:(id)a0;
- (BOOL)insertContiguousSpecifiers:(id)a0 atIndex:(unsigned long long)a1;
- (id)specifierForID:(id)a0;
- (BOOL)appendSpecifier:(id)a0 toGroup:(id)a1;
- (id)_initForCopyWithOriginalSpecifiers:(id)a0 currentSpecifiers:(id)a1 updates:(id)a2;
- (void)_didApplyOperation:(id)a0;
- (BOOL)moveSpecifier:(id)a0 toIndex:(unsigned long long)a1;
- (BOOL)reloadSpecifiersInGroupAtGroupIndex:(unsigned long long)a0;
- (BOOL)reloadSpecifiersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)removeSpecifiers:(id)a0;
- (BOOL)insertSpecifier:(id)a0 atIndexPath:(id)a1;
- (id)stepByStepDescription;
- (void)_operationFailed:(id)a0 reason:(id)a1;
- (void).cxx_destruct;
- (BOOL)moveSpecifierAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (BOOL)appendSpecifiers:(id)a0 toGroupWithID:(id)a1;
- (BOOL)reloadSpecifier:(id)a0;
- (id)description;
- (BOOL)reloadSpecifiersWithIDs:(id)a0;
- (BOOL)reloadSpecifiersInGroupWithID:(id)a0;
- (unsigned long long)indexOfSpecifierWithID:(id)a0;
- (id)initWithSpecifiers:(id)a0 applyUpdates:(id)a1;
- (BOOL)appendSpecifiers:(id)a0 toGroup:(id)a1;
- (BOOL)insertSpecifier:(id)a0 afterSpecifierWithID:(id)a1;
- (BOOL)reloadSpecifiersInGroup:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)moveSpecifierAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (BOOL)_enumerateArrayWithConjuctionalResult:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)reloadSpecifierAtIndex:(unsigned long long)a0;
- (BOOL)removeSpecifierWithID:(id)a0;
- (BOOL)appendSpecifier:(id)a0 toGroupWithID:(id)a1;
- (BOOL)removeSpecifierAtIndexPath:(id)a0;
- (BOOL)insertContiguousSpecifiers:(id)a0 afterSpecifierWithID:(id)a1;
- (BOOL)appendSpecifier:(id)a0;
- (BOOL)swapSpecifierAtIndex:(unsigned long long)a0 withSpecifierAtIndex:(unsigned long long)a1;
- (BOOL)insertSpecifier:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_removeOneSpecifierOnlyAtIndex:(unsigned long long)a0;
- (BOOL)removeSpecifiersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)reloadSpecifierAtIndexPath:(id)a0;
- (BOOL)reloadSpecifiers:(id)a0;
- (BOOL)removeSpecifiersInGroup:(id)a0;
- (id)initWithSpecifiers:(id)a0;
- (void)enumerateUpdatesUsingBlock:(id /* block */)a0;
- (BOOL)removeSpecifier:(id)a0;
- (BOOL)removeSpecifierAtIndex:(unsigned long long)a0;

@end
