@class SYChangeMessage, NSObject;
@protocol OS_os_activity;

@interface SYIncomingTransactionSession : SYSession {
    NSObject<OS_os_activity> *_sessionActivity;
    SYChangeMessage *_message;
    id /* block */ _completion;
    BOOL canRestart;
    BOOL canRollback;
    unsigned int state;
}

- (void)setState:(unsigned int)a0;
- (unsigned long long)protocolVersion;
- (unsigned int)state;
- (void)start:(id /* block */)a0;
- (BOOL)wasCancelled;
- (void)cancelWithError:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSending;
- (void)_sendComplete;
- (BOOL)isResetSync;
- (void)setCanRollback:(BOOL)a0;
- (void)_sendCancelled;
- (void)_sendChanges;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)didCompleteSession;
- (id)initWithService:(id)a0 transaction:(id)a1 completion:(id /* block */)a2;
- (void)setCanRestart:(BOOL)a0;

@end
