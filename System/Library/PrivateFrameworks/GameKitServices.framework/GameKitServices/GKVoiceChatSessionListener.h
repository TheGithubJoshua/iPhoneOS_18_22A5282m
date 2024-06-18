@class GKRWLock, NSMutableArray, GKSessionInternal;

@interface GKVoiceChatSessionListener : NSObject {
    NSMutableArray *_conferenceList;
    GKSessionInternal *_gkSession;
    GKRWLock *_rwlock;
}

- (void)removeSession:(id)a0;
- (id)initWithSession:(id)a0;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(unsigned int)a2;
- (void)dealloc;
- (id)currentSessions;
- (void)receivedNewVoiceChatOOBMessage:(id)a0 fromPeerID:(id)a1;
- (void)registerNewGKVoiceChatSession:(id)a0;

@end
