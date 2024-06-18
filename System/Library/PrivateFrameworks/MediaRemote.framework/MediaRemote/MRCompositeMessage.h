@class NSArray, NSMutableArray, MRProtocolMessageOptions;

@interface MRCompositeMessage : MRProtocolMessage {
    NSMutableArray *_messages;
    MRProtocolMessageOptions *_transportOptions;
}

@property (readonly, nonatomic) NSArray *messages;

- (id)init;
- (void)setTransportOptions:(id)a0;
- (id)transportOptions;
- (void).cxx_destruct;
- (id)description;
- (void)addMessage:(id)a0;

@end
