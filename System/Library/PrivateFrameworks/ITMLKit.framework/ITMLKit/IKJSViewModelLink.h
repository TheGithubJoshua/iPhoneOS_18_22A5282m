@class NSDictionary, IKDOMDocument;
@protocol IKJSViewModelLinkDelegate;

@interface IKJSViewModelLink : IKJSEventListenerObject <IKJSViewModelLink, _IKJSViewModelLinkProxy, _IKJSViewModelLink> {
    BOOL _isClosed;
    struct { BOOL hasDocumentDidChange; BOOL hasResponseDictionaryDidChange; } _delegateFlags;
}

@property (weak, nonatomic) id<IKJSViewModelLinkDelegate> delegate;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) IKDOMDocument *document;

- (id)init;
- (void)close:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_unhandled;
- (id)asPrivateIKJSViewModelLink;

@end
