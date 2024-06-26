@class NSString, NSDate;

@interface ACHXPCScheduler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *lastSuccessfulRunDateKey;
@property (readonly, copy, nonatomic) id /* block */ performHandler;
@property (retain, nonatomic) NSDate *lastSuccessfulRunDate;

- (id)initWithName:(id)a0 performHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_registerActivity;
- (void)_handleCompletionResult:(BOOL)a0 error:(id)a1 activity:(id)a2;
- (void)_performActivity:(id)a0;
- (void)_handleXPCActivityCallback:(id)a0;
- (void)synthesizeActivityFireWithCompletion:(id /* block */)a0;

@end
