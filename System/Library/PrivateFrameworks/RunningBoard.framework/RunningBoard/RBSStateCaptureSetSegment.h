@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSetSegment : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_items;
}

@property (readonly, nonatomic) NSSet *items;

- (BOOL)containsItem:(id)a0;
- (void)removeItem:(id)a0;
- (id)init;
- (id)_stateCapture;
- (void)addItem:(id)a0 withLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)count;

@end
