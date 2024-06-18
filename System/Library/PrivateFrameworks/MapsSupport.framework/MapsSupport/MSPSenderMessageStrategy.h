@class NSMutableSet;
@protocol MSPSenderMessageStrategyDelegate;

@interface MSPSenderMessageStrategy : MSPSenderStrategy

@property (retain, nonatomic) NSMutableSet *messagesParticipants;
@property (weak, nonatomic) id<MSPSenderMessageStrategyDelegate> delegate;

- (void)setState:(id)a0;
- (void)addParticipants:(id)a0;
- (id)participants;
- (void).cxx_destruct;
- (void)removeParticipants:(id)a0;
- (void)_addMessagesParticipants:(id)a0;
- (void)_removeMessagesParticipants:(id)a0;
- (void)sendMessageIfNeeded;

@end
