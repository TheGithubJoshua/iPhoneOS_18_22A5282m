@interface AppStoreKitInternal.GameCenterFriendRequestCoordinator : NSObject <GKDaemonProxyDataUpdateDelegate> {
    void /* unknown type, empty encoding */ onFriendRequestCountDidUpdate;
    void /* unknown type, empty encoding */ currentFriendRequestCount;
}

- (id)init;
- (void)accountsDidChangeWithNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;

@end
