@class GKListNode;

@interface GKLinkedList : NSObject

@property (retain, nonatomic) GKListNode *headNode;
@property (retain, nonatomic) GKListNode *tailNode;

- (void)removeNode:(id)a0;
- (id)init;
- (void)removeAllNodes;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)insertNode:(id)a0 before:(id)a1;
- (BOOL)hasCycle;
- (void)insertNodeAtBeginning:(id)a0;
- (id)insertNodeAtBeginningWithValue:(id)a0 forKey:(id)a1;
- (BOOL)isConsistent;
- (id)nodeForInsertionWithValue:(id)a0;

@end
