@class NSError, NSObject;
@protocol GSProtocol;

@interface GSDaemonProxySync : NSProxy <GSProtocol> {
    NSObject<GSProtocol> *_target;
}

@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSError *error;

+ (id)proxy;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)finalize;
- (id)initWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (struct __CFError { } *)copyCFError;
- (void)handleBoolResult:(BOOL)a0 error:(id)a1;
- (void)handleObjResult:(id)a0 error:(id)a1;

@end
