@interface GameCenterUI.GameCenterDataUpdatePresenter : NSObject <GKDaemonProxyDataUpdateDelegate> {
    void /* unknown type, empty encoding */ onGameCenterDataUpdate;
}

- (id)init;
- (void)friendRequestSelected:(id)a0;
- (void)setBadgeCount:(long long)a0 forType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)refreshFriendContents:(id)a0;

@end
