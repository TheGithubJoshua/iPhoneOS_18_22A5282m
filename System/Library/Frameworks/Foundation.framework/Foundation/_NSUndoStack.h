@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)setGroupIdentifier:(id)a0;
- (void)markEnd;
- (id)init;
- (void)push:(id)a0;
- (id)groupIdentifier;
- (void)removeAllObjectsWithTarget:(id)a0;
- (BOOL)isDiscardable;
- (void)removeAllObjects;
- (unsigned long long)nestingLevel;
- (void)setMax:(unsigned long long)a0;
- (unsigned long long)max;
- (void)markBegin;
- (id)description;
- (BOOL)popAndInvoke;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (void)_removeBottom;
- (id)topUndoObject;
- (unsigned long long)count;
- (id)popUndoObject;
- (id)_beginMark;
- (void)setDiscardable:(BOOL)a0;

@end
