@class NSString;
@protocol MTAgentDiagnosticDelegate;

@interface MTAgentDiagnosticListener : NSObject <MTAgentNotificationListener>

@property (weak, nonatomic) id<MTAgentDiagnosticDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (id)initWithDelegate:(id)a0;
- (void)_addStateHandler;
- (void).cxx_destruct;

@end
