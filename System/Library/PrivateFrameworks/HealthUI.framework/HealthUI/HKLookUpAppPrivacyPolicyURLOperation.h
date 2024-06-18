@class NSString, NSURL, NSError, AMSPromise;

@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (copy) NSURL *privacyPolicyURL;
@property (copy) NSError *error;
@property (retain) AMSPromise *outstandingPromise;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (BOOL)isAsynchronous;
- (id)init;
- (void)cancel;
- (void)start;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)_performLookup;

@end
