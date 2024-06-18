@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest {
    id _productsRequestInternal;
}

@property (weak, nonatomic) id<SKProductsRequestDelegate> delegate;

- (void)_start;
- (id)init;
- (void)_logEventWithPrimaryError:(id)a0 mappedError:(id)a1;
- (id)initWithProductIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)_newResponseForProducts:(id)a0 invalidIdentifiers:(id)a1;
- (void)_startWithCompletionHandler:(id /* block */)a0;

@end
