@class NSUUID, CATTaskRequest;
@protocol CATTaskOperationNotificationDelegate;

@interface CATTaskOperation : CATOperation

@property (copy, nonatomic) NSUUID *remoteUUID;
@property (readonly, nonatomic) CATTaskRequest *request;
@property (weak, nonatomic) id<CATTaskOperationNotificationDelegate> notificationDelegate;

+ (id)new;
+ (BOOL)isCancelable;
+ (BOOL)validateRequest:(id)a0 error:(id *)a1;

- (id)initWithRequest:(id)a0;
- (void)main;
- (BOOL)canSendNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)cat_addAssertion:(id)a0;
- (id)init;
- (id)cat_assertions;
- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)processMessage:(id)a0;
- (void).cxx_destruct;

@end
