@class NSString, NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue;

@interface CWFKeyValueStore : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSUbiquitousKeyValueStore *_ubiquitousKVS;
    int _unlockNotificationToken;
}

@property (nonatomic, getter=isActivated) BOOL activated;
@property (readonly) long long type;
@property (readonly, copy) NSString *identifier;
@property (copy) id /* block */ invalidationHandler;
@property (copy) id /* block */ eventHandler;

- (void)removeAllEntries;
- (id)__debugDescriptionForType:(long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)dictionaryRepresentation;
- (BOOL)__synchronize;
- (BOOL)synchronize;
- (id)objectForKey:(id)a0;
- (void)activate;
- (void)addEntriesFromDictionary:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)__ubiquitousKVSChanged:(id)a0;

@end
