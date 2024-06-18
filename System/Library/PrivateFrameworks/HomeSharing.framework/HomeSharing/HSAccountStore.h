@class NSString, ICURLRequest, NSObject;
@protocol OS_dispatch_queue;

@interface HSAccountStore : NSObject {
    int _defaultsDidChangeToken;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) ICURLRequest *groupIDRequest;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *password;

+ (id)defaultStore;

- (id)groupID;
- (id)appleID;
- (void)setAppleID:(id)a0;
- (void)clearCaches;
- (id)init;
- (void)setGroupID:(id)a0;
- (void)clearAllCredentials;
- (void)determineGroupIDWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)password;
- (void)clearGroupID;
- (BOOL)canDetermineGroupID;
- (void)dealloc;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(id /* block */)a0;
- (void)setPassword:(id)a0;

@end
