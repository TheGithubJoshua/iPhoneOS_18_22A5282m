@class NSURLSession, NSURLSessionTask, NSDictionary, NSURL, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface _ICQMegaBackupNetworkRequest : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_URLSession;
    NSURLSessionTask *_URLSessionTask;
    id /* block */ _completionHandler;
}

@property (readonly, copy, nonatomic) NSURL *requestURL;
@property (readonly, copy, nonatomic) NSDictionary *requestHeaders;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSDictionary *additionalRequestHeaders;
@property (readonly, copy, nonatomic) NSDictionary *bodyJSON;

- (void)_completeWithError:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resumeWithCompletionHandler:(id /* block */)a0;
- (id)_createURLRequestWithError:(id *)a0;
- (id)_dictionaryFromData:(id)a0 response:(id)a1 error:(id *)a2;
- (id)_errorForURLRequestError:(id)a0;
- (id)errorForUnsuccessfulResponse:(id)a0 body:(id)a1;
- (id)handleResponse:(id)a0 body:(id)a1;
- (void)handleURLResponse:(id)a0 data:(id)a1 error:(id)a2;
- (id)initWithRequestURL:(id)a0 URLSession:(id)a1 queue:(id)a2;
- (void)_performURLRequest:(id)a0;
- (void)addAdditionalRequestHeaders:(id)a0;

@end
