@class NSOrderedSet, KNSlideNode;

@interface KNSlideCollectionSelection : TSKSelection

@property (readonly, nonatomic) NSOrderedSet *slideNodes;
@property (readonly, nonatomic) KNSlideNode *slideNodeToEdit;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isContiguous) BOOL contiguous;

+ (Class)archivedSelectionClass;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)UUIDDescription;
- (id)initWithSlideNode:(id)a0;
- (id)initWithSlideNodes:(id)a0 slideNodeToEdit:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
