@class NSMutableSet, NSUUID, NSMapTable, NSSet, NSXPCConnection, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol> {
    NSXPCConnection *_connection;
    BOOL _connectionInitializationSucceeded;
    BOOL _activityContinuationIsEnabled;
    BOOL _allowedToConnect;
    NSMutableSet *_userActivityUUIDsSendToServer;
    int _useractivitydpid;
}

@property (readonly) NSObject<OS_dispatch_queue> *serverQ;
@property (copy) NSUUID *activeUserActivityUUID;
@property (retain) NSMapTable *userActivitiesByUUID;
@property (retain) NSMapTable *activeUserActivitiesByUUID;
@property (readonly, copy) NSSet *userActivityUUIDsSendToServer;
@property BOOL needToSendInitialMessage;
@property BOOL registeredForAppResignationMessages;
@property (readonly) NSXPCConnection *connection;
@property BOOL allowedToConnect;
@property (readonly) BOOL supportsActivityContinuation;
@property (readonly) BOOL activityContinuationIsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (BOOL)shouldSupportActivityContinuation;
+ (id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)a0 dynamicType:(id)a1 kind:(unsigned long long)a2 teamIdentifier:(id)a3;
+ (BOOL)userActivityContinuationSupported;

- (void)connectionInterrupted;
- (id)init;
- (BOOL)hasUserActivityWithUUID:(id)a0;
- (void)connectionInvalidated;
- (void)registerForApplicationDeactivateIfNecessary;
- (void)sendCurrentActivityToIndexer:(id)a0;
- (void)askClientUserActivityToSave:(id)a0;
- (void)makeActive:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)removeDynamicUserActivity:(id)a0 matching:(id)a1;
- (void)tellClientUserActivityItWasResumed:(id)a0;
- (id)createByDecodingUserActivity:(id)a0;
- (void)markUserActivityAsDirty:(id)a0 forceImmediate:(BOOL)a1;
- (id)fetchUUID:(id)a0 intervalToWaitForDocumentSynchonization:(double)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)userActivityIsActive:(id)a0;
- (BOOL)initialServerHandshake:(BOOL)a0;
- (void)addDynamicUserActivity:(id)a0 matching:(id)a1;
- (BOOL)determineIfUserActivityIsCurrent:(id)a0 completionHandler:(id /* block */)a1;
- (id)userActivityForUUID:(id)a0;
- (id)activities;
- (id)activeActivitiesByPriority;
- (BOOL)registerAsProxyForApplication:(int)a0 options:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)currentUserActivityUUIDWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)pinUserActivity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)currentUserActivityProxiesWithOptions:(id)a0 predicate:(id)a1 completionHandler:(id /* block */)a2;
- (void)tellDaemonAboutNewLSUserActivity:(id)a0;
- (void)sendToIndexerIfAppropriate:(id)a0 force:(BOOL)a1;
- (void)dealloc;
- (void)askClientUserActivityToSave:(id)a0 completionHandler:(id /* block */)a1;
- (void)didReceiveInputStreamWithUUID:(id)a0 inputStream:(id)a1 outputStream:(id)a2;
- (id)encodeUserActivity:(id)a0;
- (void)tellClientDebuggingEnabled:(BOOL)a0 logFileHandle:(id)a1;
- (void)sendUserActivityInfoToLSUserActivityd:(id)a0 makeCurrent:(BOOL)a1;
- (void)makeInactive:(id)a0;
- (void)removeUserActivity:(id)a0;
- (void)unregisterForApplicationDeactivation;
- (void)addUserActivity:(id)a0;

@end
