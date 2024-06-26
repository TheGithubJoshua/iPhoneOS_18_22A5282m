@class SSURLRequestProperties;

@interface SUXMLHTTPRequestOperation : ISOperation {
    id /* block */ _outputBlock;
    SSURLRequestProperties *_requestProperties;
}

@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (void)run;
- (id)initWithRequestProperties:(id)a0;
- (BOOL)_isAllowedURL:(id)a0 withURLBag:(id)a1;

@end
