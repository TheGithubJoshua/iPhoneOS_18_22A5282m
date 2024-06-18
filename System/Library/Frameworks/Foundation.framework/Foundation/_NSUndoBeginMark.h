@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
}

- (void)setGroupIdentifier:(id)a0;
- (id)groupIdentifier;
- (BOOL)isDiscardable;
- (BOOL)isBeginMark;
- (id)description;
- (void)dealloc;
- (void)setDiscardable:(BOOL)a0;

@end
