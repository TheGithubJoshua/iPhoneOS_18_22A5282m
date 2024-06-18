@class NSObject, NSString, NSOperationQueue, NSDate, CKDContainer, CKDOperation;
@protocol OS_dispatch_group;

@interface CKDPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
    int _executionState;
}

@property (retain, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) CKDOperation *realOperation;
@property (readonly, nonatomic) NSOperationQueue *targetOperationQueue;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, weak, nonatomic) CKDContainer *container;

- (void)transitionToExecuting;
- (void)main;
- (id)statusReportWithIndent:(unsigned long long)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)ckShortDescription;
- (void)cancel;
- (void)start;
- (BOOL)isConcurrent;
- (void).cxx_destruct;
- (id)description;
- (void)transitionToFinished;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)_startDateString;
- (id)initWithOperation:(id)a0 targetOperationQueue:(id)a1;

@end
