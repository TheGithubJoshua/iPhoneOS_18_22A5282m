@class NSObject, NSXPCConnection;
@protocol INIntentPreferencesAndVocabularyUpdateService, OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    id<INIntentPreferencesAndVocabularyUpdateService> _remoteObjectProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;

- (id)_connection;
- (void)_clearConnection;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)settingsService;
- (id)_syncService;

@end
