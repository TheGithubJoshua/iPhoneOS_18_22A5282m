@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject

@property (retain) IMDoubleLinkedListNode *first;
@property (retain) IMDoubleLinkedListNode *last;
@property (readonly) unsigned long long count;

- (id)init;
- (void)appendObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)dealloc;
- (id)allObjects;
- (void)appendLinkedListNode:(id)a0;
- (void)pushLinkedListNode:(id)a0;
- (void)removeLinkedListNode:(id)a0;
- (id)popObject;
- (void)pushObject:(id)a0;

@end
