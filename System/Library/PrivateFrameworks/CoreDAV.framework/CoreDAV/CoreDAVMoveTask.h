@class NSString;
@protocol CoreDAVMoveTaskDelegate;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask

@property (weak, nonatomic) id<CoreDAVMoveTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (id)httpMethod;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)_callBackToDelegateWithResponses:(id)a0 error:(id)a1;

@end
