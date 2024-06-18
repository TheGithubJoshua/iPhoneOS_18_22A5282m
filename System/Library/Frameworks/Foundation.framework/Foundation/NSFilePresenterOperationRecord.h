@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {
    NSString *reactorID;
}

@property (readonly) NSString *operationDescription;
@property (readonly) long long state;
@property (readonly, weak) id reactor;

+ (id)operationRecordWithDescription:(id)a0 reactor:(id)a1;

- (void).cxx_destruct;
- (void)didEnd;
- (id)description;
- (void)willEnd;
- (void)dealloc;
- (id)_reactorQueue;
- (void)didBegin;

@end
