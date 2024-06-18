@interface WebCoreReplayKitScreenRecorderHelper : NSObject {
    struct WeakPtr<WebCore::ReplayKitCaptureSource, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _callback;
}

- (id)initWithCallback:(void *)a0;
- (void)disconnect;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
