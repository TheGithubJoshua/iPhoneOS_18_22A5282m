@class NSError, NSString, NSObject;
@protocol OS_dispatch_queue, FBSProcessInternal, FBSProcessExecutionProvisionDelegate;

@interface FBSProcessExecutionProvision : NSObject <BSDescriptionProviding, NSCopying> {
    BOOL _activated;
    NSObject<OS_dispatch_queue> *_delegateCalloutQueue;
}

@property (weak, nonatomic) id<FBSProcessExecutionProvisionDelegate> delegate;
@property (readonly, weak, nonatomic) id<FBSProcessInternal> process;
@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring;
@property (readonly, nonatomic, getter=isViolated) BOOL violated;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgress;
- (void)_updateProgress;
- (id)init;
- (void)stopMonitoring;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_stopMonitoring;
- (BOOL)isResourceProvision;
- (void)monitorProcess:(id)a0;
- (void)_beginMonitoring;
- (id)succinctDescription;
- (void)_noteViolatedWithError:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)prepareForReuse;
- (void)_performDelegateCallout:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_prepareForReuse;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
