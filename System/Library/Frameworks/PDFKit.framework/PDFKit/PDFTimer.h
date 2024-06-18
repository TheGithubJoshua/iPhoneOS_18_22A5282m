@class PDFTimerPrivate;

@interface PDFTimer : NSObject {
    PDFTimerPrivate *_private;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)update;
- (void)_execute;
- (id)initWithSelector:(SEL)a0 forTarget:(id)a1;
- (id)initWithThrottleDelay:(double)a0 forSelector:(SEL)a1 forTarget:(id)a2;
- (BOOL)isUpdateQueued;

@end
