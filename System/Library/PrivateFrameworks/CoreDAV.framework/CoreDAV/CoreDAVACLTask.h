@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask

@property (retain, nonatomic) NSArray *accessControlEntities;
@property (weak, nonatomic) id<CoreDAVACLTaskDelegate> delegate;

- (id)initWithURL:(id)a0;
- (id)httpMethod;
- (id)requestBody;
- (void).cxx_destruct;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithAccessControlEntities:(id)a0 atURL:(id)a1;

@end
