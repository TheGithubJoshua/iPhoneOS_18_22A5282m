@class NSUUID, NSString, NSArray, NSError, NSExtension, NSOperationQueue, INWatchdogTimer, NSObject;
@protocol OS_dispatch_queue;

@interface INCExtensionRequest : NSObject {
    NSUUID *_requestIdentifier;
    INWatchdogTimer *_contextTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_requestOperationQueue;
}

@property (retain, nonatomic, setter=_setExtension:) NSExtension *_extension;
@property (retain, nonatomic, setter=_setError:) NSError *_error;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *extensionInputItems;
@property (nonatomic) BOOL requiresTCC;

+ (void)initialize;

- (id)initWithIdentifier:(id)a0;
- (id)_requestOperationQueue;
- (void)_scheduleContextTimer;
- (void)startRequestForIntent:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_resetContextTimer;
- (id)_extensionContextHost;
- (void)reset;
- (void)_resetExtensionContextHostWithCompletion:(id /* block */)a0;

@end
