@class NSObject;
@protocol OS_dispatch_queue;

@interface OperationState : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property BOOL operationCancelled;
@property int operationRefcount;

- (void)end;
- (id)init;
- (BOOL)cancelled;
- (void)cancel;
- (BOOL)begin;
- (void).cxx_destruct;

@end
