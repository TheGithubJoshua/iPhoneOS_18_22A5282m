@class _TtC18PreviewsFoundation19ObjcSingleFireEvent;

@interface UVObjCSingleFireEvent : NSObject {
    _TtC18PreviewsFoundation19ObjcSingleFireEvent *_event;
}

@property (readonly, nonatomic) BOOL hasFired;

- (id)init;
- (void)cancel;
- (void)fire;
- (void).cxx_destruct;
- (void)addObserver:(id /* block */)a0;

@end
