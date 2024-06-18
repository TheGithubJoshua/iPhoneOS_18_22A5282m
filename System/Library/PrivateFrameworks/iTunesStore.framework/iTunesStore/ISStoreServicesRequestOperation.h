@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {
    SSRequest *_request;
}

@property (readonly) SSRequest *request;

- (id)initWithRequest:(id)a0;
- (void)cancel;
- (void)dealloc;
- (void)run;

@end
