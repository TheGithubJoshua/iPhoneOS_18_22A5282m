@class AFLinkedListItem;
@protocol AFQueueDelegate;

@interface AFQueue : NSObject <NSFastEnumeration> {
    AFLinkedListItem *_head;
    AFLinkedListItem *_tail;
    unsigned long long _count;
}

@property (readonly, nonatomic) id frontObject;
@property (readonly, nonatomic) unsigned long long count;
@property (weak, nonatomic) id<AFQueueDelegate> delegate;

- (void)enqueueObject:(id)a0;
- (void)enqueueObjects:(id)a0;
- (id)dequeueAllObjects;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)dequeueObject;
- (void)dealloc;
- (id)_objects;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
