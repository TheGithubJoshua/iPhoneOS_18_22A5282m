@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)init;
- (id)target;
- (id)initWithTarget:(id)a0;
- (void)invoke;
- (BOOL)isEndMark;
- (BOOL)isBeginMark;

@end
