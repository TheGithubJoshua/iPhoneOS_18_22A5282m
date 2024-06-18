@class NSMutableIndexSet;

@interface _UIRTree : NSObject {
    struct shared_ptr<_UIRTreeContainerNode> { struct _UIRTreeContainerNode *__ptr_; struct __shared_weak_count *__cntrl_; } _root;
    struct _NSRange { unsigned long long location; unsigned long long length; } _allIndexesRange;
    NSMutableIndexSet *_allIndexes;
}

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndex:(long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;

@end
