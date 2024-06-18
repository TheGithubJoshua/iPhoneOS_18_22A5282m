@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) id appSpecificDataItemResult;
@property (nonatomic) BOOL forceNoCache;

- (unsigned long long)cachePolicy;
- (id)httpMethod;
- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
