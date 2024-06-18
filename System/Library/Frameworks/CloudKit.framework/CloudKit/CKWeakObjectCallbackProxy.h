@class Protocol;

@interface CKWeakObjectCallbackProxy : NSObject

@property (weak, nonatomic) id weakObject;
@property (readonly, nonatomic) BOOL hadObject;
@property (readonly, nonatomic) Protocol *callbackProtocol;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithWeakObject:(id)a0 callbackProtocol:(id)a1;

@end
