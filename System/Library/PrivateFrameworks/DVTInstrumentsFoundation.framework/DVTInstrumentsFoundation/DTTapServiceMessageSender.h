@class DTXChannel;

@interface DTTapServiceMessageSender : NSObject

@property (readonly, retain, nonatomic) DTXChannel *channel;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0;
- (id)initWithChannel:(id)a0;
- (void)sendBarrierMessage;

@end
