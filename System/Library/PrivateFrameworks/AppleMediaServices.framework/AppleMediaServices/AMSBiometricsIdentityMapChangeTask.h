@class NSURLSessionTask, ACAccount, AMSURLSession;

@interface AMSBiometricsIdentityMapChangeTask : AMSTask

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *task;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithAccount:(id)a0 session:(id)a1 task:(id)a2;

@end
