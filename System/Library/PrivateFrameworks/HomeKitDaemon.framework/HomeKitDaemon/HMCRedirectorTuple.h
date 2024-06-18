@class HMCRedirector;

@interface HMCRedirectorTuple : HMFObject <HMFCancellable> {
    HMCRedirector *_owner;
    id _target;
    SEL _selector;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (id)attributeDescriptions;

@end
