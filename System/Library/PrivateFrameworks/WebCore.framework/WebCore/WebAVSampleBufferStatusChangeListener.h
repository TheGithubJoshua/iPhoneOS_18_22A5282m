@interface WebAVSampleBufferStatusChangeListener : NSObject {
    struct WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _parent;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)begin;
- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithParent:(void *)a0;
- (void)dealloc;

@end
