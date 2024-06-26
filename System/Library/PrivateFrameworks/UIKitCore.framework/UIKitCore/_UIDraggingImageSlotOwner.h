@class _UIDragManager, NSMutableArray;

@interface _UIDraggingImageSlotOwner : NSObject {
    NSMutableArray *_usedSlotIDs;
}

@property (readonly, weak, nonatomic) _UIDragManager *dragManager;

- (void).cxx_destruct;
- (void)dealloc;
- (void)addUsedSlotID:(unsigned int)a0;
- (id)initWithDragManager:(id)a0;
- (unsigned int)uploadImage:(struct CGImage { } *)a0;

@end
