@interface VisualIntelligence.CancelSession : NSObject <VIQueryHandling> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _isCanceled;
    void /* unknown type, empty encoding */ onCancels;
    void /* unknown type, empty encoding */ lock;
}

- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;

@end
