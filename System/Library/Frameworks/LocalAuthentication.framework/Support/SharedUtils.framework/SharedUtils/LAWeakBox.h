@interface LAWeakBox : NSObject {
    id _receiver;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithReceiver:(id)a0;

@end
