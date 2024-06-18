@class NSArray;

@interface WebCoreNSURLSessionTaskMetrics : NSObject {
    struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> { void *m_ptr; } _transactionMetrics;
}

@property (readonly, copy) NSArray *transactionMetrics;

- (id)transactionMetrics;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithMetrics:(void *)a0;

@end
