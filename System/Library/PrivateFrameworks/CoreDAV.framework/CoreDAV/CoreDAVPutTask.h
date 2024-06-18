@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask

@property (retain, nonatomic) NSString *nextETag;
@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;

- (id)httpMethod;
- (void).cxx_destruct;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
