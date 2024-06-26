@class Protocol;
@protocol PROPlugInFirewallErrorHandler;

@interface PROPlugInFirewall : NSObject {
    id<PROPlugInFirewallErrorHandler> errorHandler;
    id protectedObject;
    Protocol *protocol;
    Protocol *secondaryProtocol;
}

+ (id)methodSignatureForSelector:(SEL)a0;
+ (void)forwardInvocation:(id)a0;
+ (void)doesNotRecognizeSelector:(SEL)a0;
+ (void)deadMethod;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (void)dealloc;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)protectedObject;
- (void)deadMethod;
- (id)initWithProtectedObject:(id)a0 protocol:(id)a1 secondaryProtocol:(id)a2 errorHandler:(id)a3;

@end
