@class NSString, EKAvailabilityCache, NSArray, NSError, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface EKRequestAvailabilityOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
    EKAvailabilityCache *_availabilityCache;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_ignoredEventID;
    NSArray *_addresses;
    id /* block */ _resultsBlock;
    id _requestID;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSError *error;

- (void)main;
- (id)init;
- (void)cancel;
- (void)_finishWithError:(id)a0;
- (void)start;
- (BOOL)isConcurrent;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithSource:(id)a0 startDate:(id)a1 endDate:(id)a2 ignoredEventID:(id)a3 addresses:(id)a4 resultsBlock:(id /* block */)a5;

@end
