@class SSURLConnectionRequest;

@interface RadioTermsCheckRequest : RadioRequest {
    SSURLConnectionRequest *_request;
}

@property (nonatomic) unsigned long long acceptedTermsVersion;

- (void)cancel;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
