@class SBSSystemNotesPresentationClientToServerProxy, NSString, NSHashTable, SBSSystemNotesPresentationConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface SBSSystemNotesPresentationHandle : NSObject <SBSSystemNotesPresentationServerToClientInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _lock_state;
    long long _lock_presentationMode;
    NSHashTable *_lock_observers;
    SBSSystemNotesPresentationClientToServerProxy *_handleClient;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    SBSSystemNotesPresentationConfiguration *_configuration;
}

@property (readonly, nonatomic) long long presentationMode;
@property (readonly, copy, nonatomic) SBSSystemNotesPresentationConfiguration *requestedConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_invalidateWithError:(id)a0 locally:(BOOL)a1;
- (oneway void)configuration:(id)a0 didChangeToPresentationMode:(id)a1;
- (oneway void)configuration:(id)a0 didInvalidateWithError:(id)a1;
- (id)initWithConfiguration:(id)a0 client:(id)a1;

@end
