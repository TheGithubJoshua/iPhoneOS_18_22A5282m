@class NSArray, NSMutableArray, NSMapTable;

@interface HMObjectMergeCollection : NSObject

@property (retain, nonatomic) NSMutableArray *currentExistingObjects;
@property (retain, nonatomic) NSMutableArray *currentAddedObjects;
@property (retain, nonatomic) NSMutableArray *currentRemovedObjects;
@property (retain, nonatomic) NSMutableArray *currentModifiedObjects;
@property (retain, nonatomic) NSMapTable *commonObjectsMaps;
@property (readonly, nonatomic) NSArray *addedObjects;
@property (readonly, nonatomic) NSArray *removedObjects;
@property (readonly, nonatomic) NSArray *modifiedObjects;
@property (readonly, nonatomic) NSArray *existingObjects;
@property (readonly, nonatomic, getter=isModified) BOOL modified;
@property (readonly, nonatomic) unsigned long long modifiedCount;

- (id)init;
- (id)initWithExistingObjects:(id)a0 newObjects:(id)a1;
- (void)_replaceAddedObjectsWithObjectsFromArray:(id)a0;
- (id)finalMergeCollection;
- (void)mergeCommonObjectsNoMergeCount;
- (void)_mergeCommonObjects;
- (void).cxx_destruct;
- (void)_enumerateObjectAdditionWithBlock:(id /* block */)a0;
- (void)_enumerateObjectRemoveWithBlock:(id /* block */)a0;

@end
