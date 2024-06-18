@interface PreviewsFoundation.ObjcSingleFireEvent : NSObject {
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) BOOL hasFired;

- (id)init;
- (void)cancel;
- (void)fire;
- (void).cxx_destruct;
- (void)addObserver:(id /* block */)a0;

@end
