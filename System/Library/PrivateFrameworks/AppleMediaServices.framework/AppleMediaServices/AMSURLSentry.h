@class NSURL, NSError;

@interface AMSURLSentry : NSObject {
    void /* unknown type, empty encoding */ bag;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithBag:(id)a0;
- (void)isTrustedURL:(NSURL *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

@end
