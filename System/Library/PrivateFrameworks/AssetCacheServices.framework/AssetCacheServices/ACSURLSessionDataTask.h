@interface ACSURLSessionDataTask : ACSURLSessionTask

@property (copy) id /* block */ _clientDataCompletionHandler;

- (BOOL)_isUpload;
- (id)initWithNSURLDataTaskCreator:(id /* block */)a0 initialRequest:(id)a1 forSession:(id)a2;
- (void).cxx_destruct;

@end
