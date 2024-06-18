@class NSSet;
@protocol CalDAVMkcalendarTaskDelegate, CoreDAVTaskDelegate;

@interface CalDAVMkcalendarTask : CoreDAVTask

@property (retain, nonatomic) NSSet *setElements;
@property (nonatomic) id<CalDAVMkcalendarTaskDelegate, CoreDAVTaskDelegate> delegate;

- (id)initWithURL:(id)a0;
- (id)httpMethod;
- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithPropertiesToSet:(id)a0 atURL:(id)a1;
- (void)setSupportForEvents:(BOOL)a0 tasks:(BOOL)a1;

@end
