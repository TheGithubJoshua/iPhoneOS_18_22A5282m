@class NSString, NSArray, NSUUID, TTMergeableAttributedString, CRDocument, NSObject;
@protocol CRUndoDelegate;

@interface TTArray : NSObject <CRCoding, TTMergeableStringDelegate, CRDataType>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TTMergeableAttributedString *contents;
@property (readonly, nonatomic) NSArray *nsArray;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (weak, nonatomic) CRDocument *document;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeLastObject;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithContents:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)initWithCRCoder:(id)a0;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)tombstone;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)walkGraph:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)endEditing;
- (id)initWithDocument:(id)a0;
- (void)addObject:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)encodeWithCRCoder:(id)a0;
- (void)beginEditing;
- (void)mergeWith:(id)a0;
- (void)addUndoCommand:(id)a0;
- (BOOL)wantsUndoCommands;
- (id)initWithArchive:(const void *)a0 andReplicaID:(id)a1;
- (id)initWithCRCoder:(id)a0 stringArray:(const void *)a1;
- (void)saveToArchive:(void *)a0;
- (id)serializeDataFromArchive:(const void *)a0;
- (id)textAttachmentAtIndex:(unsigned long long)a0;

@end
